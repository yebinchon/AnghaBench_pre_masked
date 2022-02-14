
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ len; int dev; } ;
struct net {int dummy; } ;
struct ipv6hdr {int version; scalar_t__ nexthdr; int payload_len; } ;
struct inet6_skb_parm {int dummy; } ;
struct inet6_dev {int dummy; } ;


 int FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct net*,struct inet6_dev*,int ) ;
 struct inet6_dev* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 struct ipv6hdr* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,int ,int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_8 (struct sk_buff*,scalar_t__) ;

int FUNC_9(struct net *VAR_4, struct sk_buff *VAR_5)
{
 const struct ipv6hdr *VAR_6;
 struct inet6_dev *VAR_7 = FUNC_2(VAR_5->dev);
 u32 VAR_8;
 u8 VAR_9 = sizeof(struct ipv6hdr);

 if (!FUNC_7(VAR_5, VAR_9))
  goto inhdr_error;

 if (VAR_5->len < VAR_9)
  goto drop;

 VAR_6 = FUNC_4(VAR_5);

 if (VAR_6->version != 6)
  goto inhdr_error;

 VAR_8 = FUNC_6(VAR_6->payload_len);

 if (VAR_8 || VAR_6->nexthdr != VAR_3) {
  if (VAR_8 + VAR_9 > VAR_5->len) {
   FUNC_1(VAR_4, VAR_7,
     VAR_2);
   goto drop;
  }
  if (FUNC_8(VAR_5, VAR_8 + VAR_9)) {
   FUNC_1(VAR_4, VAR_7,
     VAR_0);
   goto drop;
  }
  VAR_6 = FUNC_4(VAR_5);
 }
 if (VAR_6->nexthdr == VAR_3 && FUNC_3(VAR_5))
  goto drop;

 FUNC_5(FUNC_0(VAR_5), 0, sizeof(struct inet6_skb_parm));



 return 0;

inhdr_error:
 FUNC_1(VAR_4, VAR_7, VAR_1);
drop:
 return -1;
}
