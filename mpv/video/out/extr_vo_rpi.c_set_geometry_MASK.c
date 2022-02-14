
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ y0; scalar_t__ x0; } ;
struct vo_win_geometry {TYPE_2__ win; } ;
struct vo {int dheight; int dwidth; TYPE_1__* opts; struct priv* priv; } ;
struct priv {scalar_t__ y; scalar_t__ x; int h; int w; } ;
struct mp_rect {int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_3__ {scalar_t__ fullscreen; } ;


 scalar_t__ FUNC_0 (struct vo*) ;
 int FUNC_1 (struct vo*) ;
 int FUNC_2 (struct vo*,struct vo_win_geometry*) ;
 int FUNC_3 (struct vo*,struct mp_rect*,struct vo_win_geometry*) ;

__attribute__((used)) static int FUNC_4(struct vo *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    if (VAR_0->opts->fullscreen) {
        VAR_0->dwidth = VAR_1->w;
        VAR_0->dheight = VAR_1->h;
        VAR_1->x = VAR_1->y = 0;
    } else {
        struct vo_win_geometry VAR_2;
        struct mp_rect VAR_3 = {0, 0, VAR_1->w, VAR_1->h};

        FUNC_3(VAR_0, &VAR_3, &VAR_2);
        FUNC_2(VAR_0, &VAR_2);

        VAR_1->x = VAR_2.win.x0;
        VAR_1->y = VAR_2.win.y0;
    }

    FUNC_1(VAR_0);

    if (FUNC_0(VAR_0) < 0)
        return -1;

    return 0;
}
