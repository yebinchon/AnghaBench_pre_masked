
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_sw_context_rx {int (* saved_data_ready ) (struct sock*) ;int strp; } ;
struct tls_context {int dummy; } ;
struct sock {int dummy; } ;
struct sk_psock {int ingress_msg; } ;


 int FUNC_0 (int *) ;
 struct sk_psock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,struct sk_psock*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sock*) ;
 struct tls_context* FUNC_5 (struct sock*) ;
 struct tls_sw_context_rx* FUNC_6 (struct tls_context*) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_0)
{
 struct tls_context *VAR_1 = FUNC_5(VAR_0);
 struct tls_sw_context_rx *VAR_2 = FUNC_6(VAR_1);
 struct sk_psock *VAR_3;

 FUNC_3(&VAR_2->strp);

 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3 && !FUNC_0(&VAR_3->ingress_msg)) {
  VAR_2->saved_data_ready(VAR_0);
  FUNC_2(VAR_0, VAR_3);
 }
}
