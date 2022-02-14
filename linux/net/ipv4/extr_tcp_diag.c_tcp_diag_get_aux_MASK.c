
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_ulp_ops {int dummy; } ;
struct tcp_md5sig_info {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct inet_connection_sock {struct tcp_ulp_ops* icsk_ulp_ops; } ;
struct TYPE_2__ {int md5sig_info; } ;


 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 struct tcp_md5sig_info* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct sk_buff*,struct tcp_md5sig_info*) ;
 int FUNC_5 (struct sk_buff*,struct sock*,struct tcp_ulp_ops const*) ;
 TYPE_1__* FUNC_6 (struct sock*) ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_0, bool VAR_1,
       struct sk_buff *VAR_2)
{
 struct inet_connection_sock *VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = 0;
 if (VAR_1) {
  const struct tcp_ulp_ops *VAR_5;

  VAR_5 = VAR_3->icsk_ulp_ops;
  if (VAR_5)
   VAR_4 = FUNC_5(VAR_2, VAR_0, VAR_5);
  if (VAR_4)
   return VAR_4;
 }
 return 0;
}
