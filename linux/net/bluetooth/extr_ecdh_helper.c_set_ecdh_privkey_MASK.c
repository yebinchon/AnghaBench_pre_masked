
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct ecdh {int key_size; int * key; int curve_id; int member_0; } ;
struct crypto_kpp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned int,struct ecdh*) ;
 unsigned int FUNC_1 (struct ecdh*) ;
 int FUNC_2 (struct crypto_kpp*,int *,unsigned int) ;
 int * FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int) ;

int FUNC_6(struct crypto_kpp *VAR_3, const u8 VAR_4[32])
{
 u8 *VAR_5, *VAR_6 = ((void*)0);
 unsigned int VAR_7;
 int VAR_8;
 struct ecdh VAR_9 = {0};

 VAR_9.curve_id = VAR_0;

 if (VAR_4) {
  VAR_6 = FUNC_3(32, VAR_2);
  if (!VAR_6)
   return -VAR_1;
  FUNC_5((u64 *)VAR_4, (u64 *)VAR_6, 4);
  VAR_9.key = VAR_6;
  VAR_9.key_size = 32;
 }

 VAR_7 = FUNC_1(&VAR_9);
 VAR_5 = FUNC_3(VAR_7, VAR_2);
 if (!VAR_5) {
  VAR_8 = -VAR_1;
  goto free_tmp;
 }

 VAR_8 = FUNC_0(VAR_5, VAR_7, &VAR_9);
 if (VAR_8)
  goto free_all;

 VAR_8 = FUNC_2(VAR_3, VAR_5, VAR_7);

free_all:
 FUNC_4(VAR_5);
free_tmp:
 FUNC_4(VAR_6);
 return VAR_8;
}
