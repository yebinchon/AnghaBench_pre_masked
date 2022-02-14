
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_lru {int shrinker_id; int * node; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct list_lru*) ;
 int FUNC_2 (struct list_lru*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

void FUNC_5(struct list_lru *VAR_0)
{

 if (!VAR_0->node)
  return;

 FUNC_3();

 FUNC_1(VAR_0);

 FUNC_2(VAR_0);
 FUNC_0(VAR_0->node);
 VAR_0->node = ((void*)0);




 FUNC_4();
}
