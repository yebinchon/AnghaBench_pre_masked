
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {int sk_error_queue; scalar_t__ sk_err; } ;
struct TYPE_2__ {int zcookie_head; } ;
struct rds_sock {scalar_t__ rs_snd_bytes; scalar_t__ rs_seen_congestion; int rs_recv_lock; TYPE_1__ rs_zcookie_queue; int rs_notify_queue; int rs_recv_queue; int rs_lock; scalar_t__ rs_cong_notify; int rs_cong_track; int rs_cong_monitor; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (struct rds_sock*) ;
 struct rds_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int * FUNC_7 (struct sock*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static __poll_t FUNC_11(struct file *VAR_7, struct socket *VAR_8,
        poll_table *VAR_9)
{
 struct sock *VAR_10 = VAR_8->sk;
 struct rds_sock *VAR_11 = FUNC_4(VAR_10);
 __poll_t VAR_12 = 0;
 unsigned long VAR_13;

 FUNC_1(VAR_7, FUNC_7(VAR_10), VAR_9);

 if (VAR_11->rs_seen_congestion)
  FUNC_1(VAR_7, &VAR_6, VAR_9);

 FUNC_5(&VAR_11->rs_recv_lock, VAR_13);
 if (!VAR_11->rs_cong_monitor) {



  if (FUNC_2(&VAR_11->rs_cong_track))
   VAR_12 |= (VAR_0 | VAR_2 | VAR_3);
 } else {
  FUNC_9(&VAR_11->rs_lock);
  if (VAR_11->rs_cong_notify)
   VAR_12 |= (VAR_0 | VAR_2);
  FUNC_10(&VAR_11->rs_lock);
 }
 if (!FUNC_0(&VAR_11->rs_recv_queue) ||
     !FUNC_0(&VAR_11->rs_notify_queue) ||
     !FUNC_0(&VAR_11->rs_zcookie_queue.zcookie_head))
  VAR_12 |= (VAR_0 | VAR_2);
 if (VAR_11->rs_snd_bytes < FUNC_3(VAR_11))
  VAR_12 |= (VAR_1 | VAR_4);
 if (VAR_10->sk_err || !FUNC_8(&VAR_10->sk_error_queue))
  VAR_12 |= VAR_5;
 FUNC_6(&VAR_11->rs_recv_lock, VAR_13);


 if (VAR_12)
  VAR_11->rs_seen_congestion = 0;

 return VAR_12;
}
