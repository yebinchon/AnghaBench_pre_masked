
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ offset; } ;
struct sock_xprt {TYPE_1__ xmit; } ;
struct rpc_rqst {scalar_t__ rq_bytes_sent; } ;



__attribute__((used)) static bool
FUNC_0(struct sock_xprt *VAR_0, struct rpc_rqst *VAR_1)
{
 return VAR_0->xmit.offset != 0 && VAR_1->rq_bytes_sent == 0;
}
