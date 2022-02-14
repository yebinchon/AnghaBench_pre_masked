
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct cred {int dummy; } ;
struct aa_task_ctx {scalar_t__ token; int previous; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct aa_task_ctx*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct cred*) ;
 int FUNC_5 (struct cred*) ;
 int VAR_2 ;
 struct cred* FUNC_6 () ;
 int FUNC_7 (struct cred*,int ) ;
 struct aa_task_ctx* FUNC_8 (int ) ;

int FUNC_9(u64 VAR_3)
{
 struct aa_task_ctx *VAR_4 = FUNC_8(VAR_2);
 struct cred *VAR_5;

 if (VAR_4->token != VAR_3)
  return -VAR_0;

 if (!VAR_4->previous)
  return 0;

 VAR_5 = FUNC_6();
 if (!VAR_5)
  return -VAR_1;

 FUNC_3(FUNC_5(VAR_5));
 FUNC_7(VAR_5, FUNC_2(VAR_4->previous));
 FUNC_0(!FUNC_5(VAR_5));

 FUNC_1(VAR_4);

 FUNC_4(VAR_5);

 return 0;
}
