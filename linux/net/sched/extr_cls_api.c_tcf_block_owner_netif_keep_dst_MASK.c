
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_block {scalar_t__ keep_dst; } ;
struct Qdisc {int dummy; } ;
typedef enum flow_block_binder_type { ____Placeholder_flow_block_binder_type } flow_block_binder_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct Qdisc*) ;

__attribute__((used)) static void
FUNC_2(struct tcf_block *VAR_2,
          struct Qdisc *VAR_3,
          enum flow_block_binder_type VAR_4)
{
 if (VAR_2->keep_dst &&
     VAR_4 != VAR_1 &&
     VAR_4 != VAR_0)
  FUNC_0(FUNC_1(VAR_3));
}
