
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {scalar_t__ end; unsigned long start; } ;
struct addr_location {scalar_t__ addr; TYPE_1__* map; } ;
struct TYPE_2__ {unsigned long start; } ;



__attribute__((used)) static unsigned long FUNC_0(struct symbol *VAR_0, struct addr_location *VAR_1)
{
 unsigned long VAR_2;

 if (VAR_1->addr < VAR_0->end)
  VAR_2 = VAR_1->addr - VAR_0->start;
 else
  VAR_2 = VAR_1->addr - VAR_1->map->start - VAR_0->start;

 return VAR_2;
}
