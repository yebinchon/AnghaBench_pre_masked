
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tx_bytes; scalar_t__ tx_msgs; } ;
struct kcm_psock {TYPE_2__ stats; scalar_t__ saved_tx_bytes; scalar_t__ saved_tx_msgs; } ;
struct TYPE_3__ {int tx_msgs; int tx_bytes; } ;
struct kcm_mux {TYPE_1__ stats; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct kcm_mux *VAR_0,
        struct kcm_psock *VAR_1)
{
 FUNC_0(VAR_0->stats.tx_bytes,
        VAR_1->stats.tx_bytes - VAR_1->saved_tx_bytes);
 VAR_0->stats.tx_msgs +=
  VAR_1->stats.tx_msgs - VAR_1->saved_tx_msgs;
 VAR_1->saved_tx_msgs = VAR_1->stats.tx_msgs;
 VAR_1->saved_tx_bytes = VAR_1->stats.tx_bytes;
}
