
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {int dummy; } ;
struct aa_ns {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct user_namespace* FUNC_1 () ;
 int FUNC_2 (struct user_namespace*,int ) ;
 scalar_t__ FUNC_3 (struct aa_ns*) ;

bool FUNC_4(struct aa_ns *VAR_2)
{
 struct user_namespace *VAR_3 = FUNC_1();
 bool VAR_4 = FUNC_2(VAR_3, VAR_0);

 FUNC_0("cap_mac_admin? %d\n", VAR_4);
 FUNC_0("policy locked? %d\n", VAR_1);

 return FUNC_3(VAR_2) && VAR_4 && !VAR_1;
}
