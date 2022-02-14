
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_action_param {struct ebt_nat_info* targinfo; } ;
struct sk_buff {int dummy; } ;
struct ebt_nat_info {int target; int mac; } ;
struct arphdr {int ar_hln; } ;
typedef int _ah ;
struct TYPE_2__ {scalar_t__ h_proto; int h_source; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int) ;
 struct arphdr* FUNC_4 (struct sk_buff*,int ,int,struct arphdr*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int,int ,int) ;

__attribute__((used)) static unsigned int
FUNC_6(struct sk_buff *VAR_5, const struct xt_action_param *VAR_6)
{
 const struct ebt_nat_info *VAR_7 = VAR_6->targinfo;

 if (FUNC_3(VAR_5, VAR_2 * 2))
  return VAR_0;

 FUNC_1(FUNC_0(VAR_5)->h_source, VAR_7->mac);
 if (!(VAR_7->target & VAR_4) &&
     FUNC_0(VAR_5)->h_proto == FUNC_2(VAR_3)) {
  const struct arphdr *VAR_8;
  struct arphdr VAR_9;

  VAR_8 = FUNC_4(VAR_5, 0, sizeof(VAR_9), &VAR_9);
  if (VAR_8 == ((void*)0))
   return VAR_0;
  if (VAR_8->ar_hln != VAR_2)
   goto out;
  if (FUNC_5(VAR_5, sizeof(VAR_9), VAR_7->mac, VAR_2))
   return VAR_0;
 }
out:
 return VAR_7->target | ~VAR_1;
}
