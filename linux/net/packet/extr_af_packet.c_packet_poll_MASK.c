
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct TYPE_6__ {int lock; } ;
struct TYPE_5__ {int lock; } ;
struct sock {TYPE_2__ sk_write_queue; TYPE_1__ sk_receive_queue; } ;
struct TYPE_8__ {scalar_t__ pg_vec; } ;
struct TYPE_7__ {scalar_t__ pg_vec; } ;
struct packet_sock {TYPE_4__ tx_ring; TYPE_3__ rx_ring; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct file*,struct socket*,int *) ;
 scalar_t__ FUNC_1 (struct packet_sock*,TYPE_4__*,int ) ;
 int FUNC_2 (struct packet_sock*,TYPE_3__*,int ) ;
 int FUNC_3 (struct packet_sock*) ;
 struct packet_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static __poll_t FUNC_7(struct file *VAR_6, struct socket *VAR_7,
    poll_table *VAR_8)
{
 struct sock *VAR_9 = VAR_7->sk;
 struct packet_sock *VAR_10 = FUNC_4(VAR_9);
 __poll_t VAR_11 = FUNC_0(VAR_6, VAR_7, VAR_8);

 FUNC_5(&VAR_9->sk_receive_queue.lock);
 if (VAR_10->rx_ring.pg_vec) {
  if (!FUNC_2(VAR_10, &VAR_10->rx_ring,
   VAR_5))
   VAR_11 |= VAR_0 | VAR_2;
 }
 FUNC_3(VAR_10);
 FUNC_6(&VAR_9->sk_receive_queue.lock);
 FUNC_5(&VAR_9->sk_write_queue.lock);
 if (VAR_10->tx_ring.pg_vec) {
  if (FUNC_1(VAR_10, &VAR_10->tx_ring, VAR_4))
   VAR_11 |= VAR_1 | VAR_3;
 }
 FUNC_6(&VAR_9->sk_write_queue.lock);
 return VAR_11;
}
