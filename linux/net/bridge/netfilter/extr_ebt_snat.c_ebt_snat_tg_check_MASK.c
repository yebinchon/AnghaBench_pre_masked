
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tgchk_param {struct ebt_nat_info* targinfo; } ;
struct ebt_nat_info {int target; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const struct xt_tgchk_param *VAR_5)
{
 const struct ebt_nat_info *VAR_6 = VAR_5->targinfo;
 int VAR_7;

 VAR_7 = VAR_6->target | ~VAR_2;
 if (VAR_0 && VAR_7 == VAR_1)
  return -VAR_3;

 if (FUNC_0(VAR_7))
  return -VAR_3;
 VAR_7 = VAR_6->target | VAR_2;
 if ((VAR_7 & ~VAR_4) != ~VAR_4)
  return -VAR_3;
 return 0;
}
