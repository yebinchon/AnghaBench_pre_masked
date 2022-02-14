
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tgchk_param {struct ipt_TTL_info* targinfo; } ;
struct ipt_TTL_info {scalar_t__ mode; scalar_t__ ttl; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(const struct xt_tgchk_param *VAR_3)
{
 const struct ipt_TTL_info *VAR_4 = VAR_3->targinfo;

 if (VAR_4->mode > VAR_1)
  return -VAR_0;
 if (VAR_4->mode != VAR_2 && VAR_4->ttl == 0)
  return -VAR_0;
 return 0;
}
