
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucred {scalar_t__ pid; int gid; int uid; } ;
struct cred {int user_ns; int sgid; int egid; int gid; int suid; int euid; int uid; } ;
typedef int kuid_t ;
typedef int kgid_t ;
struct TYPE_2__ {int user_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct cred* FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 TYPE_1__* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static __inline__ int FUNC_10(struct ucred *VAR_6)
{
 const struct cred *VAR_7 = FUNC_0();
 kuid_t VAR_8 = FUNC_4(VAR_7->user_ns, VAR_6->uid);
 kgid_t VAR_9 = FUNC_3(VAR_7->user_ns, VAR_6->gid);

 if (!FUNC_9(VAR_8) || !FUNC_2(VAR_9))
  return -VAR_3;

 if ((VAR_6->pid == FUNC_7(VAR_5) ||
      FUNC_5(FUNC_6(VAR_5)->user_ns, VAR_2)) &&
     ((FUNC_8(VAR_8, VAR_7->uid) || FUNC_8(VAR_8, VAR_7->euid) ||
       FUNC_8(VAR_8, VAR_7->suid)) || FUNC_5(VAR_7->user_ns, VAR_1)) &&
     ((FUNC_1(VAR_9, VAR_7->gid) || FUNC_1(VAR_9, VAR_7->egid) ||
       FUNC_1(VAR_9, VAR_7->sgid)) || FUNC_5(VAR_7->user_ns, VAR_0))) {
        return 0;
 }
 return -VAR_4;
}
