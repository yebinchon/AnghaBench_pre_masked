
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_state; int sk_shutdown; TYPE_3__* sk_socket; scalar_t__ sk_err; } ;
struct TYPE_10__ {scalar_t__ urg_state; int bytes_to_rcv; int sndbuf_space; } ;
struct smc_sock {TYPE_4__ conn; TYPE_5__* clcsock; scalar_t__ use_fallback; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_11__ {TYPE_2__* sk; TYPE_1__* ops; } ;
struct TYPE_9__ {int flags; } ;
struct TYPE_8__ {scalar_t__ sk_err; } ;
struct TYPE_7__ {int (* poll ) (struct file*,TYPE_5__*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,struct sock*) ;
 int FUNC_3 (struct sock*) ;
 struct smc_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct file*,struct socket*,int *) ;
 int FUNC_6 (struct file*,TYPE_5__*,int *) ;
 int FUNC_7 (struct file*,TYPE_5__*,int *) ;

__attribute__((used)) static __poll_t FUNC_8(struct file *VAR_19, struct socket *VAR_20,
        poll_table *VAR_21)
{
 struct sock *VAR_22 = VAR_20->sk;
 struct smc_sock *VAR_23;
 __poll_t VAR_24 = 0;

 if (!VAR_22)
  return VAR_3;

 VAR_23 = FUNC_4(VAR_20->sk);
 if (VAR_23->use_fallback) {

  VAR_24 = VAR_23->clcsock->ops->poll(VAR_19, VAR_23->clcsock, VAR_21);
  VAR_22->sk_err = VAR_23->clcsock->sk->sk_err;
 } else {
  if (VAR_22->sk_state != VAR_13)
   FUNC_5(VAR_19, VAR_20, VAR_21);
  if (VAR_22->sk_err)
   VAR_24 |= VAR_0;
  if ((VAR_22->sk_shutdown == VAR_11) ||
      (VAR_22->sk_state == VAR_13))
   VAR_24 |= VAR_1;
  if (VAR_22->sk_state == VAR_15) {

   VAR_24 |= FUNC_3(VAR_22);
  } else if (VAR_23->use_fallback) {
   VAR_24 |= VAR_23->clcsock->ops->poll(VAR_19, VAR_23->clcsock,
          VAR_21);
   VAR_22->sk_err = VAR_23->clcsock->sk->sk_err;
  } else {
   if ((VAR_22->sk_state != VAR_14 &&
        FUNC_0(&VAR_23->conn.sndbuf_space)) ||
       VAR_22->sk_shutdown & VAR_10) {
    VAR_24 |= VAR_4 | VAR_8;
   } else {
    FUNC_2(VAR_17, VAR_22);
    FUNC_1(VAR_18, &VAR_22->sk_socket->flags);
   }
   if (FUNC_0(&VAR_23->conn.bytes_to_rcv))
    VAR_24 |= VAR_2 | VAR_7;
   if (VAR_22->sk_shutdown & VAR_9)
    VAR_24 |= VAR_2 | VAR_7 | VAR_6;
   if (VAR_22->sk_state == VAR_12)
    VAR_24 |= VAR_2;
   if (VAR_23->conn.urg_state == VAR_16)
    VAR_24 |= VAR_5;
  }
 }

 return VAR_24;
}
