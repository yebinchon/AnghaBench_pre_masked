
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scatterlist {int length; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct aead_request*,int ) ;
 int FUNC_1 (struct aead_request*,struct scatterlist*,struct scatterlist*,size_t,int *) ;
 int FUNC_2 (struct aead_request*,struct crypto_aead*) ;
 size_t FUNC_3 (struct crypto_aead*) ;
 int FUNC_4 (struct aead_request*) ;
 int FUNC_5 (struct crypto_aead*) ;
 struct aead_request* FUNC_6 (int,int ) ;
 int FUNC_7 (struct aead_request*) ;
 int FUNC_8 (int *,int *,size_t) ;
 int FUNC_9 (struct scatterlist*,int) ;
 int FUNC_10 (struct scatterlist*,int *,size_t) ;

int FUNC_11(struct crypto_aead *VAR_3, u8 *VAR_4, u8 *VAR_5, size_t VAR_6,
   u8 *VAR_7, size_t VAR_8, u8 *VAR_9)
{
 size_t VAR_10 = FUNC_3(VAR_3);
 struct scatterlist VAR_11[3];
 struct aead_request *VAR_12;
 int VAR_13 = sizeof(*VAR_12) + FUNC_5(VAR_3);
 u8 *VAR_14;
 int VAR_15;

 if (VAR_8 == 0)
  return -VAR_0;

 VAR_12 = FUNC_6(VAR_13 + VAR_6, VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_14 = (u8 *)VAR_12 + VAR_13;
 FUNC_8(VAR_14, VAR_5, VAR_6);

 FUNC_9(VAR_11, 3);
 FUNC_10(&VAR_11[0], VAR_14, VAR_6);
 FUNC_10(&VAR_11[1], VAR_7, VAR_8);
 FUNC_10(&VAR_11[2], VAR_9, VAR_10);

 FUNC_2(VAR_12, VAR_3);
 FUNC_1(VAR_12, VAR_11, VAR_11, VAR_8 + VAR_10, VAR_4);
 FUNC_0(VAR_12, VAR_11[0].length);

 VAR_15 = FUNC_4(VAR_12);
 FUNC_7(VAR_12);

 return VAR_15;
}
