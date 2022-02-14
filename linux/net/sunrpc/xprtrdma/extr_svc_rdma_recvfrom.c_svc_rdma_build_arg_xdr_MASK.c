
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_buf {int len; int buflen; scalar_t__ page_base; scalar_t__ page_len; TYPE_2__* tail; TYPE_1__* head; } ;
struct svc_rqst {struct xdr_buf rq_arg; } ;
struct svc_rdma_recv_ctxt {int rc_byte_len; int rc_recv_buf; } ;
struct TYPE_4__ {scalar_t__ iov_len; int * iov_base; } ;
struct TYPE_3__ {int iov_len; int iov_base; } ;



__attribute__((used)) static void FUNC_0(struct svc_rqst *VAR_0,
       struct svc_rdma_recv_ctxt *VAR_1)
{
 struct xdr_buf *VAR_2 = &VAR_0->rq_arg;

 VAR_2->head[0].iov_base = VAR_1->rc_recv_buf;
 VAR_2->head[0].iov_len = VAR_1->rc_byte_len;
 VAR_2->tail[0].iov_base = ((void*)0);
 VAR_2->tail[0].iov_len = 0;
 VAR_2->page_len = 0;
 VAR_2->page_base = 0;
 VAR_2->buflen = VAR_1->rc_byte_len;
 VAR_2->len = VAR_1->rc_byte_len;
}
