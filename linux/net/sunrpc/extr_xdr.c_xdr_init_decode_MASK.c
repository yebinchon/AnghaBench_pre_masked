
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ iov_len; int * iov_base; } ;
struct xdr_stream {struct rpc_rqst* rqst; int * p; int nwords; int * end; TYPE_1__ scratch; struct xdr_buf* buf; } ;
struct xdr_buf {scalar_t__ page_len; int len; TYPE_2__* head; } ;
struct rpc_rqst {int dummy; } ;
typedef int __be32 ;
struct TYPE_4__ {scalar_t__ iov_len; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct xdr_stream*,TYPE_2__*,int ) ;
 int FUNC_2 (struct xdr_stream*,int ,int ) ;

void FUNC_3(struct xdr_stream *VAR_0, struct xdr_buf *VAR_1, __be32 *VAR_2,
       struct rpc_rqst *VAR_3)
{
 VAR_0->buf = VAR_1;
 VAR_0->scratch.iov_base = ((void*)0);
 VAR_0->scratch.iov_len = 0;
 VAR_0->nwords = FUNC_0(VAR_1->len);
 if (VAR_1->head[0].iov_len != 0)
  FUNC_1(VAR_0, VAR_1->head, VAR_1->len);
 else if (VAR_1->page_len != 0)
  FUNC_2(VAR_0, 0, VAR_1->len);
 else
  FUNC_1(VAR_0, VAR_1->head, VAR_1->len);
 if (VAR_2 != ((void*)0) && VAR_2 > VAR_0->p && VAR_0->end >= VAR_2) {
  VAR_0->nwords -= VAR_2 - VAR_0->p;
  VAR_0->p = VAR_2;
 }
 VAR_0->rqst = VAR_3;
}
