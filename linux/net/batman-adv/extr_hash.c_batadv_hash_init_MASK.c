
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct batadv_hashtable {size_t size; int generation; int * list_locks; int * table; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct batadv_hashtable *VAR_0)
{
 u32 VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->size; VAR_1++) {
  FUNC_0(&VAR_0->table[VAR_1]);
  FUNC_2(&VAR_0->list_locks[VAR_1]);
 }

 FUNC_1(&VAR_0->generation, 0);
}
