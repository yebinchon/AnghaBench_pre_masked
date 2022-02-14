
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct flow_keys {int dummy; } ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,struct flow_keys*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,struct flow_keys*) ;
 int FUNC_6 (struct sk_buff*,struct flow_keys*) ;
 int FUNC_7 (struct sk_buff*,struct flow_keys*) ;
 int FUNC_8 (struct sk_buff*,struct flow_keys*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,struct flow_keys*) ;
 int FUNC_11 (struct sk_buff*,struct flow_keys*) ;
 int FUNC_12 (struct sk_buff*,struct flow_keys*) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*,struct flow_keys*) ;
 int FUNC_18 (struct sk_buff*) ;

__attribute__((used)) static u32 FUNC_19(struct sk_buff *VAR_0, int VAR_1, struct flow_keys *VAR_2)
{
 switch (VAR_1) {
 case 129:
  return FUNC_17(VAR_0, VAR_2);
 case 145:
  return FUNC_1(VAR_0, VAR_2);
 case 136:
  return FUNC_10(VAR_0, VAR_2);
 case 134:
  return FUNC_12(VAR_0, VAR_2);
 case 135:
  return FUNC_11(VAR_0, VAR_2);
 case 144:
  return FUNC_2(VAR_0);
 case 137:
  return FUNC_9(VAR_0);
 case 143:
  return FUNC_3(VAR_0);
 case 142:
  return FUNC_4(VAR_0);
 case 138:
  return FUNC_8(VAR_0, VAR_2);
 case 141:
  return FUNC_5(VAR_0, VAR_2);
 case 139:
  return FUNC_7(VAR_0, VAR_2);
 case 140:
  return FUNC_6(VAR_0, VAR_2);
 case 133:
  return FUNC_13(VAR_0);
 case 130:
  return FUNC_16(VAR_0);
 case 131:
  return FUNC_15(VAR_0);
 case 128:
  return FUNC_18(VAR_0);
 case 132:
  return FUNC_14(VAR_0);
 default:
  FUNC_0(1);
  return 0;
 }
}
