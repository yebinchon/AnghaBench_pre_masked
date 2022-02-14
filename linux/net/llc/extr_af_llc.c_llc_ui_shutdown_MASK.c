
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_state; int (* sk_state_change ) (struct sock*) ;int sk_rcvtimeo; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,int ) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct socket *VAR_3, int VAR_4)
{
 struct sock *VAR_5 = VAR_3->sk;
 int VAR_6 = -VAR_1;

 FUNC_2(VAR_5);
 if (FUNC_5(VAR_5->sk_state != VAR_2))
  goto out;
 VAR_6 = -VAR_0;
 if (VAR_4 != 2)
  goto out;
 VAR_6 = FUNC_0(VAR_5);
 if (!VAR_6)
  VAR_6 = FUNC_1(VAR_5, VAR_5->sk_rcvtimeo);

 VAR_5->sk_state_change(VAR_5);
out:
 FUNC_3(VAR_5);
 return VAR_6;
}
