
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_head {int dummy; } ;
struct dp_meter {int dp_hash_node; int id; } ;
struct datapath {int dummy; } ;


 int FUNC_0 (int *,struct hlist_head*) ;
 struct hlist_head* FUNC_1 (struct datapath*,int ) ;

__attribute__((used)) static void FUNC_2(struct datapath *VAR_0, struct dp_meter *VAR_1)
{
 struct hlist_head *VAR_2 = FUNC_1(VAR_0, VAR_1->id);

 FUNC_0(&VAR_1->dp_hash_node, VAR_2);
}
