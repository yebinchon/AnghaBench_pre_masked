
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_action_param {struct ipt_ECN_info* targinfo; } ;
struct sk_buff {int dummy; } ;
struct ipt_ECN_info {int operation; } ;
struct TYPE_2__ {scalar_t__ protocol; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct ipt_ECN_info const*) ;
 int FUNC_2 (struct sk_buff*,struct ipt_ECN_info const*) ;

__attribute__((used)) static unsigned int
FUNC_3(struct sk_buff *VAR_6, const struct xt_action_param *VAR_7)
{
 const struct ipt_ECN_info *VAR_8 = VAR_7->targinfo;

 if (VAR_8->operation & VAR_3)
  if (!FUNC_1(VAR_6, VAR_8))
   return VAR_4;

 if (VAR_8->operation & (VAR_2 | VAR_1) &&
     FUNC_0(VAR_6)->protocol == VAR_0)
  if (!FUNC_2(VAR_6, VAR_8))
   return VAR_4;

 return VAR_5;
}
