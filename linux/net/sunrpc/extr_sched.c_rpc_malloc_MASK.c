
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int tk_pid; struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {size_t rq_callsize; size_t rq_rcvsize; char* rq_rbuffer; scalar_t__ rq_buffer; } ;
struct rpc_buffer {size_t len; scalar_t__ data; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (struct rpc_task*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int ,size_t,struct rpc_buffer*) ;
 struct rpc_buffer* FUNC_2 (size_t,int) ;
 struct rpc_buffer* FUNC_3 (int ,int) ;
 int VAR_6 ;

int FUNC_4(struct rpc_task *VAR_7)
{
 struct rpc_rqst *VAR_8 = VAR_7->tk_rqstp;
 size_t VAR_9 = VAR_8->rq_callsize + VAR_8->rq_rcvsize;
 struct rpc_buffer *VAR_10;
 gfp_t VAR_11 = VAR_1;

 if (FUNC_0(VAR_7))
  VAR_11 = VAR_4 | VAR_2 | VAR_5;

 VAR_9 += sizeof(struct rpc_buffer);
 if (VAR_9 <= VAR_3)
  VAR_10 = FUNC_3(VAR_6, VAR_11);
 else
  VAR_10 = FUNC_2(VAR_9, VAR_11);

 if (!VAR_10)
  return -VAR_0;

 VAR_10->len = VAR_9;
 FUNC_1("RPC: %5u allocated buffer of size %zu at %p\n",
   VAR_7->tk_pid, VAR_9, VAR_10);
 VAR_8->rq_buffer = VAR_10->data;
 VAR_8->rq_rbuffer = (char *)VAR_8->rq_buffer + VAR_8->rq_callsize;
 return 0;
}
