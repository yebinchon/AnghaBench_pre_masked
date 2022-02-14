
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_sw_context_rx {int decrypted; int (* saved_data_ready ) (int ) ;struct sk_buff* recv_pkt; } ;
struct tls_context {int dummy; } ;
struct strparser {int sk; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct strparser*) ;
 int FUNC_1 (int ) ;
 struct tls_context* FUNC_2 (int ) ;
 struct tls_sw_context_rx* FUNC_3 (struct tls_context*) ;

__attribute__((used)) static void FUNC_4(struct strparser *VAR_0, struct sk_buff *VAR_1)
{
 struct tls_context *VAR_2 = FUNC_2(VAR_0->sk);
 struct tls_sw_context_rx *VAR_3 = FUNC_3(VAR_2);

 VAR_3->decrypted = 0;

 VAR_3->recv_pkt = VAR_1;
 FUNC_0(VAR_0);

 VAR_3->saved_data_ready(VAR_0->sk);
}
