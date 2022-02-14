
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int tex_h; } ;
struct TYPE_8__ {int Pitch; int pBits; } ;
struct texplane {TYPE_1__ texture; TYPE_2__ locked_rect; int clearval; } ;
struct TYPE_9__ {int plane_count; struct texplane* planes; } ;
typedef TYPE_3__ d3d_priv ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(d3d_priv *VAR_0)
{
    if (!FUNC_0(VAR_0))
        return;

    for (int VAR_1 = 0; VAR_1 < VAR_0->plane_count; VAR_1++) {
        struct texplane *VAR_2 = &VAR_0->planes[VAR_1];
        FUNC_2(VAR_2->locked_rect.pBits, VAR_2->clearval,
               VAR_2->locked_rect.Pitch * VAR_2->texture.tex_h);
    }

    FUNC_1(VAR_0);
}
