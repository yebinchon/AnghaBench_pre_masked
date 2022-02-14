
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int dummy; } ;
struct sock {int sk_protocol; TYPE_2__* sk_prot; int sk_destruct; int sk_state; } ;
struct TYPE_3__ {int send_lock; int tx_work; } ;
struct smc_sock {int clcsock_release_lock; TYPE_1__ conn; int accept_q_lock; int accept_q; int connect_work; int tcp_listen_work; } ;
struct proto {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_4__ {int (* hash ) (struct sock*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 struct sock* FUNC_4 (struct net*,int ,int ,struct proto*,int ) ;
 int FUNC_5 (struct sock*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct proto VAR_6 ;
 struct proto VAR_7 ;
 struct smc_sock* FUNC_6 (struct sock*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (struct socket*,struct sock*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct sock*) ;

__attribute__((used)) static struct sock *FUNC_10(struct net *VAR_10, struct socket *VAR_11,
       int VAR_12)
{
 struct smc_sock *VAR_13;
 struct proto *VAR_14;
 struct sock *VAR_15;

 VAR_14 = (VAR_12 == VAR_2) ? &VAR_7 : &VAR_6;
 VAR_15 = FUNC_4(VAR_10, VAR_1, VAR_0, VAR_14, 0);
 if (!VAR_15)
  return ((void*)0);

 FUNC_7(VAR_11, VAR_15);
 VAR_15->sk_state = VAR_3;
 VAR_15->sk_destruct = VAR_5;
 VAR_15->sk_protocol = VAR_12;
 VAR_13 = FUNC_6(VAR_15);
 FUNC_2(&VAR_13->tcp_listen_work, VAR_8);
 FUNC_2(&VAR_13->connect_work, VAR_4);
 FUNC_0(&VAR_13->conn.tx_work, VAR_9);
 FUNC_1(&VAR_13->accept_q);
 FUNC_8(&VAR_13->accept_q_lock);
 FUNC_8(&VAR_13->conn.send_lock);
 VAR_15->sk_prot->hash(VAR_15);
 FUNC_5(VAR_15);
 FUNC_3(&VAR_13->clcsock_release_lock);

 return VAR_15;
}
