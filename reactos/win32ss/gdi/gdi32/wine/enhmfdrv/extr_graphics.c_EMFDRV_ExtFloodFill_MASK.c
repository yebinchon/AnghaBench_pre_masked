
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int emr ;
typedef int UINT ;
struct TYPE_6__ {int nSize; int iType; } ;
struct TYPE_4__ {void* y; void* x; } ;
struct TYPE_5__ {TYPE_3__ emr; int iMode; int crColor; TYPE_1__ ptlStart; } ;
typedef int PHYSDEV ;
typedef void* INT ;
typedef TYPE_2__ EMREXTFLOODFILL ;
typedef int COLORREF ;
typedef int BOOL ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int VAR_0 ;

BOOL FUNC_1( PHYSDEV VAR_1, INT VAR_2, INT VAR_3, COLORREF VAR_4, UINT VAR_5 )
{
    EMREXTFLOODFILL VAR_6;

    VAR_6.emr.iType = VAR_0;
    VAR_6.emr.nSize = sizeof(VAR_6);
    VAR_6.ptlStart.x = VAR_2;
    VAR_6.ptlStart.y = VAR_3;
    VAR_6.crColor = VAR_4;
    VAR_6.iMode = VAR_5;

    return FUNC_0( VAR_1, &VAR_6.emr );
}
