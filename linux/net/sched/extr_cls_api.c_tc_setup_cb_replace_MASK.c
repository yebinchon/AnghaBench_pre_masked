
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcf_proto {TYPE_1__* ops; } ;
struct tcf_block {int cb_lock; scalar_t__ nooffloaddevcnt; scalar_t__ lockeddevcnt; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;
struct TYPE_2__ {int (* hw_add ) (struct tcf_proto*,void*) ;int (* hw_del ) (struct tcf_proto*,void*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct tcf_block*,int,void*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct tcf_proto*,void*) ;
 int FUNC_6 (struct tcf_proto*,void*) ;
 int FUNC_7 (struct tcf_block*,struct tcf_proto*,unsigned int*,int *) ;
 int FUNC_8 (struct tcf_block*,struct tcf_proto*,unsigned int*,int *,int,int) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct tcf_block *VAR_1, struct tcf_proto *VAR_2,
   enum tc_setup_type VAR_3, void *VAR_4, bool VAR_5,
   u32 *VAR_6, unsigned int *VAR_7,
   u32 *VAR_8, unsigned int *VAR_9,
   bool VAR_10)
{
 bool VAR_11 = FUNC_0(VAR_1->lockeddevcnt) && !VAR_10;
 int VAR_12;

retry:
 if (VAR_11)
  FUNC_3();
 FUNC_2(&VAR_1->cb_lock);




 if (!VAR_10 && !VAR_11 && VAR_1->lockeddevcnt) {
  FUNC_9(&VAR_1->cb_lock);
  VAR_11 = 1;
  goto retry;
 }


 if (VAR_1->nooffloaddevcnt && VAR_5) {
  VAR_12 = -VAR_0;
  goto err_unlock;
 }

 FUNC_7(VAR_1, VAR_2, VAR_7, VAR_6);
 if (VAR_2->ops->hw_del)
  VAR_2->ops->hw_del(VAR_2, VAR_4);

 VAR_12 = FUNC_1(VAR_1, VAR_3, VAR_4, VAR_5);
 if (VAR_12 < 0)
  goto err_unlock;

 if (VAR_2->ops->hw_add)
  VAR_2->ops->hw_add(VAR_2, VAR_4);
 if (VAR_12 > 0)
  FUNC_8(VAR_1, VAR_2, VAR_9,
       VAR_8, VAR_12, 1);
err_unlock:
 FUNC_9(&VAR_1->cb_lock);
 if (VAR_11)
  FUNC_4();
 return VAR_12 < 0 ? VAR_12 : 0;
}
