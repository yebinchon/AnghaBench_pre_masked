
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct cred {int dummy; } ;
struct aa_task_ctx {scalar_t__ onexec; scalar_t__ previous; } ;
struct aa_label {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct aa_label* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct aa_label*,char**) ;
 int FUNC_2 (struct aa_label*) ;
 scalar_t__ FUNC_3 (struct cred const*) ;
 int VAR_2 ;
 struct cred* FUNC_4 (struct task_struct*) ;
 int FUNC_5 (struct cred const*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 struct aa_task_ctx* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct task_struct *VAR_3, char *VAR_4,
    char **VAR_5)
{
 int VAR_6 = -VAR_1;

 const struct cred *VAR_7 = FUNC_4(VAR_3);
 struct aa_task_ctx *VAR_8 = FUNC_7(VAR_2);
 struct aa_label *VAR_9 = ((void*)0);

 if (FUNC_6(VAR_4, "current") == 0)
  VAR_9 = FUNC_0(FUNC_3(VAR_7));
 else if (FUNC_6(VAR_4, "prev") == 0 && VAR_8->previous)
  VAR_9 = FUNC_0(VAR_8->previous);
 else if (FUNC_6(VAR_4, "exec") == 0 && VAR_8->onexec)
  VAR_9 = FUNC_0(VAR_8->onexec);
 else
  VAR_6 = -VAR_0;

 if (VAR_9)
  VAR_6 = FUNC_1(VAR_9, VAR_5);

 FUNC_2(VAR_9);
 FUNC_5(VAR_7);

 return VAR_6;
}
