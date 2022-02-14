
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {int dummy; } ;
struct ucred {int uid; int gid; int pid; } ;
struct pid {int dummy; } ;
struct cred {int egid; int euid; } ;


 struct user_namespace* FUNC_0 () ;
 int FUNC_1 (struct user_namespace*,int ) ;
 int FUNC_2 (struct user_namespace*,int ) ;
 int FUNC_3 (struct pid*) ;

__attribute__((used)) static void FUNC_4(struct pid *VAR_0, const struct cred *VAR_1,
     struct ucred *VAR_2)
{
 VAR_2->pid = FUNC_3(VAR_0);
 VAR_2->uid = VAR_2->gid = -1;
 if (VAR_1) {
  struct user_namespace *VAR_3 = FUNC_0();

  VAR_2->uid = FUNC_2(VAR_3, VAR_1->euid);
  VAR_2->gid = FUNC_1(VAR_3, VAR_1->egid);
 }
}
