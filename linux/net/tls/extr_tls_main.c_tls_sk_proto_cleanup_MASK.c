
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iv; int rec_seq; } ;
struct tls_context {scalar_t__ tx_conf; scalar_t__ rx_conf; TYPE_1__ tx; } ;
struct sock {int sk_write_pending; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct sock*,long*) ;

__attribute__((used)) static void FUNC_8(struct sock *VAR_2,
     struct tls_context *VAR_3, long VAR_4)
{
 if (FUNC_6(VAR_2->sk_write_pending) &&
     !FUNC_7(VAR_2, &VAR_4))
  FUNC_3(VAR_2, 0);


 if (VAR_3->tx_conf == VAR_1) {
  FUNC_0(VAR_3->tx.rec_seq);
  FUNC_0(VAR_3->tx.iv);
  FUNC_5(VAR_2);
 } else if (VAR_3->tx_conf == VAR_0) {
  FUNC_1(VAR_2);
 }

 if (VAR_3->rx_conf == VAR_1)
  FUNC_4(VAR_2);
 else if (VAR_3->rx_conf == VAR_0)
  FUNC_2(VAR_2);
}
