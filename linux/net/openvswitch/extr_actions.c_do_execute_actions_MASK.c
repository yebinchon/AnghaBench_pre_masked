
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sw_flow_key {int dummy; } ;
struct sk_buff {scalar_t__ len; } ;
struct ovs_action_trunc {scalar_t__ max_len; } ;
struct nshhdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct datapath {int dummy; } ;
struct TYPE_2__ {scalar_t__ cutlen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct datapath*,struct sk_buff*,struct sw_flow_key*,struct nlattr const*,int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct datapath*,struct sk_buff*,int,struct sw_flow_key*) ;
 int FUNC_4 (struct datapath*,struct sk_buff*,struct sw_flow_key*,struct nlattr const*,int) ;
 int FUNC_5 (struct sk_buff*,struct sw_flow_key*,struct nlattr const*) ;
 int FUNC_6 (struct sk_buff*,struct sw_flow_key*,struct ovs_action_trunc*) ;
 int FUNC_7 (struct datapath*,struct sk_buff*,struct sw_flow_key*,struct nlattr const*,int) ;
 int FUNC_8 (struct sk_buff*,struct sw_flow_key*,struct ovs_action_trunc*) ;
 int FUNC_9 (struct sw_flow_key*) ;
 int FUNC_10 (struct sk_buff*) ;
 struct ovs_action_trunc* FUNC_11 (struct nlattr const*) ;
 int FUNC_12 (struct nlattr const*) ;
 int FUNC_13 (struct nlattr const*) ;
 int FUNC_14 (struct nlattr const*,int) ;
 struct nlattr* FUNC_15 (struct nlattr const*,int*) ;
 int FUNC_16 (struct nlattr const*) ;
 int FUNC_17 (struct ovs_action_trunc*,struct nshhdr*,int) ;
 int FUNC_18 (struct datapath*,struct sk_buff*,struct sw_flow_key*,struct nlattr const*,struct nlattr const*,int,scalar_t__) ;
 int FUNC_19 (struct sk_buff*,struct sw_flow_key*) ;
 int FUNC_20 (int ,struct sk_buff*,struct sw_flow_key*,struct ovs_action_trunc*) ;
 int FUNC_21 (struct datapath*) ;
 int FUNC_22 (struct sk_buff*,struct sw_flow_key*) ;
 int FUNC_23 (struct datapath*,struct sk_buff*,struct sw_flow_key*,int) ;
 int FUNC_24 (struct sk_buff*,struct sw_flow_key*) ;
 int FUNC_25 (struct sk_buff*,struct sw_flow_key*,int ) ;
 int FUNC_26 (struct sk_buff*,struct sw_flow_key*) ;
 int FUNC_27 (struct sk_buff*,struct sw_flow_key*) ;
 int FUNC_28 (struct sk_buff*,struct sw_flow_key*,struct ovs_action_trunc*) ;
 int FUNC_29 (struct sk_buff*,struct sw_flow_key*,struct ovs_action_trunc*) ;
 int FUNC_30 (struct sk_buff*,struct sw_flow_key*,struct nshhdr*) ;
 int FUNC_31 (struct sk_buff*,struct sw_flow_key*,struct ovs_action_trunc*) ;
 int FUNC_32 (struct datapath*,struct sk_buff*,struct sw_flow_key*,struct nlattr const*,int) ;
 struct sk_buff* FUNC_33 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_34 (int) ;

__attribute__((used)) static int FUNC_35(struct datapath *VAR_3, struct sk_buff *VAR_4,
         struct sw_flow_key *VAR_5,
         const struct nlattr *VAR_6, int VAR_7)
{
 const struct nlattr *VAR_8;
 int VAR_9;

 for (VAR_8 = VAR_6, VAR_9 = VAR_7; VAR_9 > 0;
      VAR_8 = FUNC_15(VAR_8, &VAR_9)) {
  int VAR_10 = 0;

  switch (FUNC_16(VAR_8)) {
  case 143: {
   int VAR_11 = FUNC_13(VAR_8);
   struct sk_buff *VAR_12;





   if (FUNC_14(VAR_8, VAR_9)) {
    FUNC_3(VAR_3, VAR_4, VAR_11, VAR_5);


    return 0;
   }

   VAR_12 = FUNC_33(VAR_4, VAR_1);
   if (VAR_12)
    FUNC_3(VAR_3, VAR_12, VAR_11, VAR_5);
   FUNC_0(VAR_4)->cutlen = 0;
   break;
  }

  case 129: {
   struct ovs_action_trunc *VAR_13 = FUNC_11(VAR_8);

   if (VAR_4->len > VAR_13->max_len)
    FUNC_0(VAR_4)->cutlen = VAR_4->len - VAR_13->max_len;
   break;
  }

  case 128:
   FUNC_18(VAR_3, VAR_4, VAR_5, VAR_8, VAR_6,
           VAR_7, FUNC_0(VAR_4)->cutlen);
   FUNC_0(VAR_4)->cutlen = 0;
   break;

  case 145:
   FUNC_5(VAR_4, VAR_5, VAR_8);
   break;

  case 137:
   VAR_10 = FUNC_29(VAR_4, VAR_5, FUNC_11(VAR_8));
   break;

  case 141:
   VAR_10 = FUNC_25(VAR_4, VAR_5, FUNC_12(VAR_8));
   break;

  case 135:
   VAR_10 = FUNC_31(VAR_4, VAR_5, FUNC_11(VAR_8));
   break;

  case 139:
   VAR_10 = FUNC_27(VAR_4, VAR_5);
   break;

  case 134: {
   bool VAR_14 = FUNC_14(VAR_8, VAR_9);

   VAR_10 = FUNC_7(VAR_3, VAR_4, VAR_5, VAR_8, VAR_14);
   if (VAR_14) {




    return VAR_10;
   }
   break;
  }

  case 132:
   VAR_10 = FUNC_8(VAR_4, VAR_5, FUNC_11(VAR_8));
   break;

  case 131:
  case 130:
   VAR_10 = FUNC_6(VAR_4, VAR_5, FUNC_11(VAR_8));
   break;

  case 133: {
   bool VAR_15 = FUNC_14(VAR_8, VAR_9);

   VAR_10 = FUNC_32(VAR_3, VAR_4, VAR_5, VAR_8, VAR_15);
   if (VAR_15)
    return VAR_10;

   break;
  }

  case 147:
   if (!FUNC_9(VAR_5)) {
    VAR_10 = FUNC_22(VAR_4, VAR_5);
    if (VAR_10)
     return VAR_10;
   }

   VAR_10 = FUNC_20(FUNC_21(VAR_3), VAR_4, VAR_5,
          FUNC_11(VAR_8));


   if (VAR_10)
    return VAR_10 == -VAR_0 ? 0 : VAR_10;
   break;

  case 146:
   VAR_10 = FUNC_19(VAR_4, VAR_5);
   break;

  case 138:
   VAR_10 = FUNC_28(VAR_4, VAR_5, FUNC_11(VAR_8));
   break;

  case 142:
   VAR_10 = FUNC_24(VAR_4, VAR_5);
   break;

  case 136: {
   u8 VAR_16[VAR_2];
   struct nshhdr *VAR_17 = (struct nshhdr *)VAR_16;

   VAR_10 = FUNC_17(FUNC_11(VAR_8), VAR_17,
        VAR_2);
   if (FUNC_34(VAR_10))
    break;
   VAR_10 = FUNC_30(VAR_4, VAR_5, VAR_17);
   break;
  }

  case 140:
   VAR_10 = FUNC_26(VAR_4, VAR_5);
   break;

  case 144:
   if (FUNC_23(VAR_3, VAR_4, VAR_5, FUNC_13(VAR_8))) {
    FUNC_2(VAR_4);
    return 0;
   }
   break;

  case 148: {
   bool VAR_18 = FUNC_14(VAR_8, VAR_9);

   VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_8, VAR_18);
   if (VAR_18)
    return VAR_10;

   break;
  }

  case 149: {
   bool VAR_19 = FUNC_14(VAR_8, VAR_9);

   VAR_10 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_8, VAR_19);
   if (VAR_19)
    return VAR_10;

   break;
  }
  }

  if (FUNC_34(VAR_10)) {
   FUNC_10(VAR_4);
   return VAR_10;
  }
 }

 FUNC_2(VAR_4);
 return 0;
}
