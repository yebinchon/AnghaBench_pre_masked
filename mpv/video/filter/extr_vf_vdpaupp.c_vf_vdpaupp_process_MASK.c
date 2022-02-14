
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct priv {int queue; TYPE_1__* opts; } ;
struct mp_vdpau_mixer_frame {void* current; int opts; void** past; void** future; int field; } ;
struct TYPE_4__ {scalar_t__ hw_subfmt; } ;
struct mp_image {TYPE_2__ params; void** planes; } ;
struct mp_filter {struct priv* priv; } ;
struct TYPE_3__ {int opts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct mp_image*) ;
 struct mp_image* FUNC_6 (int ) ;
 struct mp_vdpau_mixer_frame* FUNC_7 (struct mp_image*) ;
 void* FUNC_8 (struct priv*,struct mp_vdpau_mixer_frame*,int) ;

__attribute__((used)) static void FUNC_9(struct mp_filter *VAR_3)
{
    struct priv *VAR_4 = VAR_3->priv;

    FUNC_1(VAR_4->queue);

    if (!FUNC_0(VAR_4->queue))
        return;

    struct mp_image *VAR_5 =
        FUNC_6(FUNC_2(VAR_4->queue, 0));
    if (!VAR_5)
        return;
    struct mp_vdpau_mixer_frame *VAR_6 = FUNC_7(VAR_5);

    if (!FUNC_4(VAR_4->queue)) {
        VAR_6->field = VAR_1;
    } else if (FUNC_3(VAR_4->queue)) {
        VAR_6->field = VAR_2;
    } else {
        VAR_6->field = VAR_0;
    }

    VAR_6->future[0] = FUNC_8(VAR_4, VAR_6, 1);
    VAR_6->current = FUNC_8(VAR_4, VAR_6, 0);
    VAR_6->past[0] = FUNC_8(VAR_4, VAR_6, -1);
    VAR_6->past[1] = FUNC_8(VAR_4, VAR_6, -2);

    VAR_6->opts = VAR_4->opts->opts;

    VAR_5->planes[3] = (void *)(uintptr_t)VAR_6->current;

    VAR_5->params.hw_subfmt = 0;

    FUNC_5(VAR_4->queue, VAR_5);
}
