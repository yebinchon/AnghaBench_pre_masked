
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct tomoyo_profile {size_t* config; size_t default_config; } ;
struct tomoyo_policy_namespace {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t* VAR_3 ;
 int VAR_4 ;
 struct tomoyo_profile* FUNC_0 (struct tomoyo_policy_namespace const*,size_t const) ;

int FUNC_1(const struct tomoyo_policy_namespace *VAR_5, const u8 VAR_6,
      const u8 VAR_7)
{
 u8 VAR_8;
 struct tomoyo_profile *VAR_9;

 if (!VAR_4)
  return VAR_0;
 VAR_9 = FUNC_0(VAR_5, VAR_6);
 VAR_8 = VAR_9->config[VAR_7];
 if (VAR_8 == VAR_1)
  VAR_8 = VAR_9->config[VAR_3[VAR_7]
     + VAR_2];
 if (VAR_8 == VAR_1)
  VAR_8 = VAR_9->default_config;
 return VAR_8 & 3;
}
