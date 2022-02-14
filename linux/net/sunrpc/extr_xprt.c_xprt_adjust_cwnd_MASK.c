
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {unsigned long cwnd; unsigned long cong; } ;
struct rpc_task {struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (struct rpc_xprt*) ;
 int FUNC_1 (struct rpc_xprt*) ;
 int FUNC_2 (struct rpc_xprt*,struct rpc_rqst*) ;
 int FUNC_3 (char*,unsigned long,unsigned long,unsigned long) ;

void FUNC_4(struct rpc_xprt *VAR_2, struct rpc_task *VAR_3, int VAR_4)
{
 struct rpc_rqst *VAR_5 = VAR_3->tk_rqstp;
 unsigned long VAR_6 = VAR_2->cwnd;

 if (VAR_4 >= 0 && VAR_6 <= VAR_2->cong) {


  VAR_6 += (VAR_1 * VAR_1 + (VAR_6 >> 1)) / VAR_6;
  if (VAR_6 > FUNC_0(VAR_2))
   VAR_6 = FUNC_0(VAR_2);
  FUNC_1(VAR_2);
 } else if (VAR_4 == -VAR_0) {
  VAR_6 >>= 1;
  if (VAR_6 < VAR_1)
   VAR_6 = VAR_1;
 }
 FUNC_3("RPC:       cong %ld, cwnd was %ld, now %ld\n",
   VAR_2->cong, VAR_2->cwnd, VAR_6);
 VAR_2->cwnd = VAR_6;
 FUNC_2(VAR_2, VAR_5);
}
