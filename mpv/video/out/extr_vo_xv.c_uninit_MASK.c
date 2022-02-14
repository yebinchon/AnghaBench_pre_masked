
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xvctx {int num_buffers; scalar_t__ f_gc; scalar_t__ vo_gc; int * fo; int * ai; int original_image; } ;
struct vo {TYPE_1__* x11; struct xvctx* priv; } ;
struct TYPE_2__ {int display; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vo*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct vo*) ;

__attribute__((used)) static void FUNC_6(struct vo *VAR_1)
{
    struct xvctx *VAR_2 = VAR_1->priv;
    int VAR_3;

    FUNC_4(VAR_2->original_image);

    if (VAR_2->ai)
        FUNC_2(VAR_2->ai);
    VAR_2->ai = ((void*)0);
    if (VAR_2->fo) {
        FUNC_0(VAR_2->fo);
        VAR_2->fo = ((void*)0);
    }
    for (VAR_3 = 0; VAR_3 < VAR_2->num_buffers; VAR_3++)
        FUNC_3(VAR_1, VAR_3);
    if (VAR_2->f_gc != VAR_0)
        FUNC_1(VAR_1->x11->display, VAR_2->f_gc);
    if (VAR_2->vo_gc != VAR_0)
        FUNC_1(VAR_1->x11->display, VAR_2->vo_gc);

    FUNC_5(VAR_1);
}
