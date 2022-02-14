
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xvctx {int Shm_Warned_Slow; scalar_t__ Shmem_Flag; } ;
struct vo_x11_state {int ShmCompletionWaitCount; } ;
struct vo {struct vo_x11_state* x11; struct xvctx* priv; } ;


 int FUNC_0 (struct vo*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct vo*) ;

__attribute__((used)) static void FUNC_3(struct vo *VAR_0, int VAR_1)
{
    struct xvctx *VAR_2 = VAR_0->priv;
    struct vo_x11_state *VAR_3 = VAR_0->x11;
    if (VAR_2->Shmem_Flag) {
        while (VAR_3->ShmCompletionWaitCount > VAR_1) {
            if (!VAR_2->Shm_Warned_Slow) {
                FUNC_0(VAR_0, "X11 can't keep up! Waiting"
                        " for XShm completion events...\n");
                VAR_2->Shm_Warned_Slow = 1;
            }
            FUNC_1(1000);
            FUNC_2(VAR_0);
        }
    }
}
