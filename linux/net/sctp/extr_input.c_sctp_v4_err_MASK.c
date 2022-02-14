
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_err; int sk_err_soft; int (* sk_error_report ) (struct sock*) ;} ;
struct sk_buff {void* transport_header; void* network_header; int dev; scalar_t__ data; } ;
struct sctp_transport {int dummy; } ;
struct sctp_association {int dummy; } ;
struct net {int dummy; } ;
struct iphdr {int ihl; } ;
struct inet_sock {scalar_t__ recverr; } ;
typedef int __u32 ;
typedef void* __u16 ;
struct TYPE_4__ {int errno; } ;
struct TYPE_3__ {int type; int code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int const VAR_4 ;
 int const VAR_5 ;
 int VAR_6 ;

 int const VAR_7 ;


 int const VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net*,int ) ;
 struct net* FUNC_2 (int ) ;
 TYPE_2__* VAR_9 ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 struct inet_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,struct sctp_transport*) ;
 struct sock* FUNC_6 (struct net*,int ,struct sk_buff*,int ,struct sctp_association**,struct sctp_transport**) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sock*,struct sctp_association*,struct sctp_transport*,int ) ;
 int FUNC_9 (struct sock*,struct sctp_association*,struct sctp_transport*) ;
 int FUNC_10 (struct sock*,struct sctp_transport*,struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*,int const) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*) ;

int FUNC_15(struct sk_buff *VAR_10, __u32 VAR_11)
{
 const struct iphdr *VAR_12 = (const struct iphdr *)VAR_10->data;
 const int VAR_13 = VAR_12->ihl * 4;
 const int VAR_14 = FUNC_3(VAR_10)->type;
 const int VAR_15 = FUNC_3(VAR_10)->code;
 struct sock *VAR_16;
 struct sctp_association *VAR_17 = ((void*)0);
 struct sctp_transport *VAR_18;
 struct inet_sock *VAR_19;
 __u16 VAR_20, VAR_21;
 int VAR_22;
 struct net *VAR_23 = FUNC_2(VAR_10->dev);


 VAR_20 = VAR_10->network_header;
 VAR_21 = VAR_10->transport_header;
 FUNC_11(VAR_10);
 FUNC_12(VAR_10, VAR_13);
 VAR_16 = FUNC_6(VAR_23, VAR_0, VAR_10, FUNC_7(VAR_10), &VAR_17, &VAR_18);

 VAR_10->network_header = VAR_20;
 VAR_10->transport_header = VAR_21;
 if (!VAR_16) {
  FUNC_1(VAR_23, VAR_6);
  return -VAR_2;
 }




 switch (VAR_14) {
 case 130:
  VAR_22 = VAR_3;
  break;
 case 131:
  if (VAR_15 > VAR_8)
   goto out_unlock;


  if (VAR_5 == VAR_15) {
   FUNC_8(VAR_16, VAR_17, VAR_18,
           FUNC_0(VAR_11));
   goto out_unlock;
  } else {
   if (VAR_7 == VAR_15) {
    FUNC_9(VAR_16, VAR_17,
           VAR_18);
    goto out_unlock;
   }
  }
  VAR_22 = VAR_9[VAR_15].errno;
  break;
 case 128:



  if (VAR_4 == VAR_15)
   goto out_unlock;

  VAR_22 = VAR_1;
  break;
 case 129:
  FUNC_10(VAR_16, VAR_18, VAR_10);

 default:
  goto out_unlock;
 }

 VAR_19 = FUNC_4(VAR_16);
 if (!FUNC_13(VAR_16) && VAR_19->recverr) {
  VAR_16->sk_err = VAR_22;
  VAR_16->sk_error_report(VAR_16);
 } else {
  VAR_16->sk_err_soft = VAR_22;
 }

out_unlock:
 FUNC_5(VAR_16, VAR_18);
 return 0;
}
