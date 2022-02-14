
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_2__ {size_t handles_size; int cur_handles; scalar_t__* handles; } ;
typedef scalar_t__ PHYSDEV ;
typedef TYPE_1__ METAFILEDRV_PDEVICE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

BOOL FUNC_0( PHYSDEV VAR_2, UINT VAR_3 )
{
    METAFILEDRV_PDEVICE *VAR_4 = (METAFILEDRV_PDEVICE *)VAR_2;
    BOOL VAR_5 = VAR_0;

    if (VAR_3 < VAR_4->handles_size && VAR_4->handles[VAR_3])
    {
        VAR_4->handles[VAR_3] = 0;
        VAR_4->cur_handles--;
        VAR_5 = VAR_1;
    }
    return VAR_5;
}
