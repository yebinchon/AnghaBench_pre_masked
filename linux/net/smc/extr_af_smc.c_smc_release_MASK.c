
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_state; } ;
struct smc_sock {int connect_work; TYPE_1__* clcsock; scalar_t__ connect_nonblock; } ;
struct TYPE_2__ {int sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct smc_sock*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (struct sock*) ;
 struct smc_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct socket *VAR_4)
{
 struct sock *VAR_5 = VAR_4->sk;
 struct smc_sock *VAR_6;
 int VAR_7 = 0;

 if (!VAR_5)
  goto out;

 VAR_6 = FUNC_5(VAR_5);


 if (VAR_6->connect_nonblock && VAR_5->sk_state == VAR_2)
  FUNC_8(VAR_6->clcsock->sk, VAR_0);
 FUNC_1(&VAR_6->connect_work);

 if (VAR_5->sk_state == VAR_3)



  FUNC_3(VAR_5, VAR_1);
 else
  FUNC_2(VAR_5);

 VAR_7 = FUNC_0(VAR_6);


 FUNC_6(VAR_5);
 VAR_4->sk = ((void*)0);
 FUNC_4(VAR_5);

 FUNC_7(VAR_5);
out:
 return VAR_7;
}
