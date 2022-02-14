
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int pBits; } ;
struct TYPE_7__ {int system; } ;
struct texplane {TYPE_6__ locked_rect; TYPE_1__ texture; } ;
struct TYPE_8__ {int plane_count; struct texplane* planes; } ;
typedef TYPE_2__ d3d_priv ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,TYPE_6__*,int *,int ) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static bool FUNC_4(d3d_priv *VAR_0)
{
    for (int VAR_1 = 0; VAR_1 < VAR_0->plane_count; VAR_1++) {
        struct texplane *VAR_2 = &VAR_0->planes[VAR_1];

        if (!VAR_2->locked_rect.pBits) {
            if (FUNC_0(FUNC_1(VAR_2->texture.system, 0,
                                                  &VAR_2->locked_rect, ((void*)0), 0)))
            {
                FUNC_2(VAR_0, "Texture lock failure.\n");
                FUNC_3(VAR_0);
                return 0;
            }
        }
    }

    return 1;
}
