
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vo {TYPE_1__* x11; int dheight; int dwidth; } ;
struct TYPE_4__ {int y0; int x0; } ;
struct priv {size_t current_buf; int reset_view; int dst_h; int dst_w; TYPE_2__ dst; int gc; scalar_t__ Shmem_Flag; int ** myximage; struct vo* vo; } ;
typedef int XImage ;
struct TYPE_3__ {int window; int display; int ShmCompletionWaitCount; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int *,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int *,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct priv *VAR_1, XImage *VAR_2)
{
    struct vo *VAR_3 = VAR_1->vo;

    XImage *VAR_4 = VAR_1->myximage[VAR_1->current_buf];

    if (VAR_1->reset_view) {
        FUNC_0(VAR_3->x11->display, VAR_3->x11->window, VAR_1->gc, 0, 0, VAR_3->dwidth, VAR_3->dheight);
        VAR_1->reset_view = 0;
    }

    if (VAR_1->Shmem_Flag) {
        FUNC_2(VAR_3->x11->display, VAR_3->x11->window, VAR_1->gc, VAR_4,
                     0, 0, VAR_1->dst.x0, VAR_1->dst.y0, VAR_1->dst_w, VAR_1->dst_h,
                     VAR_0);
        VAR_3->x11->ShmCompletionWaitCount++;
    } else {
        FUNC_1(VAR_3->x11->display, VAR_3->x11->window, VAR_1->gc, VAR_4,
                  0, 0, VAR_1->dst.x0, VAR_1->dst.y0, VAR_1->dst_w, VAR_1->dst_h);
    }
}
