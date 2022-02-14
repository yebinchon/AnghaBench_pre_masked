
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
 int FUNC_0 (struct sk_buff*,int,int const) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int const) ;
 int FUNC_4 (struct skb_shared_info*,int const) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 struct skb_shared_info* FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_5)
{
 const u32 VAR_6 = sizeof(struct ipv6hdr) - sizeof(struct iphdr);
 u32 VAR_7 = FUNC_7(VAR_5);
 int VAR_8;

 if (FUNC_5(VAR_5) && !FUNC_6(VAR_5))
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_5, VAR_6);
 if (FUNC_9(VAR_8 < 0))
  return VAR_8;

 VAR_8 = FUNC_0(VAR_5, VAR_7, VAR_6);
 if (FUNC_9(VAR_8 < 0))
  return VAR_8;

 if (FUNC_5(VAR_5)) {
  struct skb_shared_info *VAR_9 = FUNC_8(VAR_5);




  if (VAR_9->gso_type & VAR_3) {
   VAR_9->gso_type &= ~VAR_3;
   VAR_9->gso_type |= VAR_4;
  }


  FUNC_4(VAR_9, VAR_6);

  VAR_9->gso_type |= VAR_2;
  VAR_9->gso_segs = 0;
 }

 VAR_5->protocol = FUNC_1(VAR_1);
 FUNC_2(VAR_5);

 return 0;
}
