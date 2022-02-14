
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct tomoyo_profile {int dummy; } ;
struct tomoyo_policy_namespace {struct tomoyo_profile** profile_ptr; } ;



struct tomoyo_profile *FUNC_0(const struct tomoyo_policy_namespace *VAR_0,
          const u8 VAR_1)
{
 static struct tomoyo_profile VAR_2;
 struct tomoyo_profile *VAR_3 = VAR_0->profile_ptr[VAR_1];

 if (!VAR_3)
  VAR_3 = &VAR_2;
 return VAR_3;
}
