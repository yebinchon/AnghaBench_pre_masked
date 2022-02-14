
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * lpVtbl; } ;
struct d3drm_frame_array {int ref; unsigned int size; int * frames; TYPE_1__ IDirect3DRMFrameArray_iface; } ;
typedef int IDirect3DRMFrame3 ;


 int FUNC_0 (int *,int *,void**) ;
 int VAR_0 ;
 int VAR_1 ;
 struct d3drm_frame_array* FUNC_1 (int) ;
 int * FUNC_2 (unsigned int,int) ;
 int FUNC_3 (struct d3drm_frame_array*) ;

__attribute__((used)) static struct d3drm_frame_array *FUNC_4(unsigned int VAR_2, IDirect3DRMFrame3 **VAR_3)
{
    struct d3drm_frame_array *VAR_4;
    unsigned int VAR_5;

    if (!(VAR_4 = FUNC_1(sizeof(*VAR_4))))
        return ((void*)0);

    VAR_4->IDirect3DRMFrameArray_iface.lpVtbl = &VAR_1;
    VAR_4->ref = 1;
    VAR_4->size = VAR_2;

    if (VAR_2)
    {
        if (!(VAR_4->frames = FUNC_2(VAR_2, sizeof(*VAR_4->frames))))
        {
            FUNC_3(VAR_4);
            return ((void*)0);
        }

        for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5)
        {
            FUNC_0(VAR_3[VAR_5], &VAR_0, (void **)&VAR_4->frames[VAR_5]);
        }
    }

    return VAR_4;
}
