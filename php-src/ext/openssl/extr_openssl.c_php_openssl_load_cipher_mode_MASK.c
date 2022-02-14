
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct php_openssl_cipher_mode {int is_aead; int is_single_run_aead; int aead_ivlen_flag; int aead_set_tag_flag; int aead_get_tag_flag; } ;
typedef int EVP_CIPHER ;


 int FUNC_0 (int const*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct php_openssl_cipher_mode*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct php_openssl_cipher_mode *VAR_6, const EVP_CIPHER *VAR_7)
{
 switch (FUNC_0(VAR_7)) {

  case 128:
   VAR_6->is_aead = 1;
   VAR_6->is_single_run_aead = 0;
   VAR_6->aead_get_tag_flag = VAR_3;
   VAR_6->aead_set_tag_flag = VAR_5;
   VAR_6->aead_ivlen_flag = VAR_4;
   break;


  case 129:
   VAR_6->is_aead = 1;
   VAR_6->is_single_run_aead = 1;
   VAR_6->aead_get_tag_flag = VAR_0;
   VAR_6->aead_set_tag_flag = VAR_2;
   VAR_6->aead_ivlen_flag = VAR_1;
   break;

  default:
   FUNC_1(VAR_6, 0, sizeof(struct php_openssl_cipher_mode));
 }
}
