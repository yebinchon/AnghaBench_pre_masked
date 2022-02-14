
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {scalar_t__ iov; int nwords; scalar_t__ p; scalar_t__ end; TYPE_1__* buf; int * page_ptr; } ;
struct TYPE_2__ {scalar_t__ head; int tail; } ;


 int VAR_0 ;
 int FUNC_0 (struct xdr_stream*,int ,int) ;
 int FUNC_1 (struct xdr_stream*) ;
 scalar_t__ FUNC_2 (struct xdr_stream*,int ,int ) ;

__attribute__((used)) static bool FUNC_3(struct xdr_stream *VAR_1)
{
 if (VAR_1->page_ptr != ((void*)0))
  FUNC_1(VAR_1);
 else if (VAR_1->iov == VAR_1->buf->head) {
  if (FUNC_2(VAR_1, 0, VAR_0) < 0)
   FUNC_0(VAR_1, VAR_1->buf->tail, VAR_1->nwords << 2);
 }
 return VAR_1->p != VAR_1->end;
}
