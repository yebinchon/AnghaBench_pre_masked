
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbitmap {unsigned int map_nr; TYPE_1__* map; } ;
struct TYPE_2__ {int word; int cleared; } ;



bool FUNC_0(const struct sbitmap *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->map_nr; VAR_1++) {
  if (VAR_0->map[VAR_1].word & ~VAR_0->map[VAR_1].cleared)
   return 1;
 }
 return 0;
}
