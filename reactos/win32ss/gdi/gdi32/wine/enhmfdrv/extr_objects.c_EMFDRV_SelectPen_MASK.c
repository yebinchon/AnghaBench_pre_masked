
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct brush_pattern {int dummy; } ;
typedef int emr ;
struct TYPE_14__ {int nSize; int iType; } ;
struct TYPE_13__ {scalar_t__ restoring; } ;
struct TYPE_12__ {int ihObject; TYPE_7__ emr; } ;
struct TYPE_11__ {int hdc; } ;
typedef TYPE_1__* PHYSDEV ;
typedef scalar_t__ HPEN ;
typedef TYPE_2__ EMRSELECTOBJECT ;
typedef TYPE_3__ EMFDRV_PDEVICE ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_7__*) ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_2 ;
 TYPE_3__* FUNC_5 (TYPE_1__*) ;

HPEN FUNC_6(PHYSDEV VAR_3, HPEN VAR_4, const struct brush_pattern *VAR_5 )
{
    EMFDRV_PDEVICE *VAR_6 = FUNC_5( VAR_3 );
    EMRSELECTOBJECT VAR_7;
    DWORD VAR_8;
    int VAR_9;

    if (VAR_6->restoring) return VAR_4;







    for (VAR_9 = VAR_2; VAR_9 <= VAR_0; VAR_9++)
    {
        if (VAR_4 == FUNC_4(VAR_9))
        {
            VAR_8 = VAR_9 | 0x80000000;
            goto found;
        }
    }
    if((VAR_8 = FUNC_1(VAR_3, VAR_4)) != 0)
        goto found;

    if (!(VAR_8 = FUNC_0(VAR_3, VAR_4))) return 0;
    FUNC_3(VAR_4, VAR_3->hdc);

 found:
    VAR_7.emr.iType = VAR_1;
    VAR_7.emr.nSize = sizeof(VAR_7);
    VAR_7.ihObject = VAR_8;
    return FUNC_2( VAR_3, &VAR_7.emr ) ? VAR_4 : 0;
}
