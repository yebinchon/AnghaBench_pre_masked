
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {scalar_t__ type; int * ops; } ;
struct sock {int dummy; } ;
struct TYPE_4__ {void* sk_rcvbuf; void* sk_sndbuf; } ;
struct smc_sock {int use_fallback; TYPE_3__* clcsock; TYPE_1__ sk; scalar_t__ fallback_rsn; } ;
struct net {int dummy; } ;
struct TYPE_6__ {TYPE_2__* sk; } ;
struct TYPE_5__ {int sk_rcvbuf; int sk_sndbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sock*) ;
 struct smc_sock* FUNC_2 (struct sock*) ;
 struct sock* FUNC_3 (struct net*,struct socket*,int) ;
 int VAR_10 ;
 int FUNC_4 (struct net*,int,scalar_t__,int ,TYPE_3__**) ;

__attribute__((used)) static int FUNC_5(struct net *VAR_11, struct socket *VAR_12, int VAR_13,
        int VAR_14)
{
 int VAR_15 = (VAR_13 == VAR_7) ? VAR_5 : VAR_4;
 struct smc_sock *VAR_16;
 struct sock *VAR_17;
 int VAR_18;

 VAR_18 = -VAR_2;
 if (VAR_12->type != VAR_9)
  goto out;

 VAR_18 = -VAR_1;
 if (VAR_13 != VAR_6 && VAR_13 != VAR_7)
  goto out;

 VAR_18 = -VAR_0;
 VAR_12->ops = &VAR_10;
 VAR_17 = FUNC_3(VAR_11, VAR_12, VAR_13);
 if (!VAR_17)
  goto out;


 VAR_16 = FUNC_2(VAR_17);
 VAR_16->use_fallback = 0;
 VAR_16->fallback_rsn = 0;
 VAR_18 = FUNC_4(VAR_11, VAR_15, VAR_9, VAR_3,
         &VAR_16->clcsock);
 if (VAR_18) {
  FUNC_1(VAR_17);
  goto out;
 }
 VAR_16->sk.sk_sndbuf = FUNC_0(VAR_16->clcsock->sk->sk_sndbuf, VAR_8);
 VAR_16->sk.sk_rcvbuf = FUNC_0(VAR_16->clcsock->sk->sk_rcvbuf, VAR_8);

out:
 return VAR_18;
}
