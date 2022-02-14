
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {void* end; scalar_t__ p; struct xdr_buf* buf; } ;
struct xdr_buf {int len; int buflen; } ;



int FUNC_0(struct xdr_stream *VAR_0, int VAR_1)
{
 struct xdr_buf *VAR_2 = VAR_0->buf;
 int VAR_3 = (void *)VAR_0->end - (void *)VAR_0->p;
 int VAR_4 = VAR_2->len + VAR_3;

 if (VAR_1 < 0 || VAR_1 < VAR_2->len)
  return -1;
 if (VAR_1 > VAR_2->buflen)
  return 0;
 if (VAR_1 < VAR_4)
  VAR_0->end = (void *)VAR_0->end + VAR_1 - VAR_4;
 VAR_2->buflen = VAR_1;
 return 0;
}
