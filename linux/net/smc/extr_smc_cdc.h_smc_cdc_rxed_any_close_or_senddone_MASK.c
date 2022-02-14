
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ peer_done_writing; } ;
struct TYPE_4__ {TYPE_1__ conn_state_flags; } ;
struct smc_connection {TYPE_2__ local_rx_ctrl; } ;


 scalar_t__ FUNC_0 (struct smc_connection*) ;

__attribute__((used)) static inline bool FUNC_1(
 struct smc_connection *VAR_0)
{
 return FUNC_0(VAR_0) ||
        VAR_0->local_rx_ctrl.conn_state_flags.peer_done_writing;
}
