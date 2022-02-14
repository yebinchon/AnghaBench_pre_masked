
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo {struct priv* priv; } ;
struct priv {scalar_t__ fb_queue_len; unsigned int buf_count; int cur_frame_cropped; int cur_frame; int last_input; int vt_switcher; scalar_t__ vt_switcher_active; TYPE_1__* kms; int * bufs; } ;
struct TYPE_2__ {int fd; } ;


 int FUNC_0 (struct vo*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct vo*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct vo *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    FUNC_0(VAR_0);

    while (VAR_1->fb_queue_len > 0) {
        FUNC_3(VAR_0);
    }

    if (VAR_1->kms) {
        for (unsigned int VAR_2 = 0; VAR_2 < VAR_1->buf_count; VAR_2++)
            FUNC_1(VAR_1->kms->fd, &VAR_1->bufs[VAR_2]);
        FUNC_2(VAR_1->kms);
        VAR_1->kms = ((void*)0);
    }

    if (VAR_1->vt_switcher_active)
        FUNC_5(&VAR_1->vt_switcher);

    FUNC_4(VAR_1->last_input);
    FUNC_4(VAR_1->cur_frame);
    FUNC_4(VAR_1->cur_frame_cropped);
}
