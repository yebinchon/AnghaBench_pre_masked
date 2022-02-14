
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct cred {int user_ns; int gid; int sgid; int egid; int uid; int suid; int euid; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cred* FUNC_0 (struct task_struct*) ;
 struct task_struct* VAR_2 ;
 struct cred* FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct cred const*,struct cred const*,unsigned int) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct task_struct *VAR_3,
        unsigned int VAR_4)
{
 const struct cred *VAR_5 = FUNC_1(), *VAR_6;
 bool VAR_7;

 if (VAR_2 == VAR_3)
  return 0;

 VAR_6 = FUNC_0(VAR_3);
 VAR_7 = (FUNC_5(VAR_5->uid, VAR_6->euid) &&
      FUNC_5(VAR_5->uid, VAR_6->suid) &&
      FUNC_5(VAR_5->uid, VAR_6->uid) &&
      FUNC_2(VAR_5->gid, VAR_6->egid) &&
      FUNC_2(VAR_5->gid, VAR_6->sgid) &&
      FUNC_2(VAR_5->gid, VAR_6->gid));
 if (!VAR_7 && !FUNC_3(VAR_6->user_ns, VAR_0))
  return -VAR_1;

 return FUNC_4(VAR_5, VAR_6, VAR_4);
}
