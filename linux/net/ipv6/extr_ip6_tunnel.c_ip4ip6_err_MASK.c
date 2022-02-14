
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {TYPE_4__* dev; } ;
struct TYPE_8__ {TYPE_4__* dev; } ;
struct rtable {int rt_flags; TYPE_2__ dst; } ;
struct iphdr {int tos; int saddr; int daddr; } ;
struct inet6_skb_parm {int dummy; } ;
struct flowi4 {int dummy; } ;
typedef scalar_t__ __u32 ;
typedef int __be32 ;
struct TYPE_10__ {scalar_t__ type; } ;
struct TYPE_9__ {TYPE_1__* dev; } ;
struct TYPE_7__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct rtable*) ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct sk_buff*,int,int,int ) ;
 int FUNC_6 (struct sk_buff*,int ,struct inet6_skb_parm*,int*,int*,int*,scalar_t__*,int) ;
 struct iphdr* FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ,int ,TYPE_4__*) ;
 struct rtable* FUNC_9 (int ,struct flowi4*,int *,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_10 (struct rtable*) ;
 int FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_14 (struct sk_buff*,int ) ;
 TYPE_3__* FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*,TYPE_2__*) ;
 int FUNC_18 (struct sk_buff*,scalar_t__) ;
 int FUNC_19 (struct sk_buff*,int) ;
 int FUNC_20 (struct sk_buff*) ;

__attribute__((used)) static int
FUNC_21(struct sk_buff *VAR_8, struct inet6_skb_parm *VAR_9,
    u8 VAR_10, u8 VAR_11, int VAR_12, __be32 VAR_13)
{
 __u32 VAR_14 = FUNC_12(VAR_13);
 const struct iphdr *VAR_15;
 struct sk_buff *VAR_16;
 int VAR_17, VAR_18 = 0;
 u8 VAR_19 = VAR_10;
 u8 VAR_20 = VAR_11;
 struct rtable *VAR_21;
 struct flowi4 VAR_22;

 VAR_17 = FUNC_6(VAR_8, VAR_6, VAR_9, &VAR_19, &VAR_20,
     &VAR_18, &VAR_14, VAR_12);
 if (VAR_17 < 0)
  return VAR_17;

 if (VAR_18 == 0)
  return 0;

 switch (VAR_19) {
 case 129:
  if (VAR_20 != VAR_2)
   return 0;
  VAR_19 = VAR_3;
  VAR_20 = VAR_5;
  break;
 case 128:
  if (VAR_20 != 0)
   return 0;
  VAR_19 = VAR_3;
  VAR_20 = VAR_4;
  break;
 default:
  return 0;
 }

 if (!FUNC_13(VAR_8, VAR_12 + sizeof(struct iphdr)))
  return 0;

 VAR_16 = FUNC_14(VAR_8, VAR_1);
 if (!VAR_16)
  return 0;

 FUNC_16(VAR_16);

 FUNC_19(VAR_16, VAR_12);
 FUNC_20(VAR_16);
 VAR_15 = FUNC_7(VAR_16);


 VAR_21 = FUNC_9(FUNC_2(VAR_8->dev), &VAR_22, ((void*)0), VAR_15->saddr,
       0, 0, 0, VAR_6, FUNC_1(VAR_15->tos), 0);
 if (FUNC_0(VAR_21))
  goto out;

 VAR_16->dev = VAR_21->dst.dev;
 FUNC_10(VAR_21);


 if (VAR_21->rt_flags & VAR_7) {
  VAR_21 = FUNC_9(FUNC_2(VAR_8->dev), &VAR_22, ((void*)0),
        VAR_15->daddr, VAR_15->saddr, 0, 0,
        VAR_6, FUNC_1(VAR_15->tos), 0);
  if (FUNC_0(VAR_21) || VAR_21->dst.dev->type != VAR_0) {
   if (!FUNC_0(VAR_21))
    FUNC_10(VAR_21);
   goto out;
  }
  FUNC_17(VAR_16, &VAR_21->dst);
 } else {
  if (FUNC_8(VAR_16, VAR_15->daddr, VAR_15->saddr, VAR_15->tos,
       VAR_16->dev) ||
      FUNC_15(VAR_16)->dev->type != VAR_0)
   goto out;
 }


 if (VAR_19 == VAR_3 && VAR_20 == VAR_4) {
  if (VAR_14 > FUNC_3(FUNC_15(VAR_16)))
   goto out;

  FUNC_18(VAR_16, VAR_14);
 }

 FUNC_5(VAR_16, VAR_19, VAR_20, FUNC_4(VAR_14));

out:
 FUNC_11(VAR_16);
 return 0;
}
