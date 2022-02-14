
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct tipc_member {int state; void* node; scalar_t__ bc_acked; void* instance; void* port; struct tipc_group* group; int deferredq; int small_win; int list; } ;
struct tipc_group {int dests; int member_cnt; scalar_t__ bc_snd_nxt; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct tipc_member* FUNC_2 (int,int ) ;
 int FUNC_3 (struct tipc_group*,struct tipc_member*) ;
 int FUNC_4 (int *,void*) ;

__attribute__((used)) static struct tipc_member *FUNC_5(struct tipc_group *VAR_1,
          u32 VAR_2, u32 VAR_3,
          u32 VAR_4, int VAR_5)
{
 struct tipc_member *VAR_6;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);
 FUNC_0(&VAR_6->list);
 FUNC_0(&VAR_6->small_win);
 FUNC_1(&VAR_6->deferredq);
 VAR_6->group = VAR_1;
 VAR_6->node = VAR_2;
 VAR_6->port = VAR_3;
 VAR_6->instance = VAR_4;
 VAR_6->bc_acked = VAR_1->bc_snd_nxt - 1;
 VAR_1->member_cnt++;
 FUNC_3(VAR_1, VAR_6);
 FUNC_4(&VAR_1->dests, VAR_6->node);
 VAR_6->state = VAR_5;
 return VAR_6;
}
