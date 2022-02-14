
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct tomoyo_profile {scalar_t__* pref; size_t* config; size_t default_config; } ;
struct tomoyo_policy_namespace {int dummy; } ;
struct tomoyo_acl_info {TYPE_1__* cond; } ;
struct TYPE_2__ {scalar_t__ grant_log; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 struct tomoyo_profile* FUNC_0 (struct tomoyo_policy_namespace const*,size_t const) ;

__attribute__((used)) static bool FUNC_1(const struct tomoyo_policy_namespace *VAR_10,
        const u8 VAR_11, const u8 VAR_12,
        const struct tomoyo_acl_info *VAR_13,
        const bool VAR_14)
{
 u8 VAR_15;
 const u8 VAR_16 = VAR_7[VAR_12] +
  VAR_5;
 struct tomoyo_profile *VAR_17;

 if (!VAR_9)
  return 0;
 VAR_17 = FUNC_0(VAR_10, VAR_11);
 if (VAR_8 >= VAR_17->pref[VAR_6])
  return 0;
 if (VAR_14 && VAR_13 && VAR_13->cond &&
     VAR_13->cond->grant_log != VAR_3)
  return VAR_13->cond->grant_log == VAR_4;
 VAR_15 = VAR_17->config[VAR_12];
 if (VAR_15 == VAR_0)
  VAR_15 = VAR_17->config[VAR_16];
 if (VAR_15 == VAR_0)
  VAR_15 = VAR_17->default_config;
 if (VAR_14)
  return VAR_15 & VAR_1;
 return VAR_15 & VAR_2;
}
