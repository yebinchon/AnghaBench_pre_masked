
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct vo {struct priv* priv; } ;
struct TYPE_13__ {scalar_t__ y0; scalar_t__ y1; scalar_t__ x0; scalar_t__ x1; } ;
struct TYPE_12__ {scalar_t__ y0; scalar_t__ y1; scalar_t__ x0; scalar_t__ x1; } ;
struct priv {int tex; int renderer; TYPE_2__ dst_rect; TYPE_1__ src_rect; int osd_pts; } ;
struct TYPE_14__ {int pts; } ;
typedef TYPE_3__ mp_image_t ;
struct TYPE_15__ {scalar_t__ h; scalar_t__ w; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_4__ SDL_Rect ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,TYPE_4__*,TYPE_4__*) ;
 int FUNC_2 (int ,int ,int ,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct vo*) ;
 int FUNC_6 (struct vo*,TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_9(struct vo *VAR_1, mp_image_t *VAR_2)
{
    struct priv *VAR_3 = VAR_1->priv;


    FUNC_2(VAR_3->renderer, 0, 0, 0, 255);
    FUNC_0(VAR_3->renderer);

    FUNC_3(VAR_3->tex, VAR_0);

    if (VAR_2) {
        VAR_3->osd_pts = VAR_2->pts;

        mp_image_t VAR_4;
        if (!FUNC_6(VAR_1, &VAR_4)) {
            FUNC_8(VAR_2);
            return;
        }

        FUNC_7(&VAR_4, VAR_2);

        FUNC_4(VAR_3->tex);

        FUNC_8(VAR_2);
    }

    SDL_Rect VAR_5, VAR_6;
    VAR_5.x = VAR_3->src_rect.x0;
    VAR_5.y = VAR_3->src_rect.y0;
    VAR_5.w = VAR_3->src_rect.x1 - VAR_3->src_rect.x0;
    VAR_5.h = VAR_3->src_rect.y1 - VAR_3->src_rect.y0;
    VAR_6.x = VAR_3->dst_rect.x0;
    VAR_6.y = VAR_3->dst_rect.y0;
    VAR_6.w = VAR_3->dst_rect.x1 - VAR_3->dst_rect.x0;
    VAR_6.h = VAR_3->dst_rect.y1 - VAR_3->dst_rect.y0;

    FUNC_1(VAR_3->renderer, VAR_3->tex, &VAR_5, &VAR_6);

    FUNC_5(VAR_1);
}
