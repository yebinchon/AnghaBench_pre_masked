
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ee_origin; int ee_errno; } ;
struct sock_exterr_skb {TYPE_1__ ee; } ;
struct sock {int sk_refcnt; } ;
struct sk_buff {int wifi_acked_valid; int wifi_acked; struct sock* sk; } ;


 int VAR_0 ;
 struct sock_exterr_skb* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sock_exterr_skb*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,struct sk_buff*) ;

void FUNC_7(struct sk_buff *VAR_2, bool VAR_3)
{
 struct sock *VAR_4 = VAR_2->sk;
 struct sock_exterr_skb *VAR_5;
 int VAR_6 = 1;

 VAR_2->wifi_acked_valid = 1;
 VAR_2->wifi_acked = VAR_3;

 VAR_5 = FUNC_0(VAR_2);
 FUNC_3(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->ee.ee_errno = VAR_0;
 VAR_5->ee.ee_origin = VAR_1;




 if (FUNC_2(FUNC_4(&VAR_4->sk_refcnt))) {
  VAR_6 = FUNC_6(VAR_4, VAR_2);
  FUNC_5(VAR_4);
 }
 if (VAR_6)
  FUNC_1(VAR_2);
}
