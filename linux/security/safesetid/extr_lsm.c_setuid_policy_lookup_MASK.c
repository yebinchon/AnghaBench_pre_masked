
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct setuid_ruleset {int dummy; } ;
typedef int kuid_t ;
typedef enum sid_policy_type { ____Placeholder_sid_policy_type } sid_policy_type ;


 int VAR_0 ;
 int FUNC_0 (struct setuid_ruleset*,int ,int ) ;
 struct setuid_ruleset* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_1 ;

__attribute__((used)) static enum sid_policy_type FUNC_4(kuid_t VAR_2, kuid_t VAR_3)
{
 enum sid_policy_type VAR_4 = VAR_0;
 struct setuid_ruleset *VAR_5;

 FUNC_2();
 VAR_5 = FUNC_1(VAR_1);
 if (VAR_5)
  VAR_4 = FUNC_0(VAR_5, VAR_2, VAR_3);
 FUNC_3();
 return VAR_4;
}
