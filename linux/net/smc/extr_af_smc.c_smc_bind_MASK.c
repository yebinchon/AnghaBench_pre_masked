
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct TYPE_4__ {scalar_t__ s_addr; } ;
struct sockaddr_in {scalar_t__ sin_family; TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_state; int sk_reuse; } ;
struct smc_sock {TYPE_3__* clcsock; scalar_t__ connect_nonblock; } ;
struct TYPE_6__ {TYPE_2__* sk; } ;
struct TYPE_5__ {int sk_reuse; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,struct sockaddr*,int) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 struct smc_sock* FUNC_4 (struct sock*) ;

__attribute__((used)) static int FUNC_5(struct socket *VAR_7, struct sockaddr *VAR_8,
      int VAR_9)
{
 struct sockaddr_in *VAR_10 = (struct sockaddr_in *)VAR_8;
 struct sock *VAR_11 = VAR_7->sk;
 struct smc_sock *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_4(VAR_11);


 VAR_13 = -VAR_4;
 if (VAR_9 < sizeof(struct sockaddr_in))
  goto out;

 VAR_13 = -VAR_3;
 if (VAR_10->sin_family != VAR_0 &&
     VAR_10->sin_family != VAR_1 &&
     VAR_10->sin_family != VAR_2)
  goto out;

 if (VAR_10->sin_family == VAR_2 &&
     VAR_10->sin_addr.s_addr != FUNC_0(VAR_5))
  goto out;

 FUNC_2(VAR_11);


 VAR_13 = -VAR_4;
 if (VAR_11->sk_state != VAR_6 || VAR_12->connect_nonblock)
  goto out_rel;

 VAR_12->clcsock->sk->sk_reuse = VAR_11->sk_reuse;
 VAR_13 = FUNC_1(VAR_12->clcsock, VAR_8, VAR_9);

out_rel:
 FUNC_3(VAR_11);
out:
 return VAR_13;
}
