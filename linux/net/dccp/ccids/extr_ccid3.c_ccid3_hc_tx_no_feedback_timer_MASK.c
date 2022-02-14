
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct sock {int sk_state; } ;
struct ccid3_hc_tx_sock {scalar_t__ tx_state; int tx_t_rto; scalar_t__ tx_p; int tx_x; int tx_x_calc; int tx_x_recv; int tx_t_ipi; int tx_no_feedback_timer; scalar_t__ tx_s; struct sock* sk; } ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int ) ;
 int FUNC_3 (struct sock*,int *) ;
 int FUNC_4 (char*,unsigned long long,...) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct ccid3_hc_tx_sock*) ;
 int FUNC_7 (struct sock*) ;
 struct ccid3_hc_tx_sock* FUNC_8 (int ,struct timer_list*,int ) ;
 struct ccid3_hc_tx_sock* VAR_7 ;
 scalar_t__ VAR_8 ;
 void* FUNC_9 (int,int) ;
 int FUNC_10 (struct sock*,int *,scalar_t__) ;
 scalar_t__ FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*) ;
 int VAR_9 ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__ FUNC_14 (unsigned long) ;

__attribute__((used)) static void FUNC_15(struct timer_list *VAR_10)
{
 struct ccid3_hc_tx_sock *VAR_11 = FUNC_8(VAR_11, VAR_10, VAR_9);
 struct sock *VAR_12 = VAR_11->sk;
 unsigned long VAR_13 = VAR_6 / 5;

 FUNC_0(VAR_12);
 if (FUNC_11(VAR_12)) {


  goto restart_timer;
 }

 FUNC_4("%s(%p, state=%s) - entry\n", FUNC_7(VAR_12), VAR_12,
         FUNC_5(VAR_11->tx_state));


 if ((1 << VAR_12->sk_state) & ~(VAR_0 | VAR_1))
  goto out;


 if (VAR_11->tx_state == VAR_3)
  FUNC_2(VAR_12, VAR_4);





 if (VAR_11->tx_t_rto == 0 || VAR_11->tx_p == 0) {


  VAR_11->tx_x = FUNC_9(VAR_11->tx_x / 2,
          (((__u64)VAR_11->tx_s) << 6) / VAR_5);
  FUNC_6(VAR_11);
 } else {
  if (VAR_11->tx_x_calc > (VAR_11->tx_x_recv >> 5))
   VAR_11->tx_x_recv =
    FUNC_9(VAR_11->tx_x_recv / 2,
        (((__u64)VAR_11->tx_s) << 6) / (2*VAR_5));
  else {
   VAR_11->tx_x_recv = VAR_11->tx_x_calc;
   VAR_11->tx_x_recv <<= 4;
  }
  FUNC_3(VAR_12, ((void*)0));
 }
 FUNC_4("Reduced X to %llu/64 bytes/sec\n",
   (unsigned long long)VAR_11->tx_x);





 if (FUNC_13(VAR_11->tx_t_rto == 0))
  VAR_13 = VAR_2;
 else
  VAR_13 = FUNC_9(VAR_11->tx_t_rto, 2 * VAR_11->tx_t_ipi);

restart_timer:
 FUNC_10(VAR_12, &VAR_11->tx_no_feedback_timer,
      VAR_8 + FUNC_14(VAR_13));
out:
 FUNC_1(VAR_12);
 FUNC_12(VAR_12);
}
