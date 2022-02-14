
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {unsigned int page_ptr; int nwords; TYPE_1__* buf; } ;
struct TYPE_2__ {unsigned int pages; int tail; scalar_t__ page_base; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xdr_stream*,int ,int) ;
 scalar_t__ FUNC_1 (struct xdr_stream*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_2(struct xdr_stream *VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = (1 + VAR_2->page_ptr - VAR_2->buf->pages) << VAR_0;
 VAR_3 -= VAR_2->buf->page_base;

 if (FUNC_1(VAR_2, VAR_3, VAR_1) < 0)
  FUNC_0(VAR_2, VAR_2->buf->tail, VAR_2->nwords << 2);
}
