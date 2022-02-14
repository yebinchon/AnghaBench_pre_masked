
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sock {scalar_t__ sk_state; int sk_err; int (* sk_error_report ) (struct sock*) ;} ;
struct sk_buff {scalar_t__* data; } ;
struct ipv6_pinfo {scalar_t__ pmtudisc; scalar_t__ recverr; } ;
struct inet_sock {int hdrincl; } ;
struct inet6_skb_parm {int dummy; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,scalar_t__,int*) ;
 struct ipv6_pinfo* FUNC_1 (struct sock*) ;
 struct inet_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sk_buff*,struct sock*) ;
 int FUNC_4 (struct sk_buff*,struct sock*,int ) ;
 int FUNC_5 (struct sock*,struct sk_buff*,int,int ,int ,scalar_t__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sock*) ;

__attribute__((used)) static void FUNC_8(struct sock *VAR_4, struct sk_buff *VAR_5,
        struct inet6_skb_parm *VAR_6,
        u8 VAR_7, u8 VAR_8, int VAR_9, __be32 VAR_10)
{
 struct inet_sock *VAR_11 = FUNC_2(VAR_4);
 struct ipv6_pinfo *VAR_12 = FUNC_1(VAR_4);
 int VAR_13;
 int VAR_14;






 if (!VAR_12->recverr && VAR_4->sk_state != VAR_3)
  return;

 VAR_14 = FUNC_0(VAR_7, VAR_8, &VAR_13);
 if (VAR_7 == VAR_0) {
  FUNC_4(VAR_5, VAR_4, VAR_10);
  VAR_14 = (VAR_12->pmtudisc == VAR_1);
 }
 if (VAR_7 == VAR_2) {
  FUNC_3(VAR_5, VAR_4);
  return;
 }
 if (VAR_12->recverr) {
  u8 *VAR_15 = VAR_5->data;
  if (!VAR_11->hdrincl)
   VAR_15 += VAR_9;
  FUNC_5(VAR_4, VAR_5, VAR_13, 0, FUNC_6(VAR_10), VAR_15);
 }

 if (VAR_12->recverr || VAR_14) {
  VAR_4->sk_err = VAR_13;
  VAR_4->sk_error_report(VAR_4);
 }
}
