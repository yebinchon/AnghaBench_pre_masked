
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct task_security_struct {int create_sid; } ;
struct dentry {int dummy; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 struct cred* FUNC_1 () ;
 struct task_security_struct* FUNC_2 (struct cred*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct dentry *VAR_1, struct cred **VAR_2)
{
 u32 VAR_3;
 struct task_security_struct *VAR_4;
 struct cred *VAR_5 = *VAR_2;

 if (VAR_5 == ((void*)0)) {
  VAR_5 = FUNC_1();
  if (!VAR_5)
   return -VAR_0;
 }

 VAR_4 = FUNC_2(VAR_5);

 FUNC_3(FUNC_0(VAR_1), &VAR_3);
 VAR_4->create_sid = VAR_3;
 *VAR_2 = VAR_5;
 return 0;
}
