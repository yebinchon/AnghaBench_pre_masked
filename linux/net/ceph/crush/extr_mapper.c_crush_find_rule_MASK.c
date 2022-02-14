
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct crush_map {size_t max_rules; TYPE_2__** rules; } ;
typedef size_t __u32 ;
struct TYPE_3__ {int ruleset; int type; int min_size; int max_size; } ;
struct TYPE_4__ {TYPE_1__ mask; } ;



int FUNC_0(const struct crush_map *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 __u32 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->max_rules; VAR_4++) {
  if (VAR_0->rules[VAR_4] &&
      VAR_0->rules[VAR_4]->mask.ruleset == VAR_1 &&
      VAR_0->rules[VAR_4]->mask.type == VAR_2 &&
      VAR_0->rules[VAR_4]->mask.min_size <= VAR_3 &&
      VAR_0->rules[VAR_4]->mask.max_size >= VAR_3)
   return VAR_4;
 }
 return -1;
}
