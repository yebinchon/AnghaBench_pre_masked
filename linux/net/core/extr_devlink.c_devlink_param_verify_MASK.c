
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink_param {scalar_t__ generic; int supported_cmodes; int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct devlink_param const*) ;
 int FUNC_1 (struct devlink_param const*) ;

__attribute__((used)) static int FUNC_2(const struct devlink_param *VAR_1)
{
 if (!VAR_1 || !VAR_1->name || !VAR_1->supported_cmodes)
  return -VAR_0;
 if (VAR_1->generic)
  return FUNC_1(VAR_1);
 else
  return FUNC_0(VAR_1);
}
