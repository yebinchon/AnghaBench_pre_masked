
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
struct TYPE_21__ {void* saveLevel; } ;
struct TYPE_20__ {int restoring; } ;
struct TYPE_16__ {int nSize; int iType; } ;
struct TYPE_19__ {TYPE_14__ emr; void* iRelative; } ;
struct TYPE_18__ {TYPE_1__* funcs; } ;
struct TYPE_17__ {scalar_t__ (* pRestoreDC ) (TYPE_2__*,void*) ;} ;
typedef TYPE_2__* PHYSDEV ;
typedef void* INT ;
typedef TYPE_3__ EMRRESTOREDC ;
typedef TYPE_4__ EMFDRV_PDEVICE ;
typedef TYPE_5__ DC ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (TYPE_2__*,TYPE_14__*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int ) ;
 TYPE_4__* FUNC_2 (TYPE_2__*) ;
 TYPE_5__* FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (TYPE_2__*,void*) ;

BOOL FUNC_5( PHYSDEV VAR_2, INT VAR_3 )
{
    PHYSDEV VAR_4 = FUNC_1( VAR_2, VAR_1 );
    EMFDRV_PDEVICE* VAR_5 = FUNC_2( VAR_2 );
    DC *VAR_6 = FUNC_3( VAR_2 );
    EMRRESTOREDC VAR_7;
    BOOL VAR_8;

    VAR_7.emr.iType = VAR_0;
    VAR_7.emr.nSize = sizeof(VAR_7);

    if (VAR_3 < 0)
        VAR_7.iRelative = VAR_3;
    else
        VAR_7.iRelative = VAR_3 - VAR_6->saveLevel - 1;

    VAR_5->restoring++;
    VAR_8 = VAR_4->funcs->pRestoreDC( VAR_4, VAR_3 );
    VAR_5->restoring--;

    if (VAR_8) FUNC_0( VAR_2, &VAR_7.emr );
    return VAR_8;
}
