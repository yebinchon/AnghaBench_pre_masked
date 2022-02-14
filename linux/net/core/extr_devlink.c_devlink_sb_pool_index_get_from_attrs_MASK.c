
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct nlattr {int dummy; } ;
struct devlink_sb {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct devlink_sb*) ;
 scalar_t__ FUNC_1 (struct nlattr*) ;

__attribute__((used)) static int FUNC_2(struct devlink_sb *VAR_2,
      struct nlattr **VAR_3,
      u16 *VAR_4)
{
 u16 VAR_5;

 if (!VAR_3[VAR_0])
  return -VAR_1;

 VAR_5 = FUNC_1(VAR_3[VAR_0]);
 if (VAR_5 >= FUNC_0(VAR_2))
  return -VAR_1;
 *VAR_4 = VAR_5;
 return 0;
}
