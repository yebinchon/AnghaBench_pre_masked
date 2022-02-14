
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct ossl_cipher_lookup {TYPE_1__* ciph; int * name; } ;
struct TYPE_11__ {TYPE_1__* ciph; int evp_ciph; int * prev; struct TYPE_11__* next; int owner; int * evp_ctx; } ;
struct TYPE_10__ {TYPE_3__* ptr; int decrypt; int encrypt; int init; int free; int iv_size; int key_size; int block_size; } ;
struct TYPE_9__ {int init; int (* cipher_func ) () ;} ;
typedef TYPE_2__ PX_Cipher ;
typedef TYPE_3__ OSSLCipher ;
typedef int EVP_CIPHER_CTX ;


 int VAR_0 ;
 int * FUNC_0 () ;
 TYPE_3__* FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_3__* VAR_12 ;
 int VAR_13 ;
 struct ossl_cipher_lookup* VAR_14 ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_2__* FUNC_4 (int) ;
 char* FUNC_5 (int ,char const*) ;
 scalar_t__ FUNC_6 (int *,char const*) ;
 int FUNC_7 () ;

int
FUNC_8(const char *VAR_15, PX_Cipher **VAR_16)
{
 const struct ossl_cipher_lookup *VAR_17;
 PX_Cipher *VAR_18 = ((void*)0);
 EVP_CIPHER_CTX *VAR_19;
 OSSLCipher *VAR_20;

 VAR_15 = FUNC_5(VAR_13, VAR_15);
 for (VAR_17 = VAR_14; VAR_17->name; VAR_17++)
  if (FUNC_6(VAR_17->name, VAR_15) == 0)
   break;
 if (VAR_17->name == ((void*)0))
  return VAR_2;

 if (!VAR_5)
 {
  FUNC_2(VAR_4, ((void*)0));
  VAR_5 = 1;
 }






 VAR_20 = FUNC_1(VAR_3, sizeof(*VAR_20));
 VAR_20->ciph = VAR_17->ciph;


 VAR_19 = FUNC_0();
 if (!VAR_19)
 {
  FUNC_3(VAR_20);
  return VAR_1;
 }

 VAR_20->evp_ctx = VAR_19;
 VAR_20->owner = VAR_0;
 VAR_20->next = VAR_12;
 VAR_20->prev = ((void*)0);
 VAR_12 = VAR_20;

 if (VAR_17->ciph->cipher_func)
  VAR_20->evp_ciph = VAR_17->ciph->cipher_func();


 VAR_18 = FUNC_4(sizeof(*VAR_18));
 VAR_18->block_size = VAR_6;
 VAR_18->key_size = VAR_11;
 VAR_18->iv_size = VAR_10;
 VAR_18->free = VAR_9;
 VAR_18->init = VAR_20->ciph->init;
 VAR_18->encrypt = VAR_8;
 VAR_18->decrypt = VAR_7;
 VAR_18->ptr = VAR_20;

 *VAR_16 = VAR_18;
 return 0;
}
