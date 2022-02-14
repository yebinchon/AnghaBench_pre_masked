
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u32 ;
struct sk_buff {unsigned int len; scalar_t__ data; scalar_t__ dev; } ;
struct TYPE_4__ {scalar_t__ dev; } ;
struct rt6_info {TYPE_1__ dst; } ;
struct ipv6hdr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct TYPE_6__ {int saddr; } ;
struct TYPE_5__ {int saddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sk_buff*,int ,int ,unsigned int,struct in6_addr*) ;
 int FUNC_3 (struct rt6_info*) ;
 TYPE_3__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,struct in6_addr*) ;
 TYPE_2__* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (scalar_t__,scalar_t__,unsigned int) ;
 int FUNC_9 (scalar_t__,int ,int) ;
 int FUNC_10 (struct sk_buff*,int) ;
 struct rt6_info* FUNC_11 (int ,int *,int *,int ,struct sk_buff*,int ) ;
 struct sk_buff* FUNC_12 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_13 (struct sk_buff*,int ) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*,int) ;
 int FUNC_16 (struct sk_buff*) ;

int FUNC_17(struct sk_buff *VAR_6, int VAR_7, int VAR_8,
          unsigned int VAR_9)
{
 struct in6_addr VAR_10;
 struct rt6_info *VAR_11;
 struct sk_buff *VAR_12;
 u32 VAR_13 = 0;

 if (!FUNC_10(VAR_6, VAR_7 + sizeof(struct ipv6hdr) + 8))
  return 1;


 if (VAR_9 < 128 || (VAR_9 & 7) || VAR_6->len < VAR_9)
  VAR_9 = 0;

 VAR_12 = VAR_9 ? FUNC_13(VAR_6, VAR_0) : FUNC_12(VAR_6, VAR_0);

 if (!VAR_12)
  return 1;

 FUNC_14(VAR_12);
 FUNC_15(VAR_12, VAR_7);
 FUNC_16(VAR_12);

 VAR_11 = FUNC_11(FUNC_1(VAR_6->dev), &FUNC_6(VAR_12)->saddr, ((void*)0), 0,
   VAR_6, 0);

 if (VAR_11 && VAR_11->dst.dev)
  VAR_12->dev = VAR_11->dst.dev;

 FUNC_5(FUNC_4(VAR_6)->saddr, &VAR_10);

 if (VAR_9) {



  FUNC_0(VAR_12, VAR_7);
  FUNC_16(VAR_12);
  FUNC_8(VAR_12->data, VAR_12->data + VAR_7, VAR_9 - VAR_7);
  FUNC_9(VAR_12->data + VAR_9 - VAR_7, 0, VAR_7);



  VAR_13 = (VAR_9/8) << 24;
 }
 if (VAR_8 == VAR_5)
  FUNC_2(VAR_12, VAR_4, VAR_3,
      VAR_13, &VAR_10);
 else
  FUNC_2(VAR_12, VAR_2, VAR_1,
      VAR_13, &VAR_10);
 if (VAR_11)
  FUNC_3(VAR_11);

 FUNC_7(VAR_12);

 return 0;
}
