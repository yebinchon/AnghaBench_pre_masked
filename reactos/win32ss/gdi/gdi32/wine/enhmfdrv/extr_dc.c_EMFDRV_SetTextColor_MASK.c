
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int emr ;
struct TYPE_7__ {int nSize; int iType; } ;
struct TYPE_6__ {scalar_t__ restoring; } ;
struct TYPE_5__ {TYPE_4__ emr; int crColor; } ;
typedef int PHYSDEV ;
typedef TYPE_1__ EMRSETTEXTCOLOR ;
typedef TYPE_2__ EMFDRV_PDEVICE ;
typedef int COLORREF ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_4__*) ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int ) ;

COLORREF FUNC_2( PHYSDEV VAR_2, COLORREF VAR_3 )
{
    EMRSETTEXTCOLOR VAR_4;
    EMFDRV_PDEVICE *VAR_5 = FUNC_1( VAR_2 );

    if (VAR_5->restoring) return VAR_3;

    VAR_4.emr.iType = VAR_1;
    VAR_4.emr.nSize = sizeof(VAR_4);
    VAR_4.crColor = VAR_3;
    return FUNC_0( VAR_2, &VAR_4.emr ) ? VAR_3 : VAR_0;
}
