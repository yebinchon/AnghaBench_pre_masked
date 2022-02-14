
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int reestablish_timeout; int max_reconnect_timeout; } ;



void FUNC_0(struct rpc_xprt *VAR_0, unsigned long VAR_1)
{
 VAR_0->reestablish_timeout <<= 1;
 if (VAR_0->reestablish_timeout > VAR_0->max_reconnect_timeout)
  VAR_0->reestablish_timeout = VAR_0->max_reconnect_timeout;
 if (VAR_0->reestablish_timeout < VAR_1)
  VAR_0->reestablish_timeout = VAR_1;
}
