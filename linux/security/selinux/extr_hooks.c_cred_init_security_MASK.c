
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_security_struct {int sid; int osid; } ;
struct cred {int dummy; } ;
struct TYPE_2__ {scalar_t__ real_cred; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 struct task_security_struct* FUNC_0 (struct cred*) ;

__attribute__((used)) static void FUNC_1(void)
{
 struct cred *VAR_2 = (struct cred *) VAR_1->real_cred;
 struct task_security_struct *VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 VAR_3->osid = VAR_3->sid = VAR_0;
}
