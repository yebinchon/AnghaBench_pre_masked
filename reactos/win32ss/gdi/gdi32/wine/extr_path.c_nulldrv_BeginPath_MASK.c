
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct path_physdev {int HasPathHook; } ;
struct TYPE_7__ {int (* pCreateDC ) (int *,int *,int *,int *,int *) ;} ;
struct TYPE_6__ {int physDev; } ;
typedef struct path_physdev* PHYSDEV ;
typedef TYPE_1__ DC ;
typedef int BOOL ;


 int FUNC_0 (char*,struct path_physdev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 TYPE_1__* FUNC_2 (struct path_physdev*) ;
 struct path_physdev* FUNC_3 (int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_4 (int *,int *,int *,int *,int *) ;

BOOL FUNC_5( PHYSDEV VAR_3 )
{
    DC *VAR_4 = FUNC_2( VAR_3 );
    struct path_physdev *VAR_5;

    if (!VAR_2.pCreateDC( &VAR_4->physDev, ((void*)0), ((void*)0), ((void*)0), ((void*)0) ))
    {
        return VAR_0;
    }
    VAR_5 = FUNC_3( FUNC_1( VAR_4, &VAR_2 ));
    VAR_5->HasPathHook = VAR_1;
    FUNC_0("nulldrv_BeginPath dev %p\n",VAR_3);
    FUNC_0("nulldrv_BeginPath pd %p\n",VAR_5);
    return VAR_1;
}
