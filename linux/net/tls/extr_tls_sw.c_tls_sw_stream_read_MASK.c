
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_sw_context_rx {int rx_list; scalar_t__ recv_pkt; } ;
struct tls_context {int dummy; } ;
struct sock {int dummy; } ;
struct sk_psock {int ingress_msg; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct sk_psock* FUNC_3 (struct sock const*) ;
 int FUNC_4 (int *) ;
 struct tls_context* FUNC_5 (struct sock const*) ;
 struct tls_sw_context_rx* FUNC_6 (struct tls_context*) ;

bool FUNC_7(const struct sock *VAR_0)
{
 struct tls_context *VAR_1 = FUNC_5(VAR_0);
 struct tls_sw_context_rx *VAR_2 = FUNC_6(VAR_1);
 bool VAR_3 = 1;
 struct sk_psock *VAR_4;

 FUNC_1();
 VAR_4 = FUNC_3(VAR_0);
 if (VAR_4)
  VAR_3 = FUNC_0(&VAR_4->ingress_msg);
 FUNC_2();

 return !VAR_3 || VAR_2->recv_pkt ||
  !FUNC_4(&VAR_2->rx_list);
}
