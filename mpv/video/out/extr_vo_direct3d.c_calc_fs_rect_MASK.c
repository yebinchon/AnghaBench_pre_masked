
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mp_rect {int y1; int y0; int x1; int x0; } ;
struct TYPE_6__ {int bottom; int top; int right; int left; } ;
struct TYPE_5__ {int bottom; int top; int right; int left; } ;
struct TYPE_7__ {TYPE_2__ fs_panscan_rect; TYPE_1__ fs_movie_rect; int osd_res; int vo; } ;
typedef TYPE_3__ d3d_priv ;


 int FUNC_0 (int ,struct mp_rect*,struct mp_rect*,int *) ;

__attribute__((used)) static void FUNC_1(d3d_priv *VAR_0)
{
    struct mp_rect VAR_1;
    struct mp_rect VAR_2;
    FUNC_0(VAR_0->vo, &VAR_1, &VAR_2, &VAR_0->osd_res);

    VAR_0->fs_movie_rect.left = VAR_2.x0;
    VAR_0->fs_movie_rect.right = VAR_2.x1;
    VAR_0->fs_movie_rect.top = VAR_2.y0;
    VAR_0->fs_movie_rect.bottom = VAR_2.y1;
    VAR_0->fs_panscan_rect.left = VAR_1.x0;
    VAR_0->fs_panscan_rect.right = VAR_1.x1;
    VAR_0->fs_panscan_rect.top = VAR_1.y0;
    VAR_0->fs_panscan_rect.bottom = VAR_1.y1;
}
