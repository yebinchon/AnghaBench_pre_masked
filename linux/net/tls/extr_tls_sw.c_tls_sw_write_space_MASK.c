
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int work; } ;
struct tls_sw_context_tx {TYPE_1__ tx_work; int tx_bitmask; } ;
struct tls_context {int dummy; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tls_sw_context_tx*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int *) ;
 struct tls_sw_context_tx* FUNC_3 (struct tls_context*) ;

void FUNC_4(struct sock *VAR_1, struct tls_context *VAR_2)
{
 struct tls_sw_context_tx *VAR_3 = FUNC_3(VAR_2);


 if (FUNC_0(VAR_3) &&
     !FUNC_2(VAR_0, &VAR_3->tx_bitmask))
  FUNC_1(&VAR_3->tx_work.work, 0);
}
