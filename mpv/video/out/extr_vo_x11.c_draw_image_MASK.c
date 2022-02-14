
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo {int osd; struct priv* priv; } ;
struct mp_rect {void* y0; void* x0; } ;
struct priv {struct mp_image* original_image; int osd; int sws; struct mp_rect src; int current_buf; } ;
struct TYPE_2__ {int align_y; int align_x; } ;
struct mp_image {int pts; int h; int w; TYPE_1__ fmt; } ;
typedef struct mp_image mp_image_t ;


 void* FUNC_0 (void*,int ) ;
 struct mp_image FUNC_1 (struct priv*,int ) ;
 int FUNC_2 (struct mp_image*,int ,int ,int ,int ) ;
 int FUNC_3 (struct mp_image*,struct mp_rect) ;
 int FUNC_4 (int ,struct mp_image*,struct mp_image*) ;
 int FUNC_5 (int ,int ,int ,int ,struct mp_image*) ;
 int FUNC_6 (struct mp_image*) ;
 int FUNC_7 (struct vo*,int) ;

__attribute__((used)) static void FUNC_8(struct vo *VAR_0, mp_image_t *VAR_1)
{
    struct priv *VAR_2 = VAR_0->priv;

    FUNC_7(VAR_0, 1);

    struct mp_image VAR_3 = FUNC_1(VAR_2, VAR_2->current_buf);

    if (VAR_1) {
        struct mp_image VAR_4 = *VAR_1;
        struct mp_rect VAR_5 = VAR_2->src;
        VAR_5.x0 = FUNC_0(VAR_5.x0, VAR_4.fmt.align_x);
        VAR_5.y0 = FUNC_0(VAR_5.y0, VAR_4.fmt.align_y);
        FUNC_3(&VAR_4, VAR_5);

        FUNC_4(VAR_2->sws, &VAR_3, &VAR_4);
    } else {
        FUNC_2(&VAR_3, 0, 0, VAR_3.w, VAR_3.h);
    }

    FUNC_5(VAR_0->osd, VAR_2->osd, VAR_1 ? VAR_1->pts : 0, 0, &VAR_3);

    if (VAR_1 != VAR_2->original_image) {
        FUNC_6(VAR_2->original_image);
        VAR_2->original_image = VAR_1;
    }
}
