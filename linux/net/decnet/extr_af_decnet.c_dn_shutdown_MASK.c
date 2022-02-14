
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ state; struct sock* sk; } ;
struct sock {int sk_shutdown; } ;
struct dn_scp {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 struct dn_scp* FUNC_0 (struct sock*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_7, int VAR_8)
{
 struct sock *VAR_9 = VAR_7->sk;
 struct dn_scp *VAR_10 = FUNC_0(VAR_9);
 int VAR_11 = -VAR_2;

 FUNC_2(VAR_9);

 if (VAR_7->state == VAR_6)
  goto out;

 VAR_11 = 0;
 if (VAR_7->state == VAR_5)
  goto out;

 VAR_11 = -VAR_1;
 if (VAR_10->state == VAR_0)
  goto out;

 if (VAR_8 != VAR_4)
  goto out;

 VAR_9->sk_shutdown = VAR_3;
 FUNC_1(VAR_9);
 VAR_11 = 0;

out:
 FUNC_3(VAR_9);

 return VAR_11;
}
