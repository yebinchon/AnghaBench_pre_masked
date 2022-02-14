
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_member {int node; int small_win; int list; int bc_acked; int tree_node; } ;
struct tipc_group {int dests; scalar_t__ bc_ackers; scalar_t__ bc_snd_nxt; int member_cnt; int members; } ;


 int FUNC_0 (struct tipc_member*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct tipc_group*,struct tipc_member*) ;
 int FUNC_5 (struct tipc_group*,int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(struct tipc_group *VAR_0,
         struct tipc_member *VAR_1)
{
 FUNC_3(&VAR_1->tree_node, &VAR_0->members);
 VAR_0->member_cnt--;


 if (VAR_0->bc_ackers && FUNC_1(VAR_1->bc_acked, VAR_0->bc_snd_nxt - 1))
  VAR_0->bc_ackers--;

 FUNC_2(&VAR_1->list);
 FUNC_2(&VAR_1->small_win);
 FUNC_4(VAR_0, VAR_1);


 if (!FUNC_5(VAR_0, VAR_1->node))
  FUNC_6(&VAR_0->dests, VAR_1->node);

 FUNC_0(VAR_1);
}
