
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct batadv_hashtable {struct batadv_hashtable* table; int size; void* list_locks; } ;


 int VAR_0 ;
 int FUNC_0 (struct batadv_hashtable*) ;
 int FUNC_1 (struct batadv_hashtable*) ;
 struct batadv_hashtable* FUNC_2 (int,int ) ;
 void* FUNC_3 (int ,int,int ) ;

struct batadv_hashtable *FUNC_4(u32 VAR_1)
{
 struct batadv_hashtable *VAR_2;

 VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->table = FUNC_3(VAR_1, sizeof(*VAR_2->table), VAR_0);
 if (!VAR_2->table)
  goto free_hash;

 VAR_2->list_locks = FUNC_3(VAR_1, sizeof(*VAR_2->list_locks),
      VAR_0);
 if (!VAR_2->list_locks)
  goto free_table;

 VAR_2->size = VAR_1;
 FUNC_0(VAR_2);
 return VAR_2;

free_table:
 FUNC_1(VAR_2->table);
free_hash:
 FUNC_1(VAR_2);
 return ((void*)0);
}
