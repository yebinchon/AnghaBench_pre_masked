
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int emr ;
struct TYPE_15__ {int nSize; int iType; } ;
struct TYPE_12__ {void* cy; void* cx; } ;
struct TYPE_14__ {TYPE_9__ emr; TYPE_2__ szlExtent; } ;
struct TYPE_13__ {TYPE_1__* funcs; } ;
struct TYPE_11__ {int (* pSetViewportExtEx ) (TYPE_3__*,void*,void*,int *) ;} ;
typedef int SIZE ;
typedef TYPE_3__* PHYSDEV ;
typedef void* INT ;
typedef TYPE_4__ EMRSETVIEWPORTEXTEX ;
typedef int BOOL ;


 int FUNC_0 (TYPE_3__*,TYPE_9__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (TYPE_3__*,int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*,void*,void*,int *) ;

BOOL FUNC_3( PHYSDEV VAR_3, INT VAR_4, INT VAR_5, SIZE *VAR_6 )
{
    PHYSDEV VAR_7 = FUNC_1( VAR_3, VAR_2 );
    EMRSETVIEWPORTEXTEX VAR_8;

    VAR_8.emr.iType = VAR_0;
    VAR_8.emr.nSize = sizeof(VAR_8);
    VAR_8.szlExtent.cx = VAR_4;
    VAR_8.szlExtent.cy = VAR_5;

    if (!FUNC_0( VAR_3, &VAR_8.emr )) return VAR_1;
    return VAR_7->funcs->pSetViewportExtEx( VAR_7, VAR_4, VAR_5, VAR_6 );
}
