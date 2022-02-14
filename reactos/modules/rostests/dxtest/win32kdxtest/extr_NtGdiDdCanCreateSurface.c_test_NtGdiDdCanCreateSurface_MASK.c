
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwSize; int * lpDDSurfaceDesc; } ;
typedef int * PDD_CANCREATESURFACEDATA ;
typedef int * HANDLE ;
typedef TYPE_1__ DDSURFACEDESC2 ;
typedef int DDSURFACEDESC ;
typedef TYPE_1__ DDHAL_CANCREATESURFACEDATA ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,int ,int,char*) ;

void
FUNC_3(HANDLE VAR_2)
{
    int VAR_3=0;
    BOOL VAR_4=VAR_1;
    DDHAL_CANCREATESURFACEDATA VAR_5;
    DDSURFACEDESC2 VAR_6;

    FUNC_1(&VAR_5,sizeof(DDHAL_CANCREATESURFACEDATA));
    FUNC_1(&VAR_6,sizeof(DDSURFACEDESC2));


    VAR_4 = FUNC_0(((void*)0),((void*)0));
    FUNC_2(VAR_4, VAR_0,VAR_3,"1. NtGdiDdCanCreateSurface(NULL,NULL);\0");

    VAR_4 = FUNC_0(VAR_2,((void*)0));
    FUNC_2(VAR_4, VAR_0,VAR_3,"2. NtGdiDdCanCreateSurface(hDirectDrawLocal,NULL);\0");

    VAR_4 = FUNC_0(VAR_2,(PDD_CANCREATESURFACEDATA)&VAR_5);
    FUNC_2(VAR_4, VAR_0,VAR_3,"3. NtGdiDdCanCreateSurface(hDirectDrawLocal,pCanCreateSurface);\0");

    VAR_5.lpDDSurfaceDesc = (DDSURFACEDESC*)&VAR_6;
    VAR_6.dwSize = sizeof(DDSURFACEDESC2);

    VAR_4 = FUNC_0(VAR_2,(PDD_CANCREATESURFACEDATA)&VAR_5);
    FUNC_2(VAR_4, VAR_0,VAR_3,"4. NtGdiDdCanCreateSurface(hDirectDrawLocal,pCanCreateSurface);\0");

}
