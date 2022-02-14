
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ dev; } ;
struct TYPE_3__ {scalar_t__ dev; } ;
struct rt6_info {TYPE_1__ dst; } ;
struct ipv6hdr {int dummy; } ;
struct inet6_skb_parm {int dummy; } ;
typedef int __u32 ;
typedef int __be32 ;
struct TYPE_4__ {int saddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_2 (struct rt6_info*) ;
 int FUNC_3 (struct sk_buff*,int ,struct inet6_skb_parm*,int *,int *,int*,int *,int) ;
 TYPE_2__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int) ;
 struct rt6_info* FUNC_8 (int ,int *,int *,int ,struct sk_buff*,int ) ;
 struct sk_buff* FUNC_9 (struct sk_buff*,int ) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (struct sk_buff*) ;

__attribute__((used)) static int
FUNC_13(struct sk_buff *VAR_2, struct inet6_skb_parm *VAR_3,
    u8 VAR_4, u8 VAR_5, int VAR_6, __be32 VAR_7)
{
 __u32 VAR_8 = FUNC_6(VAR_7);
 int VAR_9, VAR_10 = 0;
 u8 VAR_11 = VAR_4;
 u8 VAR_12 = VAR_5;

 VAR_9 = FUNC_3(VAR_2, VAR_1, VAR_3, &VAR_11, &VAR_12,
     &VAR_10, &VAR_8, VAR_6);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_10 && FUNC_7(VAR_2, VAR_6 + sizeof(struct ipv6hdr))) {
  struct rt6_info *VAR_13;
  struct sk_buff *VAR_14 = FUNC_9(VAR_2, VAR_0);

  if (!VAR_14)
   return 0;

  FUNC_10(VAR_14);
  FUNC_11(VAR_14, VAR_6);
  FUNC_12(VAR_14);


  VAR_13 = FUNC_8(FUNC_0(VAR_2->dev), &FUNC_4(VAR_14)->saddr,
    ((void*)0), 0, VAR_14, 0);

  if (VAR_13 && VAR_13->dst.dev)
   VAR_14->dev = VAR_13->dst.dev;

  FUNC_1(VAR_14, VAR_11, VAR_12, VAR_8);

  FUNC_2(VAR_13);

  FUNC_5(VAR_14);
 }

 return 0;
}
