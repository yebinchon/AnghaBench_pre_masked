
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ccid2_hc_rx_sock {scalar_t__ rx_num_data_pkts; } ;
struct TYPE_2__ {scalar_t__ dccps_r_ack_ratio; } ;


 struct ccid2_hc_rx_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sock*) ;
 TYPE_1__* FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 struct ccid2_hc_rx_sock *VAR_2 = FUNC_0(VAR_0);

 if (!FUNC_1(VAR_1))
  return;

 if (++VAR_2->rx_num_data_pkts >= FUNC_3(VAR_0)->dccps_r_ack_ratio) {
  FUNC_2(VAR_0);
  VAR_2->rx_num_data_pkts = 0;
 }
}
