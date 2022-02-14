
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct rhashtable_iter {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int rhash_table; } ;
struct ila_net {TYPE_1__ xlat; } ;
struct ila_map {int node; } ;
struct genl_info {int dummy; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ila_map*) ;
 int FUNC_1 (struct ila_map*) ;
 struct net* FUNC_2 (struct genl_info*) ;
 int FUNC_3 (struct ila_map*) ;
 int VAR_1 ;
 int * FUNC_4 (struct ila_net*,struct ila_map*) ;
 struct ila_net* FUNC_5 (struct net*,int ) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *,struct rhashtable_iter*) ;
 int FUNC_8 (struct rhashtable_iter*) ;
 struct ila_map* FUNC_9 (struct rhashtable_iter*) ;
 int FUNC_10 (struct rhashtable_iter*) ;
 int FUNC_11 (struct rhashtable_iter*) ;
 int VAR_2 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

int FUNC_14(struct sk_buff *VAR_3, struct genl_info *VAR_4)
{
 struct net *VAR_5 = FUNC_2(VAR_4);
 struct ila_net *VAR_6 = FUNC_5(VAR_5, VAR_1);
 struct rhashtable_iter VAR_7;
 struct ila_map *VAR_8;
 spinlock_t *VAR_9;
 int VAR_10 = 0;

 FUNC_7(&VAR_6->xlat.rhash_table, &VAR_7);
 FUNC_10(&VAR_7);

 for (;;) {
  VAR_8 = FUNC_9(&VAR_7);

  if (FUNC_0(VAR_8)) {
   if (FUNC_1(VAR_8) == -VAR_0)
    continue;
   VAR_10 = FUNC_1(VAR_8);
   goto done;
  } else if (!VAR_8) {
   break;
  }

  VAR_9 = FUNC_4(VAR_6, VAR_8);

  FUNC_12(VAR_9);

  VAR_10 = FUNC_6(&VAR_6->xlat.rhash_table,
          &VAR_8->node, VAR_2);
  if (!VAR_10)
   FUNC_3(VAR_8);

  FUNC_13(VAR_9);

  if (VAR_10)
   break;
 }

done:
 FUNC_11(&VAR_7);
 FUNC_8(&VAR_7);
 return VAR_10;
}
