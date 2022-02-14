
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cred {int dummy; } ;
struct aa_task_ctx {struct aa_label* nnp; } ;
struct aa_label {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct aa_task_ctx*) ;
 struct aa_label* FUNC_2 () ;
 int FUNC_3 (struct aa_label*) ;
 struct aa_label* FUNC_4 (struct aa_label*) ;
 int FUNC_5 (struct aa_label*) ;
 int FUNC_6 (struct cred*) ;
 struct aa_label* FUNC_7 (struct cred*) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 (struct aa_label*) ;
 scalar_t__ FUNC_11 (struct aa_label*) ;
 struct cred* FUNC_12 () ;
 int FUNC_13 (struct cred*,struct aa_label*) ;
 struct aa_task_ctx* FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (struct aa_label*) ;

int FUNC_16(struct aa_label *VAR_3)
{
 struct aa_label *VAR_4 = FUNC_2();
 struct aa_task_ctx *VAR_5 = FUNC_14(VAR_2);
 struct cred *VAR_6;

 FUNC_0(!VAR_3);

 if (VAR_4 == VAR_3)
  return 0;

 if (FUNC_8() != FUNC_9())
  return -VAR_0;

 VAR_6 = FUNC_12();
 if (!VAR_6)
  return -VAR_1;

 if (VAR_5->nnp && FUNC_10(VAR_5->nnp)) {
  struct aa_label *VAR_7 = VAR_5->nnp;

  VAR_5->nnp = FUNC_4(VAR_7);
  FUNC_5(VAR_7);
 }
 if (FUNC_15(VAR_3) || (FUNC_11(VAR_4) != FUNC_11(VAR_3)))




  FUNC_1(FUNC_14(VAR_2));







 FUNC_3(VAR_3);
 FUNC_5(FUNC_7(VAR_6));
 FUNC_13(VAR_6, VAR_3);

 FUNC_6(VAR_6);
 return 0;
}
