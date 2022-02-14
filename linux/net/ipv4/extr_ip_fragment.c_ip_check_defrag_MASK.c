
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {scalar_t__ protocol; int len; } ;
struct net {int dummy; } ;
struct iphdr {int ihl; int version; int tot_len; } ;
struct inet_skb_parm {int dummy; } ;
typedef int iph ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct net*,struct sk_buff*,int) ;
 scalar_t__ FUNC_3 (struct iphdr*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*,int) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int,struct iphdr*,int) ;
 int FUNC_11 (struct sk_buff*) ;
 struct sk_buff* FUNC_12 (struct sk_buff*,int ) ;

struct sk_buff *FUNC_13(struct net *VAR_2, struct sk_buff *VAR_3, u32 VAR_4)
{
 struct iphdr VAR_5;
 int VAR_6;
 u32 VAR_7;

 if (VAR_3->protocol != FUNC_1(VAR_0))
  return VAR_3;

 VAR_6 = FUNC_11(VAR_3);

 if (FUNC_10(VAR_3, VAR_6, &VAR_5, sizeof(VAR_5)) < 0)
  return VAR_3;

 if (VAR_5.ihl < 5 || VAR_5.version != 4)
  return VAR_3;

 VAR_7 = FUNC_6(VAR_5.tot_len);
 if (VAR_3->len < VAR_6 + VAR_7 || VAR_7 < (VAR_5.ihl * 4))
  return VAR_3;

 if (FUNC_3(&VAR_5)) {
  VAR_3 = FUNC_12(VAR_3, VAR_1);
  if (VAR_3) {
   if (!FUNC_7(VAR_3, VAR_6 + VAR_5.ihl * 4)) {
    FUNC_4(VAR_3);
    return ((void*)0);
   }
   if (FUNC_8(VAR_3, VAR_6 + VAR_7)) {
    FUNC_4(VAR_3);
    return ((void*)0);
   }
   FUNC_5(FUNC_0(VAR_3), 0, sizeof(struct inet_skb_parm));
   if (FUNC_2(VAR_2, VAR_3, VAR_4))
    return ((void*)0);
   FUNC_9(VAR_3);
  }
 }
 return VAR_3;
}
