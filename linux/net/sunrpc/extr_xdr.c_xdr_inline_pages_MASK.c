
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_buf {unsigned int page_base; unsigned int page_len; unsigned int buflen; struct page** pages; struct kvec* tail; struct kvec* head; } ;
struct page {int dummy; } ;
struct kvec {char* iov_base; unsigned int iov_len; } ;
typedef int __be32 ;



void
FUNC_0(struct xdr_buf *VAR_0, unsigned int VAR_1,
   struct page **VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 struct kvec *VAR_5 = VAR_0->head;
 struct kvec *VAR_6 = VAR_0->tail;
 char *VAR_7 = (char *)VAR_5->iov_base;
 unsigned int VAR_8 = VAR_5->iov_len;

 VAR_5->iov_len = VAR_1;

 VAR_0->pages = VAR_2;
 VAR_0->page_base = VAR_3;
 VAR_0->page_len = VAR_4;

 VAR_6->iov_base = VAR_7 + VAR_1;
 VAR_6->iov_len = VAR_8 - VAR_1;
 if ((VAR_0->page_len & 3) == 0)
  VAR_6->iov_len -= sizeof(__be32);

 VAR_0->buflen += VAR_4;
}
