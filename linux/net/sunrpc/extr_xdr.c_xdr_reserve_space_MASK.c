
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_stream {TYPE_2__* buf; TYPE_1__* iov; int * p; int * end; } ;
typedef int __be32 ;
struct TYPE_4__ {size_t page_len; size_t len; } ;
struct TYPE_3__ {size_t iov_len; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct xdr_stream*) ;
 int * FUNC_2 (struct xdr_stream*,size_t) ;

__be32 * FUNC_3(struct xdr_stream *VAR_0, size_t VAR_1)
{
 __be32 *VAR_2 = VAR_0->p;
 __be32 *VAR_3;

 FUNC_1(VAR_0);

 VAR_1 += 3;
 VAR_1 &= ~3;
 VAR_3 = VAR_2 + (VAR_1 >> 2);
 if (FUNC_0(VAR_3 > VAR_0->end || VAR_3 < VAR_2))
  return FUNC_2(VAR_0, VAR_1);
 VAR_0->p = VAR_3;
 if (VAR_0->iov)
  VAR_0->iov->iov_len += VAR_1;
 else
  VAR_0->buf->page_len += VAR_1;
 VAR_0->buf->len += VAR_1;
 return VAR_2;
}
