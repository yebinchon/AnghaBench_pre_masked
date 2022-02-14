
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct cred {int dummy; } ;
struct aa_task_ctx {scalar_t__ token; int * onexec; int * previous; } ;
struct aa_label {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct aa_label*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cred*) ;
 int FUNC_4 (struct cred*) ;
 int * FUNC_5 (struct cred*) ;
 int VAR_2 ;
 struct cred* FUNC_6 () ;
 int FUNC_7 (struct cred*,int ) ;
 struct aa_task_ctx* FUNC_8 (int ) ;

int FUNC_9(struct aa_label *VAR_3, u64 VAR_4)
{
 struct aa_task_ctx *VAR_5 = FUNC_8(VAR_2);
 struct cred *VAR_6;

 VAR_6 = FUNC_6();
 if (!VAR_6)
  return -VAR_1;
 FUNC_0(!VAR_3);

 if (!VAR_5->previous) {

  VAR_5->previous = FUNC_5(VAR_6);
  VAR_5->token = VAR_4;
 } else if (VAR_5->token == VAR_4) {
  FUNC_2(FUNC_5(VAR_6));
 } else {

  FUNC_3(VAR_6);
  return -VAR_0;
 }

 FUNC_7(VAR_6, FUNC_1(VAR_3));

 FUNC_2(VAR_5->onexec);
 VAR_5->onexec = ((void*)0);

 FUNC_4(VAR_6);
 return 0;
}
