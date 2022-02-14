
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ qlen; } ;
struct sock {TYPE_1__ sk_write_queue; } ;
struct TYPE_4__ {scalar_t__ dccps_tx_qlen; } ;


 TYPE_2__* FUNC_0 (struct sock*) ;

__attribute__((used)) static bool FUNC_1(struct sock *VAR_0)
{
 return FUNC_0(VAR_0)->dccps_tx_qlen &&
        VAR_0->sk_write_queue.qlen >= FUNC_0(VAR_0)->dccps_tx_qlen;
}
