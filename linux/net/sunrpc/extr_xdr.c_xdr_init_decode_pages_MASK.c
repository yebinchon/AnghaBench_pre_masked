
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct xdr_buf {unsigned int page_len; unsigned int buflen; unsigned int len; struct page** pages; } ;
struct page {int dummy; } ;


 int FUNC_0 (struct xdr_buf*,int ,int) ;
 int FUNC_1 (struct xdr_stream*,struct xdr_buf*,int *,int *) ;

void FUNC_2(struct xdr_stream *VAR_0, struct xdr_buf *VAR_1,
      struct page **VAR_2, unsigned int VAR_3)
{
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->pages = VAR_2;
 VAR_1->page_len = VAR_3;
 VAR_1->buflen = VAR_3;
 VAR_1->len = VAR_3;
 FUNC_1(VAR_0, VAR_1, ((void*)0), ((void*)0));
}
