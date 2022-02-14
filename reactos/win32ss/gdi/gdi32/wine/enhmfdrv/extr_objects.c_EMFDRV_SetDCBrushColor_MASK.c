
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int emr ;
struct TYPE_17__ {scalar_t__ hBrush; } ;
struct TYPE_16__ {scalar_t__ dc_brush; } ;
struct TYPE_13__ {int nSize; int iType; } ;
struct TYPE_15__ {TYPE_10__ emr; int ihObject; } ;
struct TYPE_14__ {int hdc; } ;
typedef TYPE_1__* PHYSDEV ;
typedef TYPE_2__ EMRSELECTOBJECT ;
typedef TYPE_3__ EMFDRV_PDEVICE ;
typedef int DWORD ;
typedef TYPE_4__ DC ;
typedef int COLORREF ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_10__*) ;
 int VAR_2 ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_3 ;
 TYPE_3__* FUNC_7 (TYPE_1__*) ;
 TYPE_4__* FUNC_8 (TYPE_1__*) ;

COLORREF FUNC_9( PHYSDEV VAR_4, COLORREF VAR_5 )
{
    EMFDRV_PDEVICE *VAR_6 = FUNC_7( VAR_4 );

    DC *VAR_7 = FUNC_8( VAR_4 );

    EMRSELECTOBJECT VAR_8;
    DWORD VAR_9;



    if (VAR_7->hBrush != FUNC_6( VAR_1 )) return VAR_5;

    if (VAR_6->dc_brush) FUNC_1( VAR_6->dc_brush );
    if (!(VAR_6->dc_brush = FUNC_0( VAR_5 ))) return VAR_0;
    if (!(VAR_9 = FUNC_2(VAR_4, VAR_6->dc_brush ))) return VAR_0;
    FUNC_4( VAR_6->dc_brush, VAR_4->hdc );
    VAR_8.emr.iType = VAR_2;
    VAR_8.emr.nSize = sizeof(VAR_8);
    VAR_8.ihObject = VAR_9;
    return FUNC_3( VAR_4, &VAR_8.emr ) ? VAR_5 : VAR_0;
}
