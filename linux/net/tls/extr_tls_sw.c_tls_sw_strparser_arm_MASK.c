
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_sw_context_rx {int strp; int saved_data_ready; } ;
struct tls_context {int dummy; } ;
struct sock {int sk_callback_lock; int sk_data_ready; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 struct tls_sw_context_rx* FUNC_1 (struct tls_context*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct sock *VAR_1, struct tls_context *VAR_2)
{
 struct tls_sw_context_rx *VAR_3 = FUNC_1(VAR_2);

 FUNC_2(&VAR_1->sk_callback_lock);
 VAR_3->saved_data_ready = VAR_1->sk_data_ready;
 VAR_1->sk_data_ready = VAR_0;
 FUNC_3(&VAR_1->sk_callback_lock);

 FUNC_0(&VAR_3->strp);
}
