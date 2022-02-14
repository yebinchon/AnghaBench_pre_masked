
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int index; } ;
struct TYPE_5__ {scalar_t__ family; TYPE_1__ iface; } ;
typedef TYPE_2__ flush_neighbors_message_t ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static DWORD
FUNC_2(flush_neighbors_message_t *VAR_1)
{
    if (VAR_1->family == VAR_0)
    {
        return FUNC_0(VAR_1->iface.index);
    }

    return FUNC_1(VAR_1->family, VAR_1->iface.index);
}
