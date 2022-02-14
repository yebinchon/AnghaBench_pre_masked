
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct nlattr {int dummy; } ;
typedef enum devlink_sb_pool_type { ____Placeholder_devlink_sb_pool_type } devlink_sb_pool_type ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct nlattr*) ;

__attribute__((used)) static int
FUNC_1(struct nlattr **VAR_4,
        enum devlink_sb_pool_type *VAR_5)
{
 u8 VAR_6;

 if (!VAR_4[VAR_0])
  return -VAR_3;

 VAR_6 = FUNC_0(VAR_4[VAR_0]);
 if (VAR_6 != VAR_2 &&
     VAR_6 != VAR_1)
  return -VAR_3;
 *VAR_5 = VAR_6;
 return 0;
}
