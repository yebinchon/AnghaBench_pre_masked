
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct smack_known {int smk_known; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ,int ) ;
 struct smack_known* FUNC_1 (struct task_struct*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct task_struct *VAR_3, char *VAR_4, char **VAR_5)
{
 struct smack_known *VAR_6 = FUNC_1(VAR_3);
 char *VAR_7;
 int VAR_8;

 if (FUNC_2(VAR_4, "current") != 0)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_6->smk_known, VAR_2);
 if (VAR_7 == ((void*)0))
  return -VAR_1;

 VAR_8 = FUNC_3(VAR_7);
 *VAR_5 = VAR_7;
 return VAR_8;
}
