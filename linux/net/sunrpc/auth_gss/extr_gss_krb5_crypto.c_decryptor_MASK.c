
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int length; scalar_t__ offset; } ;
struct decryptor_desc {int fraglen; int fragno; int * frags; int req; int iv; } ;
struct crypto_sync_skcipher {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct crypto_sync_skcipher*) ;
 struct crypto_sync_skcipher* FUNC_3 (int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct scatterlist*) ;
 int FUNC_7 (int *,int ,int,scalar_t__) ;
 int FUNC_8 (int ,int *,int *,int,int ) ;

__attribute__((used)) static int
FUNC_9(struct scatterlist *VAR_0, void *VAR_1)
{
 struct decryptor_desc *VAR_2 = VAR_1;
 int VAR_3 = VAR_2->fraglen + VAR_0->length;
 struct crypto_sync_skcipher *VAR_4 =
  FUNC_3(VAR_2->req);
 int VAR_5, VAR_6;



 FUNC_0(VAR_2->fragno > 3);
 FUNC_7(&VAR_2->frags[VAR_2->fragno], FUNC_6(VAR_0), VAR_0->length,
      VAR_0->offset);
 VAR_2->fragno++;
 VAR_2->fraglen += VAR_0->length;

 VAR_5 = VAR_3 & (FUNC_2(VAR_4) - 1);
 VAR_3 -= VAR_5;

 if (VAR_3 == 0)
  return 0;

 FUNC_5(&VAR_2->frags[VAR_2->fragno - 1]);

 FUNC_8(VAR_2->req, VAR_2->frags, VAR_2->frags,
       VAR_3, VAR_2->iv);

 VAR_6 = FUNC_1(VAR_2->req);
 if (VAR_6)
  return VAR_6;

 FUNC_4(VAR_2->frags, 4);

 if (VAR_5) {
  FUNC_7(&VAR_2->frags[0], FUNC_6(VAR_0), VAR_5,
    VAR_0->offset + VAR_0->length - VAR_5);
  VAR_2->fragno = 1;
  VAR_2->fraglen = VAR_5;
 } else {
  VAR_2->fragno = 0;
  VAR_2->fraglen = 0;
 }
 return 0;
}
