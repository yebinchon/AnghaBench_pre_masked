
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_timeout {unsigned long to_initval; unsigned long to_maxval; } ;
struct rpcrdma_xprt {struct rpc_timeout rx_timeout; } ;
struct rpc_xprt {unsigned long connect_timeout; unsigned long max_reconnect_timeout; int transport_lock; struct rpc_timeout* timeout; } ;


 unsigned long VAR_0 ;
 struct rpcrdma_xprt* FUNC_0 (struct rpc_xprt*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rpcrdma_xprt*,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct rpc_xprt *VAR_1,
       unsigned long VAR_2,
       unsigned long VAR_3)
{
 struct rpcrdma_xprt *VAR_4 = FUNC_0(VAR_1);

 FUNC_3(VAR_4, VAR_2, VAR_3);

 FUNC_1(&VAR_1->transport_lock);

 if (VAR_2 < VAR_1->connect_timeout) {
  struct rpc_timeout VAR_5;
  unsigned long VAR_6;

  VAR_5 = *VAR_1->timeout;
  VAR_6 = VAR_2;
  if (VAR_6 < VAR_0 << 1)
   VAR_6 = VAR_0 << 1;
  VAR_5.to_initval = VAR_6;
  VAR_5.to_maxval = VAR_6;
  VAR_4->rx_timeout = VAR_5;
  VAR_1->timeout = &VAR_4->rx_timeout;
  VAR_1->connect_timeout = VAR_2;
 }

 if (VAR_3 < VAR_1->max_reconnect_timeout)
  VAR_1->max_reconnect_timeout = VAR_3;

 FUNC_2(&VAR_1->transport_lock);
}
