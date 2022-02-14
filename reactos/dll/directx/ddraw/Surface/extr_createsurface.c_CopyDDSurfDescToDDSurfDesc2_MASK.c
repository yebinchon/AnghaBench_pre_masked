
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dwSize; } ;
typedef TYPE_1__* LPDDSURFACEDESC2 ;
typedef int LPDDSURFACEDESC ;
typedef int DDSURFACEDESC2 ;
typedef int DDSURFACEDESC ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

void FUNC_2(LPDDSURFACEDESC2 VAR_0, LPDDSURFACEDESC VAR_1)
{
    FUNC_1(VAR_0,sizeof(DDSURFACEDESC2));
    FUNC_0(VAR_0,VAR_1,sizeof(DDSURFACEDESC));
    VAR_0->dwSize = sizeof(DDSURFACEDESC2);
}
