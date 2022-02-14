
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct xdr_buf {int len; struct page** pages; } ;
struct scatterlist {int dummy; } ;
struct page {int dummy; } ;
struct crypto_sync_skcipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct crypto_sync_skcipher*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int,int ) ;
 int FUNC_6 (struct xdr_buf*,int,int *,int) ;
 int VAR_3 ;
 int FUNC_7 (struct scatterlist*,int *,int) ;
 int FUNC_8 (int ,int ,int *,int *) ;
 int FUNC_9 (int ,struct scatterlist*,struct scatterlist*,int,int *) ;
 int FUNC_10 (int ,struct crypto_sync_skcipher*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct xdr_buf*,int,int *,int) ;

__attribute__((used)) static u32
FUNC_13(struct crypto_sync_skcipher *VAR_4, struct xdr_buf *VAR_5,
     u32 VAR_6, u8 *VAR_7, struct page **VAR_8, int VAR_9)
{
 u32 VAR_10;
 struct scatterlist VAR_11[1];
 FUNC_0(VAR_3, VAR_4);
 u8 *VAR_12;
 struct page **VAR_13;
 u32 VAR_14 = VAR_5->len - VAR_6;

 if (VAR_14 > VAR_2 * 2) {
  FUNC_1(0);
  return -VAR_0;
 }
 VAR_12 = FUNC_5(VAR_2 * 2, VAR_1);
 if (!VAR_12)
  return -VAR_0;






 VAR_13 = VAR_5->pages;
 if (VAR_9)
  VAR_5->pages = VAR_8;

 VAR_10 = FUNC_6(VAR_5, VAR_6, VAR_12, VAR_14);
 VAR_5->pages = VAR_13;
 if (VAR_10)
  goto out;

 FUNC_7(VAR_11, VAR_12, VAR_14);

 FUNC_10(VAR_3, VAR_4);
 FUNC_8(VAR_3, 0, ((void*)0), ((void*)0));
 FUNC_9(VAR_3, VAR_11, VAR_11, VAR_14, VAR_7);

 if (VAR_9)
  VAR_10 = FUNC_3(VAR_3);
 else
  VAR_10 = FUNC_2(VAR_3);

 FUNC_11(VAR_3);

 if (VAR_10)
  goto out;

 VAR_10 = FUNC_12(VAR_5, VAR_6, VAR_12, VAR_14);

out:
 FUNC_4(VAR_12);
 return VAR_10;
}
