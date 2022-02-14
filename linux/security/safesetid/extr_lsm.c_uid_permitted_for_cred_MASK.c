
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cred {int suid; int euid; int uid; } ;
typedef int kuid_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static bool FUNC_4(const struct cred *VAR_1, kuid_t VAR_2)
{
 bool VAR_3;


 if (FUNC_3(VAR_2, VAR_1->uid) || FUNC_3(VAR_2, VAR_1->euid) ||
     FUNC_3(VAR_2, VAR_1->suid))
  return 1;





 VAR_3 =
     FUNC_2(VAR_1->uid, VAR_2) != VAR_0;
 if (!VAR_3) {
  FUNC_1("UID transition ((%d,%d,%d) -> %d) blocked\n",
   FUNC_0(VAR_1->uid), FUNC_0(VAR_1->euid),
   FUNC_0(VAR_1->suid), FUNC_0(VAR_2));
 }
 return VAR_3;
}
