
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct task_security_struct {scalar_t__ sockcreate_sid; scalar_t__ keycreate_sid; scalar_t__ create_sid; int sid; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int *) ;
 int FUNC_1 () ;
 struct task_security_struct* FUNC_2 (struct cred*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct cred *VAR_3, u32 VAR_4)
{
 struct task_security_struct *VAR_5 = FUNC_2(VAR_3);
 u32 VAR_6 = FUNC_1();
 int VAR_7;

 VAR_7 = FUNC_0(&VAR_2,
      VAR_6, VAR_4,
      VAR_1,
      VAR_0,
      ((void*)0));
 if (VAR_7 == 0) {
  VAR_5->sid = VAR_4;
  VAR_5->create_sid = 0;
  VAR_5->keycreate_sid = 0;
  VAR_5->sockcreate_sid = 0;
 }
 return VAR_7;
}
