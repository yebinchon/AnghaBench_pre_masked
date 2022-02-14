
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct scatterlist {int dummy; } ;
struct kpp_request {int dummy; } ;
struct ecdh_completion {int err; int completion; } ;
struct crypto_kpp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kpp_request*) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 struct kpp_request* FUNC_3 (struct crypto_kpp*,int ) ;
 int FUNC_4 (struct kpp_request*) ;
 int FUNC_5 (struct kpp_request*,int ,int ,struct ecdh_completion*) ;
 int FUNC_6 (struct kpp_request*,struct scatterlist*,int) ;
 int FUNC_7 (struct kpp_request*,struct scatterlist*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (struct scatterlist*,int *,int) ;
 int FUNC_12 (int *,int *,int) ;
 int FUNC_13 (int *) ;

int FUNC_14(struct crypto_kpp *VAR_5, const u8 VAR_6[64],
   u8 VAR_7[32])
{
 struct kpp_request *VAR_8;
 u8 *VAR_9;
 struct ecdh_completion VAR_10;
 struct scatterlist VAR_11, VAR_12;
 int VAR_13;

 VAR_9 = FUNC_2(64, VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_8 = FUNC_3(VAR_5, VAR_3);
 if (!VAR_8) {
  VAR_13 = -VAR_2;
  goto free_tmp;
 }

 FUNC_1(&VAR_10.completion);

 FUNC_12((u64 *)VAR_6, (u64 *)VAR_9, 4);
 FUNC_12((u64 *)&VAR_6[32], (u64 *)&VAR_9[32], 4);

 FUNC_11(&VAR_11, VAR_9, 64);
 FUNC_11(&VAR_12, VAR_7, 32);
 FUNC_6(VAR_8, &VAR_11, 64);
 FUNC_7(VAR_8, &VAR_12, 32);
 FUNC_5(VAR_8, VAR_0,
     VAR_4, &VAR_10);
 VAR_13 = FUNC_0(VAR_8);
 if (VAR_13 == -VAR_1) {
  FUNC_13(&VAR_10.completion);
  VAR_13 = VAR_10.err;
 }
 if (VAR_13 < 0) {
  FUNC_10("alg: ecdh: compute shared secret failed. err %d\n",
         VAR_13);
  goto free_all;
 }

 FUNC_12((u64 *)VAR_7, (u64 *)VAR_9, 4);
 FUNC_9(VAR_7, VAR_9, 32);

free_all:
 FUNC_4(VAR_8);
free_tmp:
 FUNC_8(VAR_9);
 return VAR_13;
}
