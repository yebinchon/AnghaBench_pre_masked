
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zs_pool {int index; struct zs_pool* name; int size; int * fullness_list; struct zs_pool** size_class; } ;
struct size_class {int index; struct size_class* name; int size; int * fullness_list; struct size_class** size_class; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct zs_pool*) ;
 int FUNC_1 (struct zs_pool*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (struct zs_pool*) ;
 int FUNC_5 (struct zs_pool*) ;
 int FUNC_6 (struct zs_pool*) ;

void FUNC_7(struct zs_pool *VAR_3)
{
 int VAR_4;

 FUNC_6(VAR_3);
 FUNC_5(VAR_3);
 FUNC_4(VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  int VAR_5;
  struct size_class *VAR_6 = VAR_3->size_class[VAR_4];

  if (!VAR_6)
   continue;

  if (VAR_6->index != VAR_4)
   continue;

  for (VAR_5 = VAR_1; VAR_5 < VAR_0; VAR_5++) {
   if (!FUNC_2(&VAR_6->fullness_list[VAR_5])) {
    FUNC_3("Freeing non-empty class with size %db, fullness group %d\n",
     VAR_6->size, VAR_5);
   }
  }
  FUNC_1(VAR_6);
 }

 FUNC_0(VAR_3);
 FUNC_1(VAR_3->name);
 FUNC_1(VAR_3);
}
