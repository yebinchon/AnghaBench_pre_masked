
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long pages_compacted; } ;
struct zs_pool {TYPE_1__ stats; struct size_class** size_class; } ;
struct size_class {int index; } ;


 int VAR_0 ;
 int FUNC_0 (struct zs_pool*,struct size_class*) ;

unsigned long FUNC_1(struct zs_pool *VAR_1)
{
 int VAR_2;
 struct size_class *VAR_3;

 for (VAR_2 = VAR_0 - 1; VAR_2 >= 0; VAR_2--) {
  VAR_3 = VAR_1->size_class[VAR_2];
  if (!VAR_3)
   continue;
  if (VAR_3->index != VAR_2)
   continue;
  FUNC_0(VAR_1, VAR_3);
 }

 return VAR_1->stats.pages_compacted;
}
