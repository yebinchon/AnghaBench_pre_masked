
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ipv6hdr {int saddr; int daddr; } ;
struct inet6_protocol {int flags; int handler; } ;
struct inet6_dev {int dummy; } ;
struct TYPE_2__ {unsigned int nhoff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct net*,struct inet6_dev*,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 struct net_device* FUNC_4 (struct net*,int) ;
 int FUNC_5 (struct sk_buff*,int ,int ,unsigned int) ;
 int * VAR_8 ;
 int FUNC_6 (struct sk_buff*) ;
 struct inet6_dev* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (struct net_device*,int *,int *) ;
 struct ipv6hdr* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*,int,int ) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*,int ) ;
 int FUNC_15 (struct sk_buff*,int) ;
 struct inet6_protocol* FUNC_16 (int ) ;
 int FUNC_17 (struct sk_buff*) ;
 int* FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (struct sk_buff*,int*,int ) ;
 int FUNC_21 (struct sk_buff*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_22 (int *,int ,struct sk_buff*) ;

void FUNC_23(struct net *VAR_11, struct sk_buff *VAR_12, int VAR_13,
         bool VAR_14)
{
 const struct inet6_protocol *VAR_15;
 struct inet6_dev *VAR_16;
 unsigned int VAR_17;
 bool VAR_18;





resubmit:
 VAR_16 = FUNC_7(FUNC_17(VAR_12));
 VAR_17 = FUNC_1(VAR_12)->nhoff;
 if (!VAR_14) {
  if (!FUNC_14(VAR_12, FUNC_21(VAR_12)))
   goto discard;
  VAR_13 = FUNC_18(VAR_12)[VAR_17];
 }

resubmit_final:
 VAR_18 = FUNC_15(VAR_12, VAR_13);
 VAR_15 = FUNC_16(VAR_8[VAR_13]);
 if (VAR_15) {
  int VAR_19;

  if (VAR_14) {
   if (!(VAR_15->flags & VAR_2)) {





    goto discard;
   }
  } else if (VAR_15->flags & VAR_2) {
   const struct ipv6hdr *VAR_20;
   int VAR_21 = FUNC_6(VAR_12);
   struct net_device *VAR_22;


   VAR_14 = 1;




   FUNC_13(VAR_12);

   FUNC_20(VAR_12, FUNC_18(VAR_12),
        FUNC_19(VAR_12));
   VAR_20 = FUNC_10(VAR_12);


   if (VAR_21) {
    VAR_22 = FUNC_4(VAR_11, VAR_21);
    if (!VAR_22)
     goto discard;
   } else {
    VAR_22 = VAR_12->dev;
   }

   if (FUNC_8(&VAR_20->daddr) &&
       !FUNC_9(VAR_22, &VAR_20->daddr,
       &VAR_20->saddr) &&
       !FUNC_11(VAR_12, VAR_13, FUNC_19(VAR_12)))
    goto discard;
  }
  if (!(VAR_15->flags & VAR_3) &&
      !FUNC_22(((void*)0), VAR_7, VAR_12))
   goto discard;

  VAR_19 = FUNC_0(VAR_15->handler, VAR_9, VAR_10,
          VAR_12);
  if (VAR_19 > 0) {
   if (VAR_15->flags & VAR_2) {





    VAR_13 = VAR_19;
    goto resubmit_final;
   } else {
    goto resubmit;
   }
  } else if (VAR_19 == 0) {
   FUNC_2(VAR_11, VAR_16, VAR_4);
  }
 } else {
  if (!VAR_18) {
   if (FUNC_22(((void*)0), VAR_7, VAR_12)) {
    FUNC_2(VAR_11, VAR_16,
      VAR_6);
    FUNC_5(VAR_12, VAR_0,
         VAR_1, VAR_17);
   }
   FUNC_12(VAR_12);
  } else {
   FUNC_2(VAR_11, VAR_16, VAR_4);
   FUNC_3(VAR_12);
  }
 }
 return;

discard:
 FUNC_2(VAR_11, VAR_16, VAR_5);
 FUNC_12(VAR_12);
}
