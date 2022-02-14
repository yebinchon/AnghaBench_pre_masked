
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ len; } ;
struct dccp_sock {long dccps_syn_rtt; int dccps_hc_tx_insert_options; } ;
struct ccid3_hc_tx_sock {scalar_t__ tx_state; scalar_t__ tx_s; long tx_rtt; scalar_t__ tx_x; int tx_t_ipi; void* tx_t_nom; scalar_t__ tx_last_win_count; void* tx_t_ld; void* tx_t_last_win_count; int tx_no_feedback_timer; } ;
typedef scalar_t__ s64 ;
typedef void* ktime_t ;
struct TYPE_2__ {scalar_t__ dccpd_ccval; } ;


 int VAR_0 ;
 long VAR_1 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct sock*,int ) ;
 struct ccid3_hc_tx_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct ccid3_hc_tx_sock*,void*) ;
 int FUNC_4 (char*,long) ;
 int FUNC_5 (struct ccid3_hc_tx_sock*) ;
 struct dccp_sock* FUNC_6 (struct sock*) ;
 scalar_t__ VAR_8 ;
 void* FUNC_7 (void*,int ) ;
 void* FUNC_8 () ;
 scalar_t__ FUNC_9 (void*,void*) ;
 scalar_t__ FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*,int *,scalar_t__) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct sock *VAR_9, struct sk_buff *VAR_10)
{
 struct dccp_sock *VAR_11 = FUNC_6(VAR_9);
 struct ccid3_hc_tx_sock *VAR_12 = FUNC_2(VAR_9);
 ktime_t VAR_13 = FUNC_8();
 s64 VAR_14;






 if (FUNC_12(VAR_10->len == 0))
  return -VAR_2;

 if (VAR_12->tx_state == VAR_5) {
  FUNC_11(VAR_9, &VAR_12->tx_no_feedback_timer, (VAR_8 +
          FUNC_13(VAR_3)));
  VAR_12->tx_last_win_count = 0;
  VAR_12->tx_t_last_win_count = VAR_13;


  VAR_12->tx_t_nom = VAR_13;

  VAR_12->tx_s = VAR_10->len;






  if (VAR_11->dccps_syn_rtt) {
   FUNC_4("SYN RTT = %uus\n", VAR_11->dccps_syn_rtt);
   VAR_12->tx_rtt = VAR_11->dccps_syn_rtt;
   VAR_12->tx_x = FUNC_10(VAR_9);
   VAR_12->tx_t_ld = VAR_13;
  } else {






   VAR_12->tx_rtt = VAR_1;
   VAR_12->tx_x = VAR_12->tx_s;
   VAR_12->tx_x <<= 6;
  }
  FUNC_5(VAR_12);

  FUNC_1(VAR_9, VAR_4);

 } else {
  VAR_14 = FUNC_9(VAR_12->tx_t_nom, VAR_13);
  FUNC_4("delay=%ld\n", (long)VAR_14);
  if (VAR_14 >= VAR_6)
   return (u32)VAR_14 / VAR_7;

  FUNC_3(VAR_12, VAR_13);
 }


 VAR_11->dccps_hc_tx_insert_options = 1;
 FUNC_0(VAR_10)->dccpd_ccval = VAR_12->tx_last_win_count;


 VAR_12->tx_t_nom = FUNC_7(VAR_12->tx_t_nom, VAR_12->tx_t_ipi);
 return VAR_0;
}
