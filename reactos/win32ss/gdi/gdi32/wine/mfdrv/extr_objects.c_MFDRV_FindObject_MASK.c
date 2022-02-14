
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t handles_size; scalar_t__* handles; } ;
typedef scalar_t__ PHYSDEV ;
typedef TYPE_1__ METAFILEDRV_PDEVICE ;
typedef size_t INT16 ;
typedef scalar_t__ HGDIOBJ ;



__attribute__((used)) static INT16 FUNC_0( PHYSDEV VAR_0, HGDIOBJ VAR_1 )
{
    METAFILEDRV_PDEVICE *VAR_2 = (METAFILEDRV_PDEVICE *)VAR_0;
    INT16 VAR_3;

    for(VAR_3 = 0; VAR_3 < VAR_2->handles_size; VAR_3++)
        if(VAR_2->handles[VAR_3] == VAR_1) break;

    if(VAR_3 == VAR_2->handles_size) return -1;

    return VAR_3 ;
}
