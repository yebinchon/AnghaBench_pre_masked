
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * mnt; int * dentry; } ;
struct unix_sock {int peer_wake; int peer_wait; int bindlock; int iolock; int link; int inflight; int lock; TYPE_2__ path; } ;
struct socket {int dummy; } ;
struct sock {int sk_prot; int sk_destruct; int sk_max_ack_backlog; int sk_write_space; int sk_allocation; } ;
struct TYPE_3__ {int sysctl_max_dgram_qlen; } ;
struct net {TYPE_1__ unx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 struct sock* FUNC_11 (struct net*,int ,int ,int *,int) ;
 int FUNC_12 (struct socket*,struct sock*) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (int ,int ,int) ;
 int FUNC_15 (int *) ;
 int VAR_3 ;
 int FUNC_16 (int ,struct sock*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct unix_sock* FUNC_17 (struct sock*) ;
 int VAR_6 ;
 int FUNC_18 (struct sock*) ;
 int VAR_7 ;

__attribute__((used)) static struct sock *FUNC_19(struct net *VAR_8, struct socket *VAR_9, int VAR_10)
{
 struct sock *VAR_11 = ((void*)0);
 struct unix_sock *VAR_12;

 FUNC_2(&VAR_4);
 if (FUNC_3(&VAR_4) > 2 * FUNC_5())
  goto out;

 VAR_11 = FUNC_11(VAR_8, VAR_2, VAR_0, &VAR_5, VAR_10);
 if (!VAR_11)
  goto out;

 FUNC_12(VAR_9, VAR_11);

 VAR_11->sk_allocation = VAR_1;
 VAR_11->sk_write_space = VAR_7;
 VAR_11->sk_max_ack_backlog = VAR_8->unx.sysctl_max_dgram_qlen;
 VAR_11->sk_destruct = VAR_6;
 VAR_12 = FUNC_17(VAR_11);
 VAR_12->path.dentry = ((void*)0);
 VAR_12->path.mnt = ((void*)0);
 FUNC_15(&VAR_12->lock);
 FUNC_4(&VAR_12->inflight, 0);
 FUNC_0(&VAR_12->link);
 FUNC_10(&VAR_12->iolock);
 FUNC_10(&VAR_12->bindlock);
 FUNC_7(&VAR_12->peer_wait);
 FUNC_6(&VAR_12->peer_wake, VAR_3);
 FUNC_16(FUNC_18(VAR_11), VAR_11);
out:
 if (VAR_11 == ((void*)0))
  FUNC_1(&VAR_4);
 else {
  FUNC_8();
  FUNC_14(FUNC_13(VAR_11), VAR_11->sk_prot, 1);
  FUNC_9();
 }
 return VAR_11;
}
