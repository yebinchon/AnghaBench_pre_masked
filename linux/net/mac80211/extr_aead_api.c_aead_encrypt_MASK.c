
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

int FUNC_11(struct crypto_aead *VAR_2, u8 *VAR_3, u8 *VAR_4, size_t VAR_5,
   u8 *VAR_6, size_t VAR_7, u8 *VAR_8)
{
 size_t VAR_9 = FUNC_3(VAR_2);
 struct scatterlist VAR_10[3];
 struct aead_request *VAR_11;
 int VAR_12 = sizeof(*VAR_11) + FUNC_5(VAR_2);
 u8 *VAR_13;

 VAR_11 = FUNC_6(VAR_12 + VAR_5, VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_13 = (u8 *)VAR_11 + VAR_12;
 FUNC_8(VAR_13, VAR_4, VAR_5);

 FUNC_9(VAR_10, 3);
 FUNC_10(&VAR_10[0], VAR_13, VAR_5);
 FUNC_10(&VAR_10[1], VAR_6, VAR_7);
 FUNC_10(&VAR_10[2], VAR_8, VAR_9);

 FUNC_2(VAR_11, VAR_2);
 FUNC_1(VAR_11, VAR_10, VAR_10, VAR_7, VAR_3);
 FUNC_0(VAR_11, VAR_10[0].length);

 FUNC_4(VAR_11);
 FUNC_7(VAR_11);

 return 0;
}
