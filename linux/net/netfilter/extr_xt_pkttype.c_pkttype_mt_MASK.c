
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int8_t ;
struct xt_pkttype_info {scalar_t__ pkttype; int invert; } ;
struct xt_action_param {struct xt_pkttype_info* matchinfo; } ;
struct sk_buff {scalar_t__ pkt_type; } ;
struct TYPE_2__ {int daddr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_0 (struct sk_buff const*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct xt_action_param*) ;

__attribute__((used)) static bool
FUNC_3(const struct sk_buff *VAR_5, struct xt_action_param *VAR_6)
{
 const struct xt_pkttype_info *VAR_7 = VAR_6->matchinfo;
 u_int8_t VAR_8;

 if (VAR_5->pkt_type != VAR_3)
  VAR_8 = VAR_5->pkt_type;
 else if (FUNC_2(VAR_6) == VAR_0 &&
     FUNC_1(FUNC_0(VAR_5)->daddr))
  VAR_8 = VAR_4;
 else if (FUNC_2(VAR_6) == VAR_1)
  VAR_8 = VAR_4;
 else
  VAR_8 = VAR_2;

 return (VAR_8 == VAR_7->pkttype) ^ VAR_7->invert;
}
