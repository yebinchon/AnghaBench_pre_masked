
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int cur_handles; scalar_t__* handles; } ;
struct TYPE_4__ {int rdSize; size_t* rdParm; int rdFunction; } ;
typedef scalar_t__ PHYSDEV ;
typedef TYPE_1__ METARECORD ;
typedef TYPE_2__ METAFILEDRV_PDEVICE ;
typedef size_t INT16 ;
typedef int HGDIOBJ ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,TYPE_1__*,int) ;
 int VAR_2 ;

BOOL FUNC_2( PHYSDEV VAR_3, HGDIOBJ VAR_4 )
{
    METARECORD VAR_5;
    METAFILEDRV_PDEVICE *VAR_6 = (METAFILEDRV_PDEVICE *)VAR_3;
    INT16 VAR_7;
    BOOL VAR_8 = VAR_2;

    VAR_7 = FUNC_0(VAR_3, VAR_4);
    if( VAR_7 < 0 )
        return VAR_0;

    VAR_5.rdSize = sizeof VAR_5 / 2;
    VAR_5.rdFunction = VAR_1;
    VAR_5.rdParm[0] = VAR_7;

    if(!FUNC_1( VAR_3, &VAR_5, VAR_5.rdSize*2 ))
        VAR_8 = VAR_0;

    VAR_6->handles[VAR_7] = 0;
    VAR_6->cur_handles--;
    return VAR_8;
}
