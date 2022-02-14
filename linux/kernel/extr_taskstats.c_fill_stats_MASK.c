
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {int dummy; } ;
struct taskstats {int nivcsw; int nvcsw; int version; } ;
struct task_struct {int nivcsw; int nvcsw; } ;
struct pid_namespace {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct user_namespace*,struct pid_namespace*,struct taskstats*,struct task_struct*) ;
 int FUNC_1 (struct taskstats*,struct task_struct*) ;
 int FUNC_2 (struct taskstats*,int ,int) ;
 int FUNC_3 (struct taskstats*,struct task_struct*) ;

__attribute__((used)) static void FUNC_4(struct user_namespace *VAR_1,
         struct pid_namespace *VAR_2,
         struct task_struct *VAR_3, struct taskstats *VAR_4)
{
 FUNC_2(VAR_4, 0, sizeof(*VAR_4));







 FUNC_1(VAR_4, VAR_3);


 VAR_4->version = VAR_0;
 VAR_4->nvcsw = VAR_3->nvcsw;
 VAR_4->nivcsw = VAR_3->nivcsw;
 FUNC_0(VAR_1, VAR_2, VAR_4, VAR_3);


 FUNC_3(VAR_4, VAR_3);
}
