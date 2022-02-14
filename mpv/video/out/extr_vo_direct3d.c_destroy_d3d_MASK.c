
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * d3d_handle; int * d3d_device; int ** pixel_shaders; } ;
typedef TYPE_1__ d3d_priv ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(d3d_priv *VAR_1)
{
    FUNC_4(VAR_1);

    for (int VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
        if (VAR_1->pixel_shaders[VAR_2])
            FUNC_2(VAR_1->pixel_shaders[VAR_2]);
        VAR_1->pixel_shaders[VAR_2] = ((void*)0);
    }

    if (VAR_1->d3d_device)
        FUNC_1(VAR_1->d3d_device);
    VAR_1->d3d_device = ((void*)0);

    if (VAR_1->d3d_handle) {
        FUNC_3(VAR_1, "Stopping Direct3D.\n");
        FUNC_0(VAR_1->d3d_handle);
    }
    VAR_1->d3d_handle = ((void*)0);
}
