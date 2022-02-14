
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_ulp_ops {int (* init ) (struct sock*) ;int owner; } ;
struct sock {int dummy; } ;
struct inet_connection_sock {struct tcp_ulp_ops const* icsk_ulp_ops; } ;


 int VAR_0 ;
 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sock*) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_1, const struct tcp_ulp_ops *VAR_2)
{
 struct inet_connection_sock *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 VAR_4 = -VAR_0;
 if (VAR_3->icsk_ulp_ops)
  goto out_err;

 VAR_4 = VAR_2->init(VAR_1);
 if (VAR_4)
  goto out_err;

 VAR_3->icsk_ulp_ops = VAR_2;
 return 0;
out_err:
 FUNC_1(VAR_2->owner);
 return VAR_4;
}
