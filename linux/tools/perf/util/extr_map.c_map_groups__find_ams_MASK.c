
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct addr_map_symbol {scalar_t__ addr; scalar_t__ sym; int al_addr; TYPE_1__* map; } ;
struct TYPE_4__ {scalar_t__ start; scalar_t__ end; int (* map_ip ) (TYPE_1__*,scalar_t__) ;int * groups; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;

int FUNC_3(struct addr_map_symbol *VAR_0)
{
 if (VAR_0->addr < VAR_0->map->start || VAR_0->addr >= VAR_0->map->end) {
  if (VAR_0->map->groups == ((void*)0))
   return -1;
  VAR_0->map = FUNC_1(VAR_0->map->groups, VAR_0->addr);
  if (VAR_0->map == ((void*)0))
   return -1;
 }

 VAR_0->al_addr = VAR_0->map->map_ip(VAR_0->map, VAR_0->addr);
 VAR_0->sym = FUNC_0(VAR_0->map, VAR_0->al_addr);

 return VAR_0->sym ? 0 : -1;
}
