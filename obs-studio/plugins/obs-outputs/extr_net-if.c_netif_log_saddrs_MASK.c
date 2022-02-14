
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t num; TYPE_1__* array; } ;
struct netif_saddr_data {TYPE_2__ addrs; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (char*,int ) ;

void FUNC_1(struct netif_saddr_data *VAR_0)
{
 for (size_t VAR_1 = 0; VAR_1 < VAR_0->addrs.num; VAR_1++)
  FUNC_0("\t\t%s", VAR_0->addrs.array[VAR_1].name);
}
