
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * pBits; } ;
struct TYPE_7__ {int system; } ;
struct texplane {TYPE_2__ locked_rect; TYPE_1__ texture; } ;
struct TYPE_9__ {int * pBits; } ;
struct TYPE_10__ {int plane_count; struct texplane* planes; TYPE_3__ locked_rect; int d3d_surface; } ;
typedef TYPE_4__ d3d_priv ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_4__*,char*) ;

__attribute__((used)) static void FUNC_4(d3d_priv *VAR_0)
{
    bool VAR_1 = 0;

    if (VAR_0->locked_rect.pBits) {
        if (FUNC_0(FUNC_1(VAR_0->d3d_surface)))
            VAR_1 = 1;
    }
    VAR_0->locked_rect.pBits = ((void*)0);

    for (int VAR_2 = 0; VAR_2 < VAR_0->plane_count; VAR_2++) {
        struct texplane *VAR_3 = &VAR_0->planes[VAR_2];
        if (VAR_3->locked_rect.pBits) {
            if (FUNC_0(FUNC_2(VAR_3->texture.system, 0)))
                VAR_1 = 1;
        }
        VAR_3->locked_rect.pBits = ((void*)0);
    }

    if (VAR_1) {
        FUNC_3(VAR_0, "Unlocking video objects failed.\n");
    }
}
