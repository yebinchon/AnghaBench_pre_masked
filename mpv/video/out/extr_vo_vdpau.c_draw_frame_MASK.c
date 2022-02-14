
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_frame {int duration; int pts; int current; int redraw; } ;
struct vo {struct vdpctx* priv; } ;
struct vdpctx {struct mp_image* current_image; int current_duration; int current_pts; int mpvdp; } ;
struct mp_image {int dummy; } ;


 int FUNC_0 (struct vo*,char*) ;
 int FUNC_1 (struct vo*) ;
 int FUNC_2 (struct vo*) ;
 struct mp_image* FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct vo*) ;
 int FUNC_5 (struct mp_image*) ;
 int FUNC_6 (struct vo*,struct mp_image*) ;

__attribute__((used)) static void FUNC_7(struct vo *VAR_0, struct vo_frame *VAR_1)
{
    struct vdpctx *VAR_2 = VAR_0->priv;

    FUNC_1(VAR_0);

    if (VAR_1->current && !VAR_1->redraw) {
        struct mp_image *VAR_3 =
            FUNC_3(VAR_2->mpvdp, VAR_1->current);
        if (!VAR_3)
            FUNC_0(VAR_0, "Could not upload image.\n");

        FUNC_5(VAR_2->current_image);
        VAR_2->current_image = VAR_3;
    }

    VAR_2->current_pts = VAR_1->pts;
    VAR_2->current_duration = VAR_1->duration;

    if (FUNC_4(VAR_0)) {
        FUNC_6(VAR_0, VAR_2->current_image);
        FUNC_2(VAR_0);
    }
}
