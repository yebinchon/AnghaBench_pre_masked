
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Masscan {unsigned int nic_count; TYPE_1__* nic; } ;
struct TYPE_2__ {int src; } ;


 scalar_t__ FUNC_0 (int *,unsigned int) ;

__attribute__((used)) static unsigned
FUNC_1(const struct Masscan *VAR_0, unsigned VAR_1)
{
    unsigned VAR_2;
    for (VAR_2=0; VAR_2<VAR_0->nic_count; VAR_2++)
        if (FUNC_0(&VAR_0->nic[VAR_2].src, VAR_1))
            return 1;
    return 0;
}
