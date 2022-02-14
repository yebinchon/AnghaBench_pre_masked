
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct nlattr {int dummy; } ;
struct devlink_sb {scalar_t__ ingress_tc_count; scalar_t__ egress_tc_count; } ;
typedef enum devlink_sb_pool_type { ____Placeholder_devlink_sb_pool_type } devlink_sb_pool_type ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct nlattr*) ;

__attribute__((used)) static int
FUNC_1(struct devlink_sb *VAR_4,
       struct nlattr **VAR_5,
       enum devlink_sb_pool_type VAR_6,
       u16 *VAR_7)
{
 u16 VAR_8;

 if (!VAR_5[VAR_0])
  return -VAR_3;

 VAR_8 = FUNC_0(VAR_5[VAR_0]);
 if (VAR_6 == VAR_2 &&
     VAR_8 >= VAR_4->ingress_tc_count)
  return -VAR_3;
 if (VAR_6 == VAR_1 &&
     VAR_8 >= VAR_4->egress_tc_count)
  return -VAR_3;
 *VAR_7 = VAR_8;
 return 0;
}
