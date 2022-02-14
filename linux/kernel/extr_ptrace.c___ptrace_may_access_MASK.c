
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct mm_struct* mm; } ;
struct mm_struct {int user_ns; } ;
struct cred {int user_ns; int gid; int sgid; int egid; int uid; int suid; int euid; int fsgid; int fsuid; } ;
typedef int kuid_t ;
typedef int kgid_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*) ;
 struct cred* FUNC_1 (struct task_struct*) ;
 int VAR_4 ;
 struct cred* FUNC_2 () ;
 scalar_t__ FUNC_3 (struct mm_struct*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,unsigned int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (struct task_struct*,int ) ;
 int FUNC_9 (struct task_struct*,unsigned int) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int ,int ) ;

__attribute__((used)) static int FUNC_12(struct task_struct *VAR_5, unsigned int VAR_6)
{
 const struct cred *VAR_7 = FUNC_2(), *VAR_8;
 struct mm_struct *VAR_9;
 kuid_t VAR_10;
 kgid_t VAR_11;

 if (!(VAR_6 & VAR_1) == !(VAR_6 & VAR_2)) {
  FUNC_0(1, "denying ptrace access check without PTRACE_MODE_*CREDS\n");
  return -VAR_0;
 }
 if (FUNC_8(VAR_5, VAR_4))
  return 0;
 FUNC_6();
 if (VAR_6 & VAR_1) {
  VAR_10 = VAR_7->fsuid;
  VAR_11 = VAR_7->fsgid;
 } else {
  VAR_10 = VAR_7->uid;
  VAR_11 = VAR_7->gid;
 }
 VAR_8 = FUNC_1(VAR_5);
 if (FUNC_11(VAR_10, VAR_8->euid) &&
     FUNC_11(VAR_10, VAR_8->suid) &&
     FUNC_11(VAR_10, VAR_8->uid) &&
     FUNC_4(VAR_11, VAR_8->egid) &&
     FUNC_4(VAR_11, VAR_8->sgid) &&
     FUNC_4(VAR_11, VAR_8->gid))
  goto ok;
 if (FUNC_5(VAR_8->user_ns, VAR_6))
  goto ok;
 FUNC_7();
 return -VAR_0;
ok:
 FUNC_7();
 FUNC_10();
 VAR_9 = VAR_5->mm;
 if (VAR_9 &&
     ((FUNC_3(VAR_9) != VAR_3) &&
      !FUNC_5(VAR_9->user_ns, VAR_6)))
     return -VAR_0;

 return FUNC_9(VAR_5, VAR_6);
}
