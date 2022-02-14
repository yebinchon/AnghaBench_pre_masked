
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct xt_action_param {struct ipt_ttl_info* matchinfo; } ;
struct sk_buff {int dummy; } ;
struct ipt_ttl_info {int mode; int const ttl; } ;
struct TYPE_2__ {int ttl; } ;






 TYPE_1__* FUNC_0 (struct sk_buff const*) ;

__attribute__((used)) static bool FUNC_1(const struct sk_buff *VAR_0, struct xt_action_param *VAR_1)
{
 const struct ipt_ttl_info *VAR_2 = VAR_1->matchinfo;
 const u8 VAR_3 = FUNC_0(VAR_0)->ttl;

 switch (VAR_2->mode) {
 case 131:
  return VAR_3 == VAR_2->ttl;
 case 128:
  return VAR_3 != VAR_2->ttl;
 case 129:
  return VAR_3 < VAR_2->ttl;
 case 130:
  return VAR_3 > VAR_2->ttl;
 }

 return 0;
}
