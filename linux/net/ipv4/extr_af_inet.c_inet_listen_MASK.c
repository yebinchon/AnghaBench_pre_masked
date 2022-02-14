
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct socket {scalar_t__ state; scalar_t__ type; struct sock* sk; } ;
struct sock {unsigned char sk_state; int sk_max_ack_backlog; } ;
struct TYPE_8__ {int max_qlen; } ;
struct TYPE_9__ {TYPE_2__ fastopenq; } ;
struct TYPE_11__ {TYPE_3__ icsk_accept_queue; } ;
struct TYPE_7__ {int sysctl_tcp_fastopen; } ;
struct TYPE_10__ {TYPE_1__ ipv4; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sock*,int) ;
 TYPE_6__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 TYPE_4__* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,int ,int ,int *) ;
 int FUNC_7 (TYPE_4__*) ;

int FUNC_8(struct socket *VAR_9, int VAR_10)
{
 struct sock *VAR_11 = VAR_9->sk;
 unsigned char VAR_12;
 int VAR_13, VAR_14;

 FUNC_3(VAR_11);

 VAR_13 = -VAR_1;
 if (VAR_9->state != VAR_3 || VAR_9->type != VAR_2)
  goto out;

 VAR_12 = VAR_11->sk_state;
 if (!((1 << VAR_12) & (VAR_4 | VAR_5)))
  goto out;

 VAR_11->sk_max_ack_backlog = VAR_10;



 if (VAR_12 != VAR_6) {






  VAR_14 = FUNC_5(VAR_11)->ipv4.sysctl_tcp_fastopen;
  if ((VAR_14 & VAR_8) &&
      (VAR_14 & VAR_7) &&
      !FUNC_1(VAR_11)->icsk_accept_queue.fastopenq.max_qlen) {
   FUNC_0(VAR_11, VAR_10);
   FUNC_7(FUNC_5(VAR_11));
  }

  VAR_13 = FUNC_2(VAR_11, VAR_10);
  if (VAR_13)
   goto out;
  FUNC_6(VAR_11, VAR_0, 0, ((void*)0));
 }
 VAR_13 = 0;

out:
 FUNC_4(VAR_11);
 return VAR_13;
}
