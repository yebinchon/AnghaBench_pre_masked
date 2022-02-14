
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {struct rpc_rqst* rqst; int * p; int * end; struct kvec* iov; struct xdr_buf* buf; } ;
struct xdr_buf {int buflen; int page_len; size_t len; TYPE_1__* tail; struct kvec* head; } ;
struct rpc_rqst {int dummy; } ;
struct kvec {int iov_len; scalar_t__ iov_base; } ;
typedef int __be32 ;
struct TYPE_2__ {int iov_len; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct xdr_stream*,int *,int ) ;

void FUNC_2(struct xdr_stream *VAR_0, struct xdr_buf *VAR_1, __be32 *VAR_2,
       struct rpc_rqst *VAR_3)
{
 struct kvec *VAR_4 = VAR_1->head;
 int VAR_5 = VAR_1->buflen - VAR_1->page_len - VAR_1->tail[0].iov_len;

 FUNC_1(VAR_0, ((void*)0), 0);
 FUNC_0(VAR_5 < 0);
 VAR_0->buf = VAR_1;
 VAR_0->iov = VAR_4;
 VAR_0->p = (__be32 *)((char *)VAR_4->iov_base + VAR_4->iov_len);
 VAR_0->end = (__be32 *)((char *)VAR_4->iov_base + VAR_5);
 FUNC_0(VAR_4->iov_len > VAR_5);

 if (VAR_2 != VAR_0->p && VAR_2 != ((void*)0)) {
  size_t VAR_6;

  FUNC_0(VAR_2 < VAR_0->p || VAR_2 > VAR_0->end);
  VAR_6 = (char *)VAR_2 - (char *)VAR_0->p;
  VAR_0->p = VAR_2;
  VAR_1->len += VAR_6;
  VAR_4->iov_len += VAR_6;
 }
 VAR_0->rqst = VAR_3;
}
