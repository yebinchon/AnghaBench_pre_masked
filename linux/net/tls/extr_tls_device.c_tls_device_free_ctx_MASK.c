
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iv; int rec_seq; } ;
struct tls_context {scalar_t__ tx_conf; scalar_t__ rx_conf; TYPE_1__ tx; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct tls_context*) ;
 int FUNC_2 (struct tls_context*) ;
 int FUNC_3 (struct tls_context*) ;

__attribute__((used)) static void FUNC_4(struct tls_context *VAR_1)
{
 if (VAR_1->tx_conf == VAR_0) {
  FUNC_0(FUNC_3(VAR_1));
  FUNC_0(VAR_1->tx.rec_seq);
  FUNC_0(VAR_1->tx.iv);
 }

 if (VAR_1->rx_conf == VAR_0)
  FUNC_0(FUNC_2(VAR_1));

 FUNC_1(((void*)0), VAR_1);
}
