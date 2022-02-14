
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * lpVtbl; } ;
struct d3drm_visual_array {int ref; unsigned int size; int ** visuals; TYPE_1__ IDirect3DRMVisualArray_iface; } ;
typedef int IDirect3DRMVisual ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 struct d3drm_visual_array* FUNC_1 (int) ;
 int ** FUNC_2 (unsigned int,int) ;
 int FUNC_3 (struct d3drm_visual_array*) ;

__attribute__((used)) static struct d3drm_visual_array *FUNC_4(unsigned int VAR_1, IDirect3DRMVisual **VAR_2)
{
    struct d3drm_visual_array *VAR_3;
    unsigned int VAR_4;

    if (!(VAR_3 = FUNC_1(sizeof(*VAR_3))))
        return ((void*)0);

    VAR_3->IDirect3DRMVisualArray_iface.lpVtbl = &VAR_0;
    VAR_3->ref = 1;
    VAR_3->size = VAR_1;

    if (VAR_1)
    {
        if (!(VAR_3->visuals = FUNC_2(VAR_1, sizeof(*VAR_3->visuals))))
        {
            FUNC_3(VAR_3);
            return ((void*)0);
        }

        for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4)
        {
            VAR_3->visuals[VAR_4] = VAR_2[VAR_4];
            FUNC_0(VAR_3->visuals[VAR_4]);
        }
    }

    return VAR_3;
}
