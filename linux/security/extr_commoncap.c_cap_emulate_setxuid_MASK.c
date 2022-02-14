
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cred {int cap_permitted; int cap_effective; int euid; int cap_ambient; int suid; int uid; int user_ns; } ;
typedef int kuid_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static inline void FUNC_4(struct cred *VAR_1, const struct cred *VAR_2)
{
 kuid_t VAR_3 = FUNC_2(VAR_2->user_ns, 0);

 if ((FUNC_3(VAR_2->uid, VAR_3) ||
      FUNC_3(VAR_2->euid, VAR_3) ||
      FUNC_3(VAR_2->suid, VAR_3)) &&
     (!FUNC_3(VAR_1->uid, VAR_3) &&
      !FUNC_3(VAR_1->euid, VAR_3) &&
      !FUNC_3(VAR_1->suid, VAR_3))) {
  if (!FUNC_1(VAR_0)) {
   FUNC_0(VAR_1->cap_permitted);
   FUNC_0(VAR_1->cap_effective);
  }






  FUNC_0(VAR_1->cap_ambient);
 }
 if (FUNC_3(VAR_2->euid, VAR_3) && !FUNC_3(VAR_1->euid, VAR_3))
  FUNC_0(VAR_1->cap_effective);
 if (!FUNC_3(VAR_2->euid, VAR_3) && FUNC_3(VAR_1->euid, VAR_3))
  VAR_1->cap_effective = VAR_1->cap_permitted;
}
