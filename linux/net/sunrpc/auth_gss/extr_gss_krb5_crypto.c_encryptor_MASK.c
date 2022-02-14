
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_buf {int page_len; int page_base; TYPE_1__* head; } ;
struct scatterlist {int length; scalar_t__ offset; } ;
struct page {int dummy; } ;
struct encryptor_desc {int fraglen; int fragno; int pos; int * infrags; int * outfrags; int req; int iv; struct page** pages; struct xdr_buf* outbuf; } ;
struct crypto_sync_skcipher {int dummy; } ;
struct TYPE_2__ {int iov_len; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct crypto_sync_skcipher*) ;
 struct crypto_sync_skcipher* FUNC_3 (int ) ;
 int FUNC_4 (int *,struct page*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 struct page* FUNC_7 (struct scatterlist*) ;
 int FUNC_8 (int *,struct page*,int,scalar_t__) ;
 int FUNC_9 (int ,int *,int *,int,int ) ;

__attribute__((used)) static int
FUNC_10(struct scatterlist *VAR_1, void *VAR_2)
{
 struct encryptor_desc *VAR_3 = VAR_2;
 struct xdr_buf *VAR_4 = VAR_3->outbuf;
 struct crypto_sync_skcipher *VAR_5 =
  FUNC_3(VAR_3->req);
 struct page *VAR_6;
 int VAR_7 = VAR_3->fraglen + VAR_1->length;
 int VAR_8, VAR_9;
 int VAR_10;



 FUNC_0(VAR_3->fragno > 3);

 VAR_10 = VAR_3->pos - VAR_4->head[0].iov_len;
 if (VAR_10 >= 0 && VAR_10 < VAR_4->page_len) {

  int VAR_11 = (VAR_10 + VAR_4->page_base) >> VAR_0;
  VAR_6 = VAR_3->pages[VAR_11];
 } else {
  VAR_6 = FUNC_7(VAR_1);
 }
 FUNC_8(&VAR_3->infrags[VAR_3->fragno], VAR_6, VAR_1->length,
      VAR_1->offset);
 FUNC_8(&VAR_3->outfrags[VAR_3->fragno], FUNC_7(VAR_1), VAR_1->length,
      VAR_1->offset);
 VAR_3->fragno++;
 VAR_3->fraglen += VAR_1->length;
 VAR_3->pos += VAR_1->length;

 VAR_8 = VAR_7 & (FUNC_2(VAR_5) - 1);
 VAR_7 -= VAR_8;

 if (VAR_7 == 0)
  return 0;

 FUNC_6(&VAR_3->infrags[VAR_3->fragno - 1]);
 FUNC_6(&VAR_3->outfrags[VAR_3->fragno - 1]);

 FUNC_9(VAR_3->req, VAR_3->infrags, VAR_3->outfrags,
       VAR_7, VAR_3->iv);

 VAR_9 = FUNC_1(VAR_3->req);
 if (VAR_9)
  return VAR_9;

 FUNC_5(VAR_3->infrags, 4);
 FUNC_5(VAR_3->outfrags, 4);

 if (VAR_8) {
  FUNC_8(&VAR_3->outfrags[0], FUNC_7(VAR_1), VAR_8,
    VAR_1->offset + VAR_1->length - VAR_8);
  VAR_3->infrags[0] = VAR_3->outfrags[0];
  FUNC_4(&VAR_3->infrags[0], VAR_6);
  VAR_3->fragno = 1;
  VAR_3->fraglen = VAR_8;
 } else {
  VAR_3->fragno = 0;
  VAR_3->fraglen = 0;
 }
 return 0;
}
