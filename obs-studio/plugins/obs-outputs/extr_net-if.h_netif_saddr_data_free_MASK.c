
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t num; TYPE_1__* array; } ;
struct netif_saddr_data {TYPE_2__ addrs; } ;
struct TYPE_3__ {int addr; int name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__) ;

__attribute__((used)) static inline void FUNC_2(struct netif_saddr_data *VAR_0)
{
 for (size_t VAR_1 = 0; VAR_1 < VAR_0->addrs.num; VAR_1++) {
  FUNC_0(VAR_0->addrs.array[VAR_1].name);
  FUNC_0(VAR_0->addrs.array[VAR_1].addr);
 }
 FUNC_1(VAR_0->addrs);
}
