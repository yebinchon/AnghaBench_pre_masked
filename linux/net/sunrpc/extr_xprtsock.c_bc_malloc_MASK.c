
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {size_t rq_callsize; char* rq_rbuffer; scalar_t__ rq_buffer; } ;
struct rpc_buffer {int len; scalar_t__ data; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,size_t) ;
 struct page* FUNC_1 (int ) ;
 struct rpc_buffer* FUNC_2 (struct page*) ;

__attribute__((used)) static int FUNC_3(struct rpc_task *VAR_4)
{
 struct rpc_rqst *VAR_5 = VAR_4->tk_rqstp;
 size_t VAR_6 = VAR_5->rq_callsize;
 struct page *VAR_7;
 struct rpc_buffer *VAR_8;

 if (VAR_6 > VAR_3 - sizeof(struct rpc_buffer)) {
  FUNC_0(1, "xprtsock: large bc buffer request (size %zu)\n",
     VAR_6);
  return -VAR_0;
 }

 VAR_7 = FUNC_1(VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_8 = FUNC_2(VAR_7);
 VAR_8->len = VAR_3;

 VAR_5->rq_buffer = VAR_8->data;
 VAR_5->rq_rbuffer = (char *)VAR_5->rq_buffer + VAR_5->rq_callsize;
 return 0;
}
