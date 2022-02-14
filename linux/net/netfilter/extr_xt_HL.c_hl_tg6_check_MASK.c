
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tgchk_param {struct ip6t_HL_info* targinfo; } ;
struct ip6t_HL_info {scalar_t__ mode; scalar_t__ hop_limit; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(const struct xt_tgchk_param *VAR_3)
{
 const struct ip6t_HL_info *VAR_4 = VAR_3->targinfo;

 if (VAR_4->mode > VAR_1)
  return -VAR_0;
 if (VAR_4->mode != VAR_2 && VAR_4->hop_limit == 0)
  return -VAR_0;
 return 0;
}
