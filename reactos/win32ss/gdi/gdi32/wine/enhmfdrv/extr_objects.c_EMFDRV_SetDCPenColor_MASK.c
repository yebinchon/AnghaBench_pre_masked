
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;


typedef int emr ;
struct TYPE_22__ {scalar_t__ hPen; } ;
struct TYPE_21__ {scalar_t__ dc_pen; } ;
struct TYPE_16__ {int nSize; int iType; } ;
struct TYPE_20__ {TYPE_12__ emr; int ihObject; } ;
struct TYPE_17__ {int member_1; int member_0; } ;
struct TYPE_19__ {int member_2; TYPE_1__ member_1; int member_0; } ;
struct TYPE_18__ {int hdc; } ;
typedef TYPE_2__* PHYSDEV ;
typedef TYPE_3__ LOGPEN ;
typedef TYPE_4__ EMRSELECTOBJECT ;
typedef TYPE_5__ EMFDRV_PDEVICE ;
typedef int DWORD ;
typedef TYPE_6__ DC ;
typedef int COLORREF ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_12__*) ;
 int VAR_2 ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_5__* FUNC_7 (TYPE_2__*) ;
 TYPE_6__* FUNC_8 (TYPE_2__*) ;

COLORREF FUNC_9( PHYSDEV VAR_5, COLORREF VAR_6 )
{
    EMFDRV_PDEVICE *VAR_7 = FUNC_7( VAR_5 );

    DC *VAR_8 = FUNC_8( VAR_5 );

    EMRSELECTOBJECT VAR_9;
    DWORD VAR_10;
    LOGPEN VAR_11 = { VAR_4, { 0, 0 }, VAR_6 };



    if (VAR_8->hPen != FUNC_6( VAR_1 )) return VAR_6;

    if (VAR_7->dc_pen) FUNC_1( VAR_7->dc_pen );
    if (!(VAR_7->dc_pen = FUNC_0( &VAR_11 ))) return VAR_0;
    if (!(VAR_10 = FUNC_2(VAR_5, VAR_7->dc_pen))) return VAR_0;
    FUNC_4( VAR_7->dc_pen, VAR_5->hdc );
    VAR_9.emr.iType = VAR_2;
    VAR_9.emr.nSize = sizeof(VAR_9);
    VAR_9.ihObject = VAR_10;
    return FUNC_3( VAR_5, &VAR_9.emr ) ? VAR_6 : VAR_0;
}
