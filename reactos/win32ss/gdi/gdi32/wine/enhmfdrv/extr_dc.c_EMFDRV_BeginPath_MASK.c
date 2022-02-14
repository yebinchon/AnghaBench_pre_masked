
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;


typedef int emr ;
struct TYPE_21__ {int physDev; } ;
struct TYPE_20__ {scalar_t__ path; int pathdev; } ;
struct TYPE_16__ {int nSize; int iType; } ;
struct TYPE_19__ {TYPE_14__ emr; } ;
struct TYPE_18__ {TYPE_1__* funcs; } ;
struct TYPE_17__ {int (* pBeginPath ) (TYPE_2__*) ;} ;
typedef TYPE_2__* PHYSDEV ;
typedef TYPE_3__ EMRBEGINPATH ;
typedef TYPE_4__ EMFDRV_PDEVICE ;
typedef TYPE_5__ DC ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (TYPE_2__*,TYPE_14__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_2 (TYPE_2__*) ;
 TYPE_5__* FUNC_3 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (TYPE_2__*) ;

BOOL FUNC_6( PHYSDEV VAR_5 )
{
    EMFDRV_PDEVICE *VAR_6 = FUNC_2( VAR_5 );
    PHYSDEV VAR_7 = FUNC_1( VAR_5, VAR_4 );
    EMRBEGINPATH VAR_8;
    DC *VAR_9 = FUNC_3( VAR_5 );

    VAR_8.emr.iType = VAR_0;
    VAR_8.emr.nSize = sizeof(VAR_8);

    if (!FUNC_0( VAR_5, &VAR_8.emr )) return VAR_1;
    if (VAR_6->path) return VAR_2;

    if (!VAR_7->funcs->pBeginPath( VAR_7 )) return VAR_1;
    FUNC_4( &VAR_9->physDev, &VAR_6->pathdev, &VAR_3 );
    VAR_6->path = VAR_2;
    return VAR_2;
}
