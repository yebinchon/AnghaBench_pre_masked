
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_4__ {int * lpVtbl; } ;
struct d3drm_frame {int ref; int traversal_options; int * d3drm; TYPE_3__ IDirect3DRMFrame3_iface; int transform; int obj; int scenebackground; TYPE_2__ IDirect3DRMFrame2_iface; TYPE_1__ IDirect3DRMFrame_iface; } ;
typedef int IUnknown ;
typedef int IDirect3DRMFrame3 ;
typedef int IDirect3DRM ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int FUNC_5 (char*,struct d3drm_frame**,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (int *,float,float,float,float) ;
 struct d3drm_frame* FUNC_8 (int) ;
 int FUNC_9 (struct d3drm_frame*) ;
 int VAR_8 ;

HRESULT FUNC_10(struct d3drm_frame **VAR_9, IUnknown *VAR_10, IDirect3DRM *VAR_11)
{
    static const char VAR_12[] = "Frame";
    struct d3drm_frame *VAR_13;
    HRESULT VAR_14 = VAR_2;

    FUNC_5("frame %p, parent_frame %p, d3drm %p.\n", VAR_9, VAR_10, VAR_11);

    if (!(VAR_13 = FUNC_8(sizeof(*VAR_13))))
        return VAR_3;

    VAR_13->IDirect3DRMFrame_iface.lpVtbl = &VAR_5;
    VAR_13->IDirect3DRMFrame2_iface.lpVtbl = &VAR_6;
    VAR_13->IDirect3DRMFrame3_iface.lpVtbl = &VAR_7;
    VAR_13->d3drm = VAR_11;
    VAR_13->ref = 1;
    FUNC_7(&VAR_13->scenebackground, 0.0f, 0.0f, 0.0f, 1.0f);
    VAR_13->traversal_options = VAR_1 | VAR_0;

    FUNC_6(&VAR_13->obj, VAR_12);

    VAR_13->transform = VAR_8;

    if (VAR_10)
    {
        IDirect3DRMFrame3 *VAR_15;

        if (FUNC_0(VAR_14 = FUNC_2(VAR_10, &VAR_4, (void **)&VAR_15)))
        {
            FUNC_9(VAR_13);
            return VAR_14;
        }
        FUNC_3(VAR_10);
        FUNC_1(VAR_15, &VAR_13->IDirect3DRMFrame3_iface);
    }

    FUNC_4(VAR_13->d3drm);

    *VAR_9 = VAR_13;

    return VAR_14;
}
