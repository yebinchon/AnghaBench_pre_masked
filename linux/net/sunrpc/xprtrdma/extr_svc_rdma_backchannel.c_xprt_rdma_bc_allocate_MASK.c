
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {size_t rq_callsize; int rq_rbuffer; int rq_rcvsize; int rq_buffer; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,size_t) ;
 struct page* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;

__attribute__((used)) static int
FUNC_5(struct rpc_task *VAR_4)
{
 struct rpc_rqst *VAR_5 = VAR_4->tk_rqstp;
 size_t VAR_6 = VAR_5->rq_callsize;
 struct page *VAR_7;

 if (VAR_6 > VAR_2) {
  FUNC_0(1, "svcrdma: large bc buffer request (size %zu)\n",
     VAR_6);
  return -VAR_0;
 }

 VAR_7 = FUNC_1(VAR_3);
 if (!VAR_7)
  return -VAR_1;
 VAR_5->rq_buffer = FUNC_3(VAR_7);

 VAR_5->rq_rbuffer = FUNC_2(VAR_5->rq_rcvsize, VAR_3);
 if (!VAR_5->rq_rbuffer) {
  FUNC_4(VAR_7);
  return -VAR_1;
 }
 return 0;
}
