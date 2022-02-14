
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_write_queue; int sk_receive_queue; } ;
struct TYPE_2__ {int * rx_busy_skb; scalar_t__ chan; } ;


 int FUNC_0 (char*,struct sock*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 TYPE_1__* FUNC_3 (struct sock*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_0)
{
 FUNC_0("sk %p", VAR_0);

 if (FUNC_3(VAR_0)->chan)
  FUNC_2(FUNC_3(VAR_0)->chan);

 if (FUNC_3(VAR_0)->rx_busy_skb) {
  FUNC_1(FUNC_3(VAR_0)->rx_busy_skb);
  FUNC_3(VAR_0)->rx_busy_skb = ((void*)0);
 }

 FUNC_4(&VAR_0->sk_receive_queue);
 FUNC_4(&VAR_0->sk_write_queue);
}
