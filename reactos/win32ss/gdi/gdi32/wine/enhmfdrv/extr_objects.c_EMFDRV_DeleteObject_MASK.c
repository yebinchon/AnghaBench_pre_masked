
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int emr ;
typedef int UINT ;
struct TYPE_7__ {int nSize; int iType; } ;
struct TYPE_6__ {int cur_handles; scalar_t__* handles; } ;
struct TYPE_5__ {int ihObject; TYPE_4__ emr; } ;
typedef int PHYSDEV ;
typedef int HGDIOBJ ;
typedef TYPE_1__ EMRDELETEOBJECT ;
typedef TYPE_2__ EMFDRV_PDEVICE ;
typedef int BOOL ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (int ) ;

BOOL FUNC_3( PHYSDEV VAR_3, HGDIOBJ VAR_4 )
{
    EMRDELETEOBJECT VAR_5;
    EMFDRV_PDEVICE *VAR_6 = FUNC_2( VAR_3 );
    UINT VAR_7;
    BOOL VAR_8 = VAR_2;

    if(!(VAR_7 = FUNC_0(VAR_3, VAR_4))) return VAR_1;

    VAR_5.emr.iType = VAR_0;
    VAR_5.emr.nSize = sizeof(VAR_5);
    VAR_5.ihObject = VAR_7;

    if(!FUNC_1( VAR_3, &VAR_5.emr ))
        VAR_8 = VAR_1;

    VAR_6->handles[VAR_7 - 1] = 0;
    VAR_6->cur_handles--;
    return VAR_8;
}
