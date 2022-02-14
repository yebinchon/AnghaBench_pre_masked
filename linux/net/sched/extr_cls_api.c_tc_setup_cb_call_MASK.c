
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_block {int cb_lock; scalar_t__ lockeddevcnt; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct tcf_block*,int,void*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;

int FUNC_6(struct tcf_block *VAR_0, enum tc_setup_type VAR_1,
       void *VAR_2, bool VAR_3, bool VAR_4)
{
 bool VAR_5 = FUNC_0(VAR_0->lockeddevcnt) && !VAR_4;
 int VAR_6;

retry:
 if (VAR_5)
  FUNC_3();
 FUNC_2(&VAR_0->cb_lock);




 if (!VAR_4 && !VAR_5 && VAR_0->lockeddevcnt) {
  FUNC_5(&VAR_0->cb_lock);
  VAR_5 = 1;
  goto retry;
 }

 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);

 FUNC_5(&VAR_0->cb_lock);
 if (VAR_5)
  FUNC_4();
 return VAR_6;
}
