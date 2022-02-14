
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct hlist_head {int dummy; } ;
struct TYPE_2__ {struct batadv_hashtable* local_hash; } ;
struct batadv_priv {TYPE_1__ tt; } ;
struct batadv_hashtable {size_t size; int * list_locks; struct hlist_head* table; } ;
typedef int spinlock_t ;


 int FUNC_0 (struct batadv_priv*,struct hlist_head*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct batadv_priv *VAR_0,
      int VAR_1)
{
 struct batadv_hashtable *VAR_2 = VAR_0->tt.local_hash;
 struct hlist_head *VAR_3;
 spinlock_t *VAR_4;
 u32 VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2->size; VAR_5++) {
  VAR_3 = &VAR_2->table[VAR_5];
  VAR_4 = &VAR_2->list_locks[VAR_5];

  FUNC_1(VAR_4);
  FUNC_0(VAR_0, VAR_3, VAR_1);
  FUNC_2(VAR_4);
 }
}
