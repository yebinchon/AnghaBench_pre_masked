
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bytes; scalar_t__ msgs; } ;
struct TYPE_5__ {TYPE_1__ stats; } ;
struct kcm_psock {TYPE_2__ strp; scalar_t__ saved_rx_bytes; scalar_t__ saved_rx_msgs; } ;
struct TYPE_6__ {int rx_msgs; int rx_bytes; } ;
struct kcm_mux {TYPE_3__ stats; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct kcm_mux *VAR_0,
        struct kcm_psock *VAR_1)
{
 FUNC_0(VAR_0->stats.rx_bytes,
         VAR_1->strp.stats.bytes -
         VAR_1->saved_rx_bytes);
 VAR_0->stats.rx_msgs +=
  VAR_1->strp.stats.msgs - VAR_1->saved_rx_msgs;
 VAR_1->saved_rx_msgs = VAR_1->strp.stats.msgs;
 VAR_1->saved_rx_bytes = VAR_1->strp.stats.bytes;
}
