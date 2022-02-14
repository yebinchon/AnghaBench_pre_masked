
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bad_xids; } ;
struct rpc_xprt {TYPE_1__ stat; } ;
struct rpc_rqst {int rq_xtime; int rq_rtt; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct rpc_xprt*,int ,int ) ;
 struct rpc_rqst* FUNC_5 (struct rpc_xprt*,int ) ;

struct rpc_rqst *FUNC_6(struct rpc_xprt *VAR_1, __be32 VAR_2)
{
 struct rpc_rqst *VAR_3;

 VAR_3 = FUNC_5(VAR_1, VAR_2);
 if (VAR_3 != ((void*)0)) {
  FUNC_4(VAR_1, VAR_2, 0);
  VAR_3->rq_rtt = FUNC_2(FUNC_1(), VAR_3->rq_xtime);
  return VAR_3;
 }

 FUNC_0("RPC:       xprt_lookup_rqst did not find xid %08x\n",
   FUNC_3(VAR_2));
 FUNC_4(VAR_1, VAR_2, -VAR_0);
 VAR_1->stat.bad_xids++;
 return ((void*)0);
}
