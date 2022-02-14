
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; } ;
struct wined3d_light_info {int glIndex; unsigned int OriginalIndex; int cutoff; int exponent; int direction; int position; TYPE_1__ OriginalParms; int entry; } ;
struct TYPE_5__ {unsigned int OriginalIndex; int cutoff; int exponent; int direction; int position; TYPE_1__ OriginalParms; } ;
struct wined3d_cs_set_light {TYPE_2__ light; } ;
struct TYPE_6__ {int * light_map; } ;
struct wined3d_cs {int device; TYPE_3__ state; } ;


 int FUNC_0 (char*) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ) ;
 struct wined3d_light_info* FUNC_5 (int) ;
 int FUNC_6 (int *,int *) ;
 struct wined3d_light_info* FUNC_7 (TYPE_3__*,unsigned int) ;

__attribute__((used)) static void FUNC_8(struct wined3d_cs *VAR_1, const void *VAR_2)
{
    const struct wined3d_cs_set_light *VAR_3 = VAR_2;
    struct wined3d_light_info *VAR_4;
    unsigned int VAR_5, VAR_6;

    VAR_5 = VAR_3->light.OriginalIndex;

    if (!(VAR_4 = FUNC_7(&VAR_1->state, VAR_5)))
    {
        FUNC_3("Adding new light.\n");
        if (!(VAR_4 = FUNC_5(sizeof(*VAR_4))))
        {
            FUNC_0("Failed to allocate light info.\n");
            return;
        }

        VAR_6 = FUNC_1(VAR_5);
        FUNC_6(&VAR_1->state.light_map[VAR_6], &VAR_4->entry);
        VAR_4->glIndex = -1;
        VAR_4->OriginalIndex = VAR_5;
    }

    if (VAR_4->glIndex != -1)
    {
        if (VAR_4->OriginalParms.type != VAR_3->light.OriginalParms.type)
            FUNC_4(VAR_1->device, VAR_0);
        FUNC_4(VAR_1->device, FUNC_2(VAR_4->glIndex));
    }

    VAR_4->OriginalParms = VAR_3->light.OriginalParms;
    VAR_4->position = VAR_3->light.position;
    VAR_4->direction = VAR_3->light.direction;
    VAR_4->exponent = VAR_3->light.exponent;
    VAR_4->cutoff = VAR_3->light.cutoff;
}
