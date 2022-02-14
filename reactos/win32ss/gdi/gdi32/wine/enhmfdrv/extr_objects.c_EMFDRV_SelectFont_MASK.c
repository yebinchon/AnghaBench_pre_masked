
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;


typedef int emr ;
typedef int UINT ;
struct TYPE_19__ {scalar_t__ restoring; } ;
struct TYPE_15__ {int nSize; int iType; } ;
struct TYPE_18__ {int ihObject; TYPE_11__ emr; } ;
struct TYPE_17__ {TYPE_1__* funcs; int hdc; } ;
struct TYPE_16__ {int (* pSelectFont ) (TYPE_2__*,scalar_t__,int *) ;} ;
typedef TYPE_2__* PHYSDEV ;
typedef scalar_t__ HFONT ;
typedef TYPE_3__ EMRSELECTOBJECT ;
typedef TYPE_4__ EMFDRV_PDEVICE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,TYPE_11__*) ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__,int ) ;
 TYPE_2__* FUNC_4 (TYPE_2__*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_4 ;
 TYPE_4__* FUNC_6 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_7 (TYPE_2__*,scalar_t__,int *) ;

HFONT FUNC_8( PHYSDEV VAR_6, HFONT VAR_7, UINT *VAR_8 )
{
    EMFDRV_PDEVICE *VAR_9 = FUNC_6( VAR_6 );
    EMRSELECTOBJECT VAR_10;
    DWORD VAR_11;
    int VAR_12;

    if (VAR_9->restoring) goto done;







    for (VAR_12 = VAR_4; VAR_12 <= VAR_0; VAR_12++)
    {
        if (VAR_12 != VAR_1 && VAR_7 == FUNC_5(VAR_12))
        {
            VAR_11 = VAR_12 | 0x80000000;
            goto found;
        }
    }

    if((VAR_11 = FUNC_1(VAR_6, VAR_7)) != 0)
        goto found;

    if (!(VAR_11 = FUNC_0(VAR_6, VAR_7 ))) return 0;
    FUNC_3(VAR_7, VAR_6->hdc);

 found:
    VAR_10.emr.iType = VAR_2;
    VAR_10.emr.nSize = sizeof(VAR_10);
    VAR_10.ihObject = VAR_11;
    if(!FUNC_2( VAR_6, &VAR_10.emr ))
        return 0;
done:
    *VAR_8 = VAR_3;
    VAR_6 = FUNC_4( VAR_6, VAR_5 );
    VAR_6->funcs->pSelectFont( VAR_6, VAR_7, VAR_8 );
    return VAR_7;
}
