
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct skb_shared_info {int gso_type; scalar_t__ gso_segs; } ;
struct sk_buff {int protocol; } ;
struct ipv6hdr {int dummy; } ;
struct iphdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,int,int const) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct skb_shared_info*,int const) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 struct skb_shared_info* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_6)
{
 const u32 VAR_7 = sizeof(struct ipv6hdr) - sizeof(struct iphdr);
 u32 VAR_8 = FUNC_6(VAR_6);
 int VAR_9;

 if (FUNC_4(VAR_6) && !FUNC_5(VAR_6))
  return -VAR_0;

 VAR_9 = FUNC_8(VAR_6, VAR_2);
 if (FUNC_9(VAR_9 < 0))
  return VAR_9;

 VAR_9 = FUNC_0(VAR_6, VAR_8, VAR_7);
 if (FUNC_9(VAR_9 < 0))
  return VAR_9;

 if (FUNC_4(VAR_6)) {
  struct skb_shared_info *VAR_10 = FUNC_7(VAR_6);




  if (VAR_10->gso_type & VAR_5) {
   VAR_10->gso_type &= ~VAR_5;
   VAR_10->gso_type |= VAR_4;
  }


  FUNC_3(VAR_10, VAR_7);

  VAR_10->gso_type |= VAR_3;
  VAR_10->gso_segs = 0;
 }

 VAR_6->protocol = FUNC_1(VAR_1);
 FUNC_2(VAR_6);

 return 0;
}
