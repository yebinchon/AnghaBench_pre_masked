
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_state; int sk_shutdown; } ;
struct smc_sock {TYPE_2__* clcsock; scalar_t__ use_fallback; } ;
struct TYPE_4__ {TYPE_1__* sk; } ;
struct TYPE_3__ {int sk_shutdown; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct smc_sock*) ;
 int FUNC_4 (struct smc_sock*) ;
 struct smc_sock* FUNC_5 (struct sock*) ;

__attribute__((used)) static int FUNC_6(struct socket *VAR_10, int VAR_11)
{
 struct sock *VAR_12 = VAR_10->sk;
 struct smc_sock *VAR_13;
 int VAR_14 = -VAR_0;
 int VAR_15 = 0;

 VAR_13 = FUNC_5(VAR_12);

 if ((VAR_11 < 130) || (VAR_11 > 129))
  return VAR_14;

 FUNC_1(VAR_12);

 VAR_14 = -VAR_1;
 if ((VAR_12->sk_state != VAR_3) &&
     (VAR_12->sk_state != VAR_8) &&
     (VAR_12->sk_state != VAR_9) &&
     (VAR_12->sk_state != VAR_4) &&
     (VAR_12->sk_state != VAR_5) &&
     (VAR_12->sk_state != VAR_6))
  goto out;
 if (VAR_13->use_fallback) {
  VAR_14 = FUNC_0(VAR_13->clcsock, VAR_11);
  VAR_12->sk_shutdown = VAR_13->clcsock->sk->sk_shutdown;
  if (VAR_12->sk_shutdown == VAR_2)
   VAR_12->sk_state = VAR_7;
  goto out;
 }
 switch (VAR_11) {
 case 129:
  VAR_14 = FUNC_3(VAR_13);
  break;
 case 128:
  VAR_14 = FUNC_4(VAR_13);
  break;
 case 130:
  VAR_14 = 0;

  break;
 }
 if (VAR_13->clcsock)
  VAR_15 = FUNC_0(VAR_13->clcsock, VAR_11);

 VAR_12->sk_shutdown |= VAR_11 + 1;

out:
 FUNC_2(VAR_12);
 return VAR_14 ? VAR_14 : VAR_15;
}
