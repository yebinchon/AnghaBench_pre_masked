
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct lock_class_key {int dummy; } ;
struct batadv_hashtable {size_t size; int * list_locks; } ;


 int FUNC_0 (int *,struct lock_class_key*) ;

void FUNC_1(struct batadv_hashtable *VAR_0,
    struct lock_class_key *VAR_1)
{
 u32 VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->size; VAR_2++)
  FUNC_0(&VAR_0->list_locks[VAR_2], VAR_1);
}
