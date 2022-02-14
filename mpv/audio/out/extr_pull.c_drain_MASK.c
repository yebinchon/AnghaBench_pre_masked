
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ao_pull_state {int * buffers; int draining; int state; } ;
struct ao {scalar_t__ bps; struct ao_pull_state* api_priv; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct ao*) ;
 double FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (struct ao*) ;

__attribute__((used)) static void FUNC_8(struct ao *VAR_0)
{
    struct ao_pull_state *VAR_1 = VAR_0->api_priv;
    int VAR_2 = FUNC_1(&VAR_1->state);
    if (FUNC_0(VAR_2)) {
        FUNC_2(&VAR_1->draining, 1);

        FUNC_5(FUNC_4(VAR_1->buffers[0]) / (double)VAR_0->bps * 1e6);




        int64_t VAR_3 = FUNC_6() + 250000;
        while (FUNC_6() < VAR_3 && !FUNC_3(VAR_0))
            FUNC_5(1);
    }
    FUNC_7(VAR_0);
}
