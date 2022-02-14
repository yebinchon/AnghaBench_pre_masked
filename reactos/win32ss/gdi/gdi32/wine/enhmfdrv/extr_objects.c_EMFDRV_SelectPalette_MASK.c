
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int emr ;
struct TYPE_14__ {int nSize; int iType; } ;
struct TYPE_13__ {scalar_t__ restoring; } ;
struct TYPE_12__ {int ihPal; TYPE_7__ emr; } ;
struct TYPE_11__ {int hdc; } ;
typedef TYPE_1__* PHYSDEV ;
typedef int HPALETTE ;
typedef TYPE_2__ EMRSELECTPALETTE ;
typedef TYPE_3__ EMFDRV_PDEVICE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_7__*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 TYPE_3__* FUNC_5 (TYPE_1__*) ;

HPALETTE FUNC_6( PHYSDEV VAR_2, HPALETTE VAR_3, BOOL VAR_4 )
{
    EMFDRV_PDEVICE *VAR_5 = FUNC_5( VAR_2 );
    EMRSELECTPALETTE VAR_6;
    DWORD VAR_7;

    if (VAR_5->restoring) return VAR_3;

    if (VAR_3 == FUNC_4( VAR_0 ))
    {
        VAR_7 = VAR_0 | 0x80000000;
        goto found;
    }

    if ((VAR_7 = FUNC_1( VAR_2, VAR_3 )) != 0)
        goto found;

    if (!(VAR_7 = FUNC_0( VAR_2, VAR_3 ))) return 0;
    FUNC_3( VAR_3, VAR_2->hdc );

found:
    VAR_6.emr.iType = VAR_1;
    VAR_6.emr.nSize = sizeof(VAR_6);
    VAR_6.ihPal = VAR_7;
    return FUNC_2( VAR_2, &VAR_6.emr ) ? VAR_3 : 0;
}
