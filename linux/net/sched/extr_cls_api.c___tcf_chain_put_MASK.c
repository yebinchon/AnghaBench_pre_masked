
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto_ops {int dummy; } ;
struct tcf_chain {int explicitly_created; unsigned int action_refcnt; unsigned int refcnt; int flushing; int index; void* tmplt_priv; struct tcf_proto_ops* tmplt_ops; struct tcf_block* block; } ;
struct tcf_block {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tcf_proto_ops const*,void*,int ,struct tcf_block*,int *,int ,int ,int) ;
 int FUNC_3 (struct tcf_proto_ops const*,void*) ;
 int FUNC_4 (struct tcf_chain*,int) ;
 int FUNC_5 (struct tcf_chain*) ;

__attribute__((used)) static void FUNC_6(struct tcf_chain *VAR_0, bool VAR_1,
       bool VAR_2)
{
 struct tcf_block *VAR_3 = VAR_0->block;
 const struct tcf_proto_ops *VAR_4;
 bool VAR_5 = 0;
 unsigned int VAR_6;
 void *VAR_7;

 FUNC_0(&VAR_3->lock);
 if (VAR_2) {
  if (!VAR_0->explicitly_created) {
   FUNC_1(&VAR_3->lock);
   return;
  }
  VAR_0->explicitly_created = 0;
 }

 if (VAR_1)
  VAR_0->action_refcnt--;





 VAR_6 = --VAR_0->refcnt;
 VAR_4 = VAR_0->tmplt_ops;
 VAR_7 = VAR_0->tmplt_priv;


 if (VAR_6 - VAR_0->action_refcnt == 0 && !VAR_1) {
  FUNC_2(VAR_4, VAR_7, VAR_0->index,
           VAR_3, ((void*)0), 0, 0, 0);

  VAR_0->flushing = 0;
 }

 if (VAR_6 == 0)
  VAR_5 = FUNC_5(VAR_0);
 FUNC_1(&VAR_3->lock);

 if (VAR_6 == 0) {
  FUNC_3(VAR_4, VAR_7);
  FUNC_4(VAR_0, VAR_5);
 }
}
