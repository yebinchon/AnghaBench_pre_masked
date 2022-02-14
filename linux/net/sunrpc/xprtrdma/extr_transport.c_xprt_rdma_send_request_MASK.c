
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpcrdma_xprt {int rx_ep; int rx_ia; } ;
struct rpcrdma_req {int dummy; } ;
struct rpc_xprt {scalar_t__ connect_cookie; } ;
struct TYPE_2__ {scalar_t__ len; } ;
struct rpc_rqst {scalar_t__ rq_connect_cookie; int rq_task; TYPE_1__ rq_snd_buf; int rq_xmit_bytes_sent; int rq_xtime; int rq_buffer; struct rpc_xprt* rq_xprt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 struct rpcrdma_req* FUNC_2 (struct rpc_rqst*) ;
 scalar_t__ FUNC_3 (int *,int *,struct rpcrdma_req*) ;
 int FUNC_4 (struct rpcrdma_xprt*,struct rpc_rqst*) ;
 struct rpcrdma_xprt* FUNC_5 (struct rpc_xprt*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct rpc_xprt*) ;
 int FUNC_8 (struct rpc_rqst*) ;
 int FUNC_9 (struct rpc_xprt*) ;
 int FUNC_10 (struct rpc_xprt*,struct rpc_rqst*) ;

__attribute__((used)) static int
FUNC_11(struct rpc_rqst *VAR_2)
{
 struct rpc_xprt *VAR_3 = VAR_2->rq_xprt;
 struct rpcrdma_req *VAR_4 = FUNC_2(VAR_2);
 struct rpcrdma_xprt *VAR_5 = FUNC_5(VAR_3);
 int VAR_6 = 0;






 if (!FUNC_7(VAR_3))
  return -VAR_1;

 if (!FUNC_10(VAR_3, VAR_2))
  return -VAR_0;

 VAR_6 = FUNC_4(VAR_5, VAR_2);
 if (VAR_6 < 0)
  goto failed_marshal;


 if (VAR_2->rq_connect_cookie == VAR_3->connect_cookie)
  goto drop_connection;
 VAR_2->rq_xtime = FUNC_0();

 if (FUNC_3(&VAR_5->rx_ia, &VAR_5->rx_ep, VAR_4))
  goto drop_connection;

 VAR_2->rq_xmit_bytes_sent += VAR_2->rq_snd_buf.len;




 if (!FUNC_1(VAR_2->rq_task))
  goto drop_connection;
 return 0;

failed_marshal:
 if (VAR_6 != -VAR_1)
  return VAR_6;
drop_connection:
 FUNC_9(VAR_3);
 return -VAR_1;
}
