
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_context {void* rx_conf; void* tx_conf; } ;
struct sock {scalar_t__ sk_state; int sk_callback_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 struct tls_context* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,struct tls_context*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct sock *VAR_4)
{
 struct tls_context *VAR_5;
 int VAR_6 = 0;

 if (FUNC_2(VAR_4))
  return 0;







 if (VAR_4->sk_state != VAR_2)
  return -VAR_1;

 FUNC_1(VAR_4);


 FUNC_4(&VAR_4->sk_callback_lock);
 VAR_5 = FUNC_0(VAR_4);
 if (!VAR_5) {
  VAR_6 = -VAR_0;
  goto out;
 }

 VAR_5->tx_conf = VAR_3;
 VAR_5->rx_conf = VAR_3;
 FUNC_3(VAR_4, VAR_5);
out:
 FUNC_5(&VAR_4->sk_callback_lock);
 return VAR_6;
}
