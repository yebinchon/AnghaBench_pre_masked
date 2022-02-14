
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_binprm {int filename; struct cred* cred; } ;
struct cred {int cap_inheritable; int cap_bset; int cap_permitted; } ;
typedef int kuid_t ;


 scalar_t__ FUNC_0 (int ,struct cred*) ;
 scalar_t__ FUNC_1 (int ,struct cred*) ;
 scalar_t__ FUNC_2 (int ,struct cred*) ;
 int FUNC_3 (int ,int ) ;
 struct cred* FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct linux_binprm *VAR_0, bool VAR_1,
       bool *VAR_2, kuid_t VAR_3)
{
 const struct cred *VAR_4 = FUNC_4();
 struct cred *VAR_5 = VAR_0->cred;

 if (!FUNC_5())
  return;





 if (VAR_1 && FUNC_2(VAR_3, VAR_5)) {
  FUNC_6(VAR_0->filename);
  return;
 }





 if (FUNC_0(VAR_3, VAR_5) || FUNC_1(VAR_3, VAR_5)) {

  VAR_5->cap_permitted = FUNC_3(VAR_4->cap_bset,
       VAR_4->cap_inheritable);
 }



 if (FUNC_0(VAR_3, VAR_5))
  *VAR_2 = 1;
}
