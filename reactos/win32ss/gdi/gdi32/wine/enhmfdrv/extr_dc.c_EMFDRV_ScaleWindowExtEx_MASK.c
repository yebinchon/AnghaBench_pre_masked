
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int emr ;
struct TYPE_13__ {int nSize; int iType; } ;
struct TYPE_12__ {TYPE_8__ emr; void* yDenom; void* yNum; void* xDenom; void* xNum; } ;
struct TYPE_11__ {TYPE_1__* funcs; } ;
struct TYPE_10__ {int (* pScaleWindowExtEx ) (TYPE_2__*,void*,void*,void*,void*,int *) ;} ;
typedef int SIZE ;
typedef TYPE_2__* PHYSDEV ;
typedef void* INT ;
typedef TYPE_3__ EMRSCALEWINDOWEXTEX ;
typedef int BOOL ;


 int FUNC_0 (TYPE_2__*,TYPE_8__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,void*,void*,void*,void*,int *) ;

BOOL FUNC_3( PHYSDEV VAR_3, INT VAR_4, INT VAR_5, INT VAR_6, INT VAR_7, SIZE *VAR_8 )
{
    PHYSDEV VAR_9 = FUNC_1( VAR_3, VAR_2 );
    EMRSCALEWINDOWEXTEX VAR_10;

    VAR_10.emr.iType = VAR_0;
    VAR_10.emr.nSize = sizeof(VAR_10);
    VAR_10.xNum = VAR_4;
    VAR_10.xDenom = VAR_5;
    VAR_10.yNum = VAR_6;
    VAR_10.yDenom = VAR_7;

    if (!FUNC_0( VAR_3, &VAR_10.emr )) return VAR_1;
    return VAR_9->funcs->pScaleWindowExtEx( VAR_9, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8 );
}
