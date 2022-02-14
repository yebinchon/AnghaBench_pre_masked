
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_parman_item {int * prio; } ;
struct test_parman {int * prios; struct test_parman_item* items; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct test_parman*) ;

__attribute__((used)) static void FUNC_1(struct test_parman *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct test_parman_item *VAR_4 = &VAR_2->items[VAR_3];
  unsigned int VAR_5 = FUNC_0(VAR_2) &
       VAR_1;


  VAR_4->prio = &VAR_2->prios[VAR_5];
 }
}
