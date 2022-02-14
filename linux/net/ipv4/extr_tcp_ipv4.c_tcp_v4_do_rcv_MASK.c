
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; struct dst_entry* sk_rx_dst; } ;
struct sk_buff {scalar_t__ skb_iif; } ;
struct dst_entry {TYPE_1__* ops; } ;
struct TYPE_4__ {scalar_t__ rx_dst_ifindex; } ;
struct TYPE_3__ {int (* check ) (struct dst_entry*,int ) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dst_entry*) ;
 TYPE_2__* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,struct sk_buff*) ;
 int FUNC_7 (struct dst_entry*,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct sock*,struct sock*,struct sk_buff*) ;
 int FUNC_10 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_11 (struct sock*,struct sk_buff*) ;
 struct sock* FUNC_12 (struct sock*,struct sk_buff*) ;
 int FUNC_13 (struct sock*,struct sk_buff*) ;

int FUNC_14(struct sock *VAR_4, struct sk_buff *VAR_5)
{
 struct sock *VAR_6;

 if (VAR_4->sk_state == VAR_0) {
  struct dst_entry *VAR_7 = VAR_4->sk_rx_dst;

  FUNC_6(VAR_4, VAR_5);
  FUNC_4(VAR_4, VAR_5);
  if (VAR_7) {
   if (FUNC_2(VAR_4)->rx_dst_ifindex != VAR_5->skb_iif ||
       !VAR_7->ops->check(VAR_7, 0)) {
    FUNC_1(VAR_7);
    VAR_4->sk_rx_dst = ((void*)0);
   }
  }
  FUNC_10(VAR_4, VAR_5);
  return 0;
 }

 if (FUNC_8(VAR_5))
  goto csum_err;

 if (VAR_4->sk_state == VAR_1) {
  struct sock *VAR_8 = FUNC_12(VAR_4, VAR_5);

  if (!VAR_8)
   goto discard;
  if (VAR_8 != VAR_4) {
   if (FUNC_9(VAR_4, VAR_8, VAR_5)) {
    VAR_6 = VAR_8;
    goto reset;
   }
   return 0;
  }
 } else
  FUNC_6(VAR_4, VAR_5);

 if (FUNC_11(VAR_4, VAR_5)) {
  VAR_6 = VAR_4;
  goto reset;
 }
 return 0;

reset:
 FUNC_13(VAR_6, VAR_5);
discard:
 FUNC_3(VAR_5);





 return 0;

csum_err:
 FUNC_0(FUNC_5(VAR_4), VAR_2);
 FUNC_0(FUNC_5(VAR_4), VAR_3);
 goto discard;
}
