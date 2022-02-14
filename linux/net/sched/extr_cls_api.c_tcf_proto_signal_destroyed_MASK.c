
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int destroy_ht_node; } ;
struct tcf_chain {struct tcf_block* block; } ;
struct tcf_block {int proto_destroy_lock; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct tcf_chain *VAR_0, struct tcf_proto *VAR_1)
{
 struct tcf_block *VAR_2 = VAR_0->block;

 FUNC_2(&VAR_2->proto_destroy_lock);
 if (FUNC_1(&VAR_1->destroy_ht_node))
  FUNC_0(&VAR_1->destroy_ht_node);
 FUNC_3(&VAR_2->proto_destroy_lock);
}
