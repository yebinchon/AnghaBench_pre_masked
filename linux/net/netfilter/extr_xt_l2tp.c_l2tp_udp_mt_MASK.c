
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union l2tp_val {int * val16; int val32; } ;
typedef int u8 ;
typedef void* u32 ;
typedef int u16 ;
struct xt_l2tp_info {int dummy; } ;
struct xt_action_param {scalar_t__ fragoff; struct xt_l2tp_info* matchinfo; } ;
struct udphdr {int dummy; } ;
struct sk_buff {int dummy; } ;
struct l2tp_data {scalar_t__ type; int version; void* sid; void* tid; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct xt_l2tp_info const*,struct l2tp_data*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 union l2tp_val* FUNC_3 (struct sk_buff const*,int,int,union l2tp_val*) ;

__attribute__((used)) static bool FUNC_4(const struct sk_buff *VAR_5, struct xt_action_param *VAR_6, u16 VAR_7)
{
 const struct xt_l2tp_info *VAR_8 = VAR_6->matchinfo;
 int VAR_9 = sizeof(struct udphdr);
 int VAR_10 = VAR_7 + VAR_9;
 union l2tp_val *VAR_11;
 union l2tp_val VAR_12;
 u16 VAR_13;
 struct l2tp_data VAR_14 = { 0, };

 if (VAR_6->fragoff != 0)
  return 0;




 VAR_11 = FUNC_3(VAR_5, VAR_10, 2, &VAR_12);
 if (VAR_11 == ((void*)0))
  return 0;

 VAR_13 = FUNC_2(VAR_11->val16[0]);
 if (VAR_13 & VAR_1)
  VAR_14.type = VAR_3;
 else
  VAR_14.type = VAR_4;
 VAR_14.version = (u8) VAR_13 & VAR_2;







 if (VAR_14.version == 3) {
  VAR_11 = FUNC_3(VAR_5, VAR_10 + 4, 4, &VAR_12);
  if (VAR_11 == ((void*)0))
   return 0;
  if (VAR_14.type == VAR_3)
   VAR_14.tid = FUNC_1(VAR_11->val32);
  else
   VAR_14.sid = FUNC_1(VAR_11->val32);
 } else if (VAR_14.version == 2) {
  if (VAR_13 & VAR_0)
   VAR_10 += 2;
  VAR_11 = FUNC_3(VAR_5, VAR_10 + 2, 4, &VAR_12);
  if (VAR_11 == ((void*)0))
   return 0;
  VAR_14.tid = (u32) FUNC_2(VAR_11->val16[0]);
  VAR_14.sid = (u32) FUNC_2(VAR_11->val16[1]);
 } else
  return 0;

 return FUNC_0(VAR_8, &VAR_14);
}
