
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_task_ctx {int token; struct aa_label* onexec; } ;
struct aa_label {int dummy; } ;


 int FUNC_0 (struct aa_label*) ;
 int FUNC_1 (struct aa_label*) ;
 int VAR_0 ;
 struct aa_task_ctx* FUNC_2 (int ) ;

int FUNC_3(struct aa_label *VAR_1, bool VAR_2)
{
 struct aa_task_ctx *VAR_3 = FUNC_2(VAR_0);

 FUNC_0(VAR_1);
 FUNC_1(VAR_3->onexec);
 VAR_3->onexec = VAR_1;
 VAR_3->token = VAR_2;

 return 0;
}
