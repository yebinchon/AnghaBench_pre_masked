
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vo {struct priv* priv; } ;
struct priv {int * renderer; TYPE_2__* osd_surfaces; int * tex; } ;
struct TYPE_4__ {int targets_size; TYPE_1__* targets; } ;
struct TYPE_3__ {int * tex2; int * tex; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct vo *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;


    if (VAR_2->tex) {
        FUNC_1(VAR_2->tex);
        VAR_2->tex = ((void*)0);
    }

    int VAR_3, VAR_4;
    for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
        for (VAR_4 = 0; VAR_4 < VAR_2->osd_surfaces[VAR_3].targets_size; ++VAR_4) {
            if (VAR_2->osd_surfaces[VAR_3].targets[VAR_4].tex) {
                FUNC_1(VAR_2->osd_surfaces[VAR_3].targets[VAR_4].tex);
                VAR_2->osd_surfaces[VAR_3].targets[VAR_4].tex = ((void*)0);
            }
            if (VAR_2->osd_surfaces[VAR_3].targets[VAR_4].tex2) {
                FUNC_1(VAR_2->osd_surfaces[VAR_3].targets[VAR_4].tex2);
                VAR_2->osd_surfaces[VAR_3].targets[VAR_4].tex2 = ((void*)0);
            }
        }
    }

    if (VAR_2->renderer) {
        FUNC_0(VAR_2->renderer);
        VAR_2->renderer = ((void*)0);
    }
}
