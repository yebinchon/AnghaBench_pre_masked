
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct cred {int user_ns; int euid; int uid; } ;


 int VAR_0 ;
 struct cred* FUNC_0 (struct task_struct*) ;
 struct cred* FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static bool FUNC_4(struct task_struct *VAR_1)
{
 const struct cred *VAR_2 = FUNC_1(), *VAR_3 = FUNC_0(VAR_1);

 if (FUNC_3(VAR_3->uid, VAR_2->euid) ||
     FUNC_3(VAR_3->euid, VAR_2->euid))
  return 1;
 if (FUNC_2(VAR_3->user_ns, VAR_0))
  return 1;
 return 0;
}
