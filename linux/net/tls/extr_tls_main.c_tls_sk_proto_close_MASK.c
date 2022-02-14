
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tls_context {scalar_t__ tx_conf; scalar_t__ rx_conf; scalar_t__ sk_write_space; TYPE_1__* sk_proto; } ;
struct sock {scalar_t__ sk_write_space; int sk_callback_lock; TYPE_1__* sk_prot; } ;
struct inet_connection_sock {int icsk_ulp_data; } ;
struct TYPE_2__ {int (* close ) (struct sock*,long) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct sock*) ;
 long FUNC_4 (struct sock*,int ) ;
 int FUNC_5 (struct sock*,long) ;
 int FUNC_6 (struct sock*,struct tls_context*) ;
 struct tls_context* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,struct tls_context*,long) ;
 int FUNC_9 (struct tls_context*) ;
 int FUNC_10 (struct tls_context*) ;
 int FUNC_11 (struct tls_context*) ;
 int FUNC_12 (struct tls_context*) ;
 scalar_t__ VAR_3 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct sock *VAR_4, long VAR_5)
{
 struct inet_connection_sock *VAR_6 = FUNC_0(VAR_4);
 struct tls_context *VAR_7 = FUNC_7(VAR_4);
 long VAR_8 = FUNC_4(VAR_4, 0);
 bool VAR_9;

 if (VAR_7->tx_conf == VAR_2)
  FUNC_9(VAR_7);

 FUNC_1(VAR_4);
 VAR_9 = VAR_7->tx_conf != VAR_1 && VAR_7->rx_conf != VAR_1;

 if (VAR_7->tx_conf != VAR_0 || VAR_7->rx_conf != VAR_0)
  FUNC_8(VAR_4, VAR_7, VAR_8);

 FUNC_13(&VAR_4->sk_callback_lock);
 if (VAR_9)
  FUNC_2(VAR_6->icsk_ulp_data, ((void*)0));
 VAR_4->sk_prot = VAR_7->sk_proto;
 if (VAR_4->sk_write_space == VAR_3)
  VAR_4->sk_write_space = VAR_7->sk_write_space;
 FUNC_14(&VAR_4->sk_callback_lock);
 FUNC_3(VAR_4);
 if (VAR_7->tx_conf == VAR_2)
  FUNC_11(VAR_7);
 if (VAR_7->rx_conf == VAR_2 || VAR_7->rx_conf == VAR_1)
  FUNC_12(VAR_7);
 if (VAR_7->rx_conf == VAR_2)
  FUNC_10(VAR_7);
 VAR_7->sk_proto->close(VAR_4, VAR_5);

 if (VAR_9)
  FUNC_6(VAR_4, VAR_7);
}
