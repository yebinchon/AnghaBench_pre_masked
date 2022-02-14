
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT16 ;
typedef size_t UINT ;
struct TYPE_4__ {size_t handles_size; scalar_t__* handles; scalar_t__ cur_handles; TYPE_1__* mh; } ;
struct TYPE_3__ {scalar_t__ mtNoObjects; } ;
typedef scalar_t__ PHYSDEV ;
typedef TYPE_2__ METAFILEDRV_PDEVICE ;
typedef int HGDIOBJ ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__* FUNC_1 (int ,int ,scalar_t__*,int) ;
 scalar_t__ FUNC_2 (int ) ;

UINT FUNC_3( PHYSDEV VAR_2, HGDIOBJ VAR_3 )
{
    METAFILEDRV_PDEVICE *VAR_4 = (METAFILEDRV_PDEVICE *)VAR_2;
    UINT16 VAR_5;

    for(VAR_5 = 0; VAR_5 < VAR_4->handles_size; VAR_5++)
        if(VAR_4->handles[VAR_5] == 0) break;
    if(VAR_5 == VAR_4->handles_size) {
        VAR_4->handles_size += VAR_0;
        VAR_4->handles = FUNC_1(FUNC_0(), VAR_1,
                                       VAR_4->handles,
                                       VAR_4->handles_size * sizeof(VAR_4->handles[0]));
    }
    VAR_4->handles[VAR_5] = FUNC_2( VAR_3 );

    VAR_4->cur_handles++;
    if(VAR_4->cur_handles > VAR_4->mh->mtNoObjects)
        VAR_4->mh->mtNoObjects++;

    return VAR_5 ;
}
