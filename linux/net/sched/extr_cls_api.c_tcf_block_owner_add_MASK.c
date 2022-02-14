
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_block_owner_item {int binder_type; int list; struct Qdisc* q; } ;
struct tcf_block {int owner_list; } ;
struct Qdisc {int dummy; } ;
typedef enum flow_block_binder_type { ____Placeholder_flow_block_binder_type } flow_block_binder_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct tcf_block_owner_item* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct tcf_block *VAR_2,
          struct Qdisc *VAR_3,
          enum flow_block_binder_type VAR_4)
{
 struct tcf_block_owner_item *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;
 VAR_5->q = VAR_3;
 VAR_5->binder_type = VAR_4;
 FUNC_1(&VAR_5->list, &VAR_2->owner_list);
 return 0;
}
