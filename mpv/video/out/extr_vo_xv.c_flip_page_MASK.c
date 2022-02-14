
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xvctx {size_t current_buf; int num_buffers; int Shmem_Flag; int * xvimage; } ;
struct vo {TYPE_1__* x11; struct xvctx* priv; } ;
struct TYPE_2__ {int display; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct vo*,int ) ;

__attribute__((used)) static void FUNC_2(struct vo *VAR_1)
{
    struct xvctx *VAR_2 = VAR_1->priv;
    FUNC_1(VAR_1, VAR_2->xvimage[VAR_2->current_buf]);


    VAR_2->current_buf = (VAR_2->current_buf + 1) % VAR_2->num_buffers;

    if (!VAR_2->Shmem_Flag)
        FUNC_0(VAR_1->x11->display, VAR_0);
}
