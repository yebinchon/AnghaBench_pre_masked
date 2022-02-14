
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct sock {int sk_state; } ;
struct smc_sock {int connect_nonblock; int connect_work; int sk; TYPE_2__* clcsock; } ;
struct TYPE_4__ {int sk; } ;
struct TYPE_3__ {int syn_smc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int FUNC_0 (struct smc_sock*) ;
 int FUNC_1 (TYPE_2__*,struct sockaddr*,int,int) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct smc_sock*) ;
 struct smc_sock* FUNC_6 (struct sock*) ;
 int FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct socket *VAR_7, struct sockaddr *VAR_8,
         int VAR_9, int VAR_10)
{
 struct sock *VAR_11 = VAR_7->sk;
 struct smc_sock *VAR_12;
 int VAR_13 = -VAR_4;

 VAR_12 = FUNC_6(VAR_11);


 if (VAR_9 < sizeof(VAR_8->sa_family))
  goto out_err;
 if (VAR_8->sa_family != VAR_0 && VAR_8->sa_family != VAR_1)
  goto out_err;

 FUNC_2(VAR_11);
 switch (VAR_11->sk_state) {
 default:
  goto out;
 case 129:
  VAR_13 = -VAR_5;
  goto out;
 case 128:
  VAR_13 = 0;
  break;
 }

 FUNC_5(VAR_12);
 FUNC_8(VAR_12->clcsock->sk)->syn_smc = 1;
 if (VAR_12->connect_nonblock) {
  VAR_13 = -VAR_2;
  goto out;
 }
 VAR_13 = FUNC_1(VAR_12->clcsock, VAR_8, VAR_9, VAR_10);
 if (VAR_13 && VAR_13 != -VAR_3)
  goto out;

 FUNC_7(&VAR_12->sk);
 if (VAR_10 & VAR_6) {
  if (FUNC_4(&VAR_12->connect_work))
   VAR_12->connect_nonblock = 1;
  VAR_13 = -VAR_3;
 } else {
  VAR_13 = FUNC_0(VAR_12);
  if (VAR_13 < 0)
   goto out;
  else
   VAR_13 = 0;
 }

out:
 FUNC_3(VAR_11);
out_err:
 return VAR_13;
}
