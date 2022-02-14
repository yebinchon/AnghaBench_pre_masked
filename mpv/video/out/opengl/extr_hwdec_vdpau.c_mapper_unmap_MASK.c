
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_hwdec_mapper {int * tex; int ra; struct priv* priv; } ;
struct priv {int mapped; scalar_t__ vdpgl_surface; scalar_t__ direct_mode; TYPE_1__* gl; } ;
struct TYPE_2__ {int (* VDPAUUnregisterSurfaceNV ) (scalar_t__) ;int (* VDPAUUnmapSurfacesNV ) (int,scalar_t__*) ;} ;
typedef TYPE_1__ GL ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int,scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ra_hwdec_mapper *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    GL *VAR_2 = VAR_1->gl;

    for (int VAR_3 = 0; VAR_3 < 4; VAR_3++)
        FUNC_0(VAR_0->ra, &VAR_0->tex[VAR_3]);

    if (VAR_1->mapped) {
        VAR_2->VDPAUUnmapSurfacesNV(1, &VAR_1->vdpgl_surface);
        if (VAR_1->direct_mode) {
            VAR_2->VDPAUUnregisterSurfaceNV(VAR_1->vdpgl_surface);
            VAR_1->vdpgl_surface = 0;
        }
    }
    VAR_1->mapped = 0;
}
