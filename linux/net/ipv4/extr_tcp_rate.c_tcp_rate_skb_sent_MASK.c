
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u64 ;
struct tcp_sock {scalar_t__ app_limited; int delivered; void* delivered_mstamp; void* first_tx_mstamp; int packets_out; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int is_app_limited; int delivered; void* delivered_mstamp; void* first_tx_mstamp; } ;
struct TYPE_4__ {TYPE_1__ tx; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 struct tcp_sock* FUNC_1 (struct sock*) ;
 void* FUNC_2 (struct sk_buff*) ;

void FUNC_3(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 struct tcp_sock *VAR_2 = FUNC_1(VAR_0);
 if (!VAR_2->packets_out) {
  u64 VAR_3 = FUNC_2(VAR_1);

  VAR_2->first_tx_mstamp = VAR_3;
  VAR_2->delivered_mstamp = VAR_3;
 }

 FUNC_0(VAR_1)->tx.first_tx_mstamp = VAR_2->first_tx_mstamp;
 FUNC_0(VAR_1)->tx.delivered_mstamp = VAR_2->delivered_mstamp;
 FUNC_0(VAR_1)->tx.delivered = VAR_2->delivered;
 FUNC_0(VAR_1)->tx.is_app_limited = VAR_2->app_limited ? 1 : 0;
}
