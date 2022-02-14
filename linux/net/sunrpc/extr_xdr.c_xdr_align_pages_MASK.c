
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {unsigned int nwords; struct xdr_buf* buf; } ;
struct xdr_buf {unsigned int len; unsigned int page_len; struct kvec* head; } ;
struct kvec {unsigned int iov_len; } ;


 void* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct xdr_stream*,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (struct xdr_buf*,unsigned int) ;
 unsigned int FUNC_3 (struct xdr_buf*,unsigned int) ;
 unsigned int FUNC_4 (struct xdr_stream*) ;

__attribute__((used)) static unsigned int FUNC_5(struct xdr_stream *VAR_0, unsigned int VAR_1)
{
 struct xdr_buf *VAR_2 = VAR_0->buf;
 struct kvec *VAR_3;
 unsigned int VAR_4 = FUNC_0(VAR_1);
 unsigned int VAR_5 = FUNC_4(VAR_0);
 unsigned int VAR_6, VAR_7;

 if (VAR_0->nwords == 0)
  return 0;


 VAR_3 = VAR_2->head;
 if (VAR_3->iov_len > VAR_5) {
  VAR_7 = VAR_3->iov_len - VAR_5;
  VAR_6 = FUNC_2(VAR_2, VAR_7);
  FUNC_1(VAR_0, VAR_7, VAR_6);
  VAR_0->nwords = FUNC_0(VAR_2->len - VAR_5);
 }

 if (VAR_4 > VAR_0->nwords) {
  VAR_4 = VAR_0->nwords;
  VAR_1 = VAR_4 << 2;
 }
 if (VAR_2->page_len <= VAR_1)
  VAR_1 = VAR_2->page_len;
 else if (VAR_4 < VAR_0->nwords) {

  VAR_7 = VAR_2->page_len - VAR_1;
  VAR_6 = FUNC_3(VAR_2, VAR_7);
  FUNC_1(VAR_0, VAR_7, VAR_6);
  VAR_0->nwords = FUNC_0(VAR_2->len - VAR_5);
 }
 return VAR_1;
}
