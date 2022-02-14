
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; scalar_t__ sk_protocol; } ;
struct TYPE_3__ {int lock; } ;
struct request_sock_queue {TYPE_1__ fastopenq; } ;
struct request_sock {struct sock* sk; } ;
struct inet_connection_sock {struct request_sock_queue icsk_accept_queue; } ;
struct TYPE_4__ {scalar_t__ tfo_listener; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,long) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct request_sock*) ;
 scalar_t__ FUNC_5 (struct request_sock_queue*) ;
 struct request_sock* FUNC_6 (struct request_sock_queue*,struct sock*) ;
 long FUNC_7 (struct sock*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 TYPE_2__* FUNC_10 (struct request_sock*) ;

struct sock *FUNC_11(struct sock *VAR_5, int VAR_6, int *VAR_7, bool VAR_8)
{
 struct inet_connection_sock *VAR_9 = FUNC_0(VAR_5);
 struct request_sock_queue *VAR_10 = &VAR_9->icsk_accept_queue;
 struct request_sock *VAR_11;
 struct sock *VAR_12;
 int VAR_13;

 FUNC_2(VAR_5);




 VAR_13 = -VAR_1;
 if (VAR_5->sk_state != VAR_4)
  goto out_err;


 if (FUNC_5(VAR_10)) {
  long VAR_14 = FUNC_7(VAR_5, VAR_6 & VAR_3);


  VAR_13 = -VAR_0;
  if (!VAR_14)
   goto out_err;

  VAR_13 = FUNC_1(VAR_5, VAR_14);
  if (VAR_13)
   goto out_err;
 }
 VAR_11 = FUNC_6(VAR_10, VAR_5);
 VAR_12 = VAR_11->sk;

 if (VAR_5->sk_protocol == VAR_2 &&
     FUNC_10(VAR_11)->tfo_listener) {
  FUNC_8(&VAR_10->fastopenq.lock);
  if (FUNC_10(VAR_11)->tfo_listener) {






   VAR_11->sk = ((void*)0);
   VAR_11 = ((void*)0);
  }
  FUNC_9(&VAR_10->fastopenq.lock);
 }
out:
 FUNC_3(VAR_5);
 if (VAR_11)
  FUNC_4(VAR_11);
 return VAR_12;
out_err:
 VAR_12 = ((void*)0);
 VAR_11 = ((void*)0);
 *VAR_7 = VAR_13;
 goto out;
}
