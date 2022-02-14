
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sock {int sk_err; int sk_err_soft; int (* sk_error_report ) (struct sock*) ;} ;
struct sk_buff {void* transport_header; void* network_header; int dev; } ;
struct sctp_transport {int dummy; } ;
struct sctp_association {int dummy; } ;
struct net {int dummy; } ;
struct ipv6_pinfo {scalar_t__ recverr; } ;
struct inet6_skb_parm {int dummy; } ;
struct inet6_dev {int dummy; } ;
typedef void* __u16 ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;

 int FUNC_0 (struct net*,struct inet6_dev*,int ) ;
 struct net* FUNC_1 (int ) ;
 int FUNC_2 (int,int,int*) ;
 struct inet6_dev* FUNC_3 (int ) ;
 int FUNC_4 (struct inet6_dev*) ;
 struct ipv6_pinfo* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct sock*,struct sctp_transport*) ;
 struct sock* FUNC_10 (struct net*,int ,struct sk_buff*,int ,struct sctp_association**,struct sctp_transport**) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sock*,struct sctp_association*,struct sctp_transport*,int ) ;
 int FUNC_13 (struct sock*,struct sctp_association*,struct sctp_transport*) ;
 int FUNC_14 (struct sock*,struct sctp_transport*,struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*,int) ;
 int FUNC_17 (struct sock*) ;
 int FUNC_18 (struct sock*) ;

__attribute__((used)) static int FUNC_19(struct sk_buff *VAR_4, struct inet6_skb_parm *VAR_5,
   u8 VAR_6, u8 VAR_7, int VAR_8, __be32 VAR_9)
{
 struct inet6_dev *VAR_10;
 struct sock *VAR_11;
 struct sctp_association *VAR_12;
 struct sctp_transport *VAR_13;
 struct ipv6_pinfo *VAR_14;
 __u16 VAR_15, VAR_16;
 int VAR_17, VAR_18 = 0;
 struct net *VAR_19 = FUNC_1(VAR_4->dev);

 VAR_10 = FUNC_3(VAR_4->dev);


 VAR_15 = VAR_4->network_header;
 VAR_16 = VAR_4->transport_header;
 FUNC_15(VAR_4);
 FUNC_16(VAR_4, VAR_8);
 VAR_11 = FUNC_10(VAR_19, VAR_0, VAR_4, FUNC_11(VAR_4), &VAR_12, &VAR_13);

 VAR_4->network_header = VAR_15;
 VAR_4->transport_header = VAR_16;
 if (!VAR_11) {
  FUNC_0(VAR_19, VAR_10, VAR_2);
  VAR_18 = -VAR_1;
  goto out;
 }





 switch (VAR_6) {
 case 129:
  if (FUNC_6(VAR_11))
   FUNC_12(VAR_11, VAR_12, VAR_13, FUNC_8(VAR_9));
  goto out_unlock;
 case 130:
  if (VAR_3 == VAR_7) {
   FUNC_13(VAR_11, VAR_12, VAR_13);
   goto out_unlock;
  }
  break;
 case 128:
  FUNC_14(VAR_11, VAR_13, VAR_4);
  goto out_unlock;
 default:
  break;
 }

 VAR_14 = FUNC_5(VAR_11);
 FUNC_2(VAR_6, VAR_7, &VAR_17);
 if (!FUNC_17(VAR_11) && VAR_14->recverr) {
  VAR_11->sk_err = VAR_17;
  VAR_11->sk_error_report(VAR_11);
 } else {
  VAR_11->sk_err_soft = VAR_17;
 }

out_unlock:
 FUNC_9(VAR_11, VAR_13);
out:
 if (FUNC_7(VAR_10 != ((void*)0)))
  FUNC_4(VAR_10);

 return VAR_18;
}
