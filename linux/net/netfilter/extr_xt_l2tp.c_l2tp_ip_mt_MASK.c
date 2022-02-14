
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union l2tp_val {scalar_t__ val32; } ;
typedef scalar_t__ u16 ;
struct xt_l2tp_info {int dummy; } ;
struct xt_action_param {struct xt_l2tp_info* matchinfo; } ;
struct sk_buff {int dummy; } ;
struct l2tp_data {int version; int type; void* sid; void* tid; int member_0; } ;
typedef int lhbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xt_l2tp_info const*,struct l2tp_data*) ;
 void* FUNC_1 (scalar_t__) ;
 union l2tp_val* FUNC_2 (struct sk_buff const*,scalar_t__,int,union l2tp_val*) ;

__attribute__((used)) static bool FUNC_3(const struct sk_buff *VAR_2, struct xt_action_param *VAR_3, u16 VAR_4)
{
 const struct xt_l2tp_info *VAR_5 = VAR_3->matchinfo;
 union l2tp_val *VAR_6;
 union l2tp_val VAR_7;
 struct l2tp_data VAR_8 = { 0, };


 VAR_6 = FUNC_2(VAR_2, VAR_4, sizeof(VAR_7), &VAR_7);
 if (VAR_6 == ((void*)0))
  return 0;
 if (VAR_6->val32 == 0) {



  VAR_8.type = VAR_0;
  VAR_6 = FUNC_2(VAR_2, VAR_4 + 8, sizeof(VAR_7),
     &VAR_7);
  if (VAR_6 == ((void*)0))
   return 0;
  VAR_8.tid = FUNC_1(VAR_6->val32);
 } else {
  VAR_8.sid = FUNC_1(VAR_6->val32);
  VAR_8.type = VAR_1;
 }

 VAR_8.version = 3;

 return FUNC_0(VAR_5, &VAR_8);
}
