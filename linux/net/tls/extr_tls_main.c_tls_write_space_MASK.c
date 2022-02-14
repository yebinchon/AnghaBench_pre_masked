
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_context {scalar_t__ tx_conf; int (* sk_write_space ) (struct sock*) ;scalar_t__ in_tcp_sendpages; } ;
struct sock {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,struct tls_context*) ;
 struct tls_context* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,struct tls_context*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_1)
{
 struct tls_context *VAR_2 = FUNC_3(VAR_1);





 if (VAR_2->in_tcp_sendpages) {
  VAR_2->sk_write_space(VAR_1);
  return;
 }






  FUNC_4(VAR_1, VAR_2);

 VAR_2->sk_write_space(VAR_1);
}
