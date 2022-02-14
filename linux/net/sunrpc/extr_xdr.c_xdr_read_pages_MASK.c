
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {unsigned int nwords; int * page_ptr; int * end; int * p; struct kvec* iov; struct xdr_buf* buf; } ;
struct xdr_buf {struct kvec* tail; } ;
struct kvec {unsigned int iov_len; scalar_t__ iov_base; } ;
typedef int __be32 ;


 void* FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (struct xdr_stream*,unsigned int) ;

unsigned int FUNC_2(struct xdr_stream *VAR_0, unsigned int VAR_1)
{
 struct xdr_buf *VAR_2 = VAR_0->buf;
 struct kvec *VAR_3;
 unsigned int VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;

 VAR_1 = FUNC_1(VAR_0, VAR_1);
 if (VAR_1 == 0)
  return 0;
 VAR_4 = FUNC_0(VAR_1);
 VAR_6 = (VAR_4 << 2) - VAR_1;
 VAR_0->iov = VAR_3 = VAR_2->tail;

 VAR_5 = ((VAR_0->nwords - VAR_4) << 2) + VAR_6;
 if (VAR_5 > VAR_3->iov_len)
  VAR_5 = VAR_3->iov_len;





 VAR_0->p = (__be32 *)((char *)VAR_3->iov_base + VAR_6);
 VAR_0->end = (__be32 *)((char *)VAR_3->iov_base + VAR_5);
 VAR_0->page_ptr = ((void*)0);
 VAR_0->nwords = FUNC_0(VAR_5 - VAR_6);
 return VAR_1;
}
