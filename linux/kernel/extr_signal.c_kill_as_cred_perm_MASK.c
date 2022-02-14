
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct cred {int uid; int suid; int euid; } ;


 struct cred* FUNC_0 (struct task_struct*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static inline bool FUNC_2(const struct cred *VAR_0,
         struct task_struct *VAR_1)
{
 const struct cred *VAR_2 = FUNC_0(VAR_1);

 return FUNC_1(VAR_0->euid, VAR_2->suid) ||
        FUNC_1(VAR_0->euid, VAR_2->uid) ||
        FUNC_1(VAR_0->uid, VAR_2->suid) ||
        FUNC_1(VAR_0->uid, VAR_2->uid);
}
