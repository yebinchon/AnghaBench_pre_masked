
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {scalar_t__ device_type; scalar_t__ device_id; struct TYPE_4__* next; } ;
typedef TYPE_1__ SessionInfo ;
typedef scalar_t__ DeviceType ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

SessionInfo*
FUNC_2(
    DeviceType VAR_2,
    UINT VAR_3)
{
    SessionInfo* VAR_4;

    FUNC_0(&VAR_1);
    VAR_4 = VAR_0;

    while ( VAR_4 )
    {
        if ( ( VAR_4->device_type == VAR_2 ) &&
             ( VAR_4->device_id == VAR_3 ) )
        {
            FUNC_1(&VAR_1);
            return VAR_4;
        }

        VAR_4 = VAR_4->next;
    }

    FUNC_1(&VAR_1);
    return ((void*)0);
}
