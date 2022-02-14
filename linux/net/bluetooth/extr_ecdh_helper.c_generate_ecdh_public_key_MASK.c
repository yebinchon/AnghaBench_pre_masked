
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
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;
 struct kpp_request* FUNC_4 (struct crypto_kpp*,int ) ;
 int FUNC_5 (struct kpp_request*) ;
 int FUNC_6 (struct kpp_request*,int ,int ,struct ecdh_completion*) ;
 int FUNC_7 (struct kpp_request*,int *,int ) ;
 int FUNC_8 (struct kpp_request*,struct scatterlist*,int) ;
 int FUNC_9 (struct scatterlist*,int *,int) ;
 int FUNC_10 (int *,int *,int) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct crypto_kpp *VAR_5, u8 VAR_6[64])
{
 struct kpp_request *VAR_7;
 u8 *VAR_8;
 struct ecdh_completion VAR_9;
 struct scatterlist VAR_10;
 int VAR_11;

 VAR_8 = FUNC_3(64, VAR_3);
 if (!VAR_8)
  return -VAR_2;

 VAR_7 = FUNC_4(VAR_5, VAR_3);
 if (!VAR_7) {
  VAR_11 = -VAR_2;
  goto free_tmp;
 }

 FUNC_1(&VAR_9.completion);
 FUNC_9(&VAR_10, VAR_8, 64);
 FUNC_7(VAR_7, ((void*)0), 0);
 FUNC_8(VAR_7, &VAR_10, 64);
 FUNC_6(VAR_7, VAR_0,
     VAR_4, &VAR_9);

 VAR_11 = FUNC_0(VAR_7);
 if (VAR_11 == -VAR_1) {
  FUNC_11(&VAR_9.completion);
  VAR_11 = VAR_9.err;
 }
 if (VAR_11 < 0)
  goto free_all;




 FUNC_10((u64 *)VAR_8, (u64 *)VAR_6, 4);
 FUNC_10((u64 *)&VAR_8[32], (u64 *)&VAR_6[32], 4);

free_all:
 FUNC_5(VAR_7);
free_tmp:
 FUNC_2(VAR_8);
 return VAR_11;
}
