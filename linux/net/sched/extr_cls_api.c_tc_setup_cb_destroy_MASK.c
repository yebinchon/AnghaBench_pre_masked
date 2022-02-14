
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcf_proto {TYPE_1__* ops; } ;
struct tcf_block {int cb_lock; scalar_t__ lockeddevcnt; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;
struct TYPE_2__ {int (* hw_del ) (struct tcf_proto*,void*) ;} ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct tcf_block*,int,void*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct tcf_proto*,void*) ;
 int FUNC_6 (struct tcf_block*,struct tcf_proto*,unsigned int*,int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct tcf_block *VAR_0, struct tcf_proto *VAR_1,
   enum tc_setup_type VAR_2, void *VAR_3, bool VAR_4,
   u32 *VAR_5, unsigned int *VAR_6, bool VAR_7)
{
 bool VAR_8 = FUNC_0(VAR_0->lockeddevcnt) && !VAR_7;
 int VAR_9;

retry:
 if (VAR_8)
  FUNC_3();
 FUNC_2(&VAR_0->cb_lock);




 if (!VAR_7 && !VAR_8 && VAR_0->lockeddevcnt) {
  FUNC_7(&VAR_0->cb_lock);
  VAR_8 = 1;
  goto retry;
 }

 VAR_9 = FUNC_1(VAR_0, VAR_2, VAR_3, VAR_4);

 FUNC_6(VAR_0, VAR_1, VAR_6, VAR_5);
 if (VAR_1->ops->hw_del)
  VAR_1->ops->hw_del(VAR_1, VAR_3);

 FUNC_7(&VAR_0->cb_lock);
 if (VAR_8)
  FUNC_4();
 return VAR_9 < 0 ? VAR_9 : 0;
}
