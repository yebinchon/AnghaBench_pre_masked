
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_iostats {scalar_t__ om_error_status; void* om_execute; void* om_rtt; void* om_queue; scalar_t__ om_bytes_recv; scalar_t__ om_bytes_sent; scalar_t__ om_timeouts; scalar_t__ om_ntrans; scalar_t__ om_ops; } ;


 void* FUNC_0 (void*,void*) ;

__attribute__((used)) static void FUNC_1(struct rpc_iostats *VAR_0, struct rpc_iostats *VAR_1)
{
 VAR_0->om_ops += VAR_1->om_ops;
 VAR_0->om_ntrans += VAR_1->om_ntrans;
 VAR_0->om_timeouts += VAR_1->om_timeouts;
 VAR_0->om_bytes_sent += VAR_1->om_bytes_sent;
 VAR_0->om_bytes_recv += VAR_1->om_bytes_recv;
 VAR_0->om_queue = FUNC_0(VAR_0->om_queue, VAR_1->om_queue);
 VAR_0->om_rtt = FUNC_0(VAR_0->om_rtt, VAR_1->om_rtt);
 VAR_0->om_execute = FUNC_0(VAR_0->om_execute, VAR_1->om_execute);
 VAR_0->om_error_status += VAR_1->om_error_status;
}
