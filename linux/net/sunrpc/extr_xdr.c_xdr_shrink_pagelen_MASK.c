
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_buf {unsigned int page_len; unsigned int buflen; scalar_t__ len; scalar_t__ page_base; int pages; TYPE_1__* head; struct kvec* tail; } ;
struct kvec {unsigned int iov_len; scalar_t__ iov_base; } ;
struct TYPE_2__ {unsigned int iov_len; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,scalar_t__,size_t) ;
 int FUNC_2 (char*,scalar_t__,size_t) ;

__attribute__((used)) static unsigned int
FUNC_3(struct xdr_buf *VAR_0, size_t VAR_1)
{
 struct kvec *VAR_2;
 size_t VAR_3;
 unsigned int VAR_4 = VAR_0->page_len;
 unsigned int VAR_5;
 unsigned int VAR_6;

 VAR_6 = 0;
 VAR_2 = VAR_0->tail;
 FUNC_0 (VAR_1 > VAR_4);

 VAR_5 = VAR_0->buflen - VAR_0->head->iov_len - VAR_0->page_len;


 if (VAR_5 != 0) {
  unsigned int VAR_7 = VAR_5 - VAR_2->iov_len;

  if (VAR_1 < VAR_7)
   VAR_7 = VAR_1;
  VAR_2->iov_len += VAR_7;

  VAR_3 = VAR_1;
  if (VAR_2->iov_len > VAR_1) {
   char *VAR_8 = (char *)VAR_2->iov_base + VAR_1;
   FUNC_2(VAR_8, VAR_2->iov_base, VAR_2->iov_len - VAR_1);
   VAR_6 += VAR_2->iov_len - VAR_1;
  } else
   VAR_3 = VAR_2->iov_len;

  FUNC_1((char *)VAR_2->iov_base,
    VAR_0->pages, VAR_0->page_base + VAR_4 - VAR_1,
    VAR_3);
  VAR_6 += VAR_3;
 }
 VAR_0->page_len -= VAR_1;
 VAR_0->buflen -= VAR_1;

 if (VAR_0->len > VAR_0->buflen)
  VAR_0->len = VAR_0->buflen;

 return VAR_6;
}
