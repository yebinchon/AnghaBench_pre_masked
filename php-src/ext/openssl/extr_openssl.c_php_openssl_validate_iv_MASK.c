
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_bool ;
struct php_openssl_cipher_mode {int aead_ivlen_flag; scalar_t__ is_aead; } ;
typedef int EVP_CIPHER_CTX ;


 int FUNC_0 (int *,int ,size_t,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int,size_t) ;
 int FUNC_2 (char*,char*,size_t) ;
 int FUNC_3 (int *,int ,char*,...) ;

__attribute__((used)) static int FUNC_4(char **VAR_3, size_t *VAR_4, size_t VAR_5,
  zend_bool *VAR_6, EVP_CIPHER_CTX *VAR_7, struct php_openssl_cipher_mode *VAR_8)
{
 char *VAR_9;


 if (*VAR_4 == VAR_5) {
  return VAR_2;
 }

 if (VAR_8->is_aead) {
  if (FUNC_0(VAR_7, VAR_8->aead_ivlen_flag, *VAR_4, ((void*)0)) != 1) {
   FUNC_3(((void*)0), VAR_0, "Setting of IV length for AEAD mode failed");
   return VAR_1;
  }
  return VAR_2;
 }

 VAR_9 = FUNC_1(1, VAR_5 + 1);

 if (*VAR_4 == 0) {

  *VAR_4 = VAR_5;
  *VAR_3 = VAR_9;
  *VAR_6 = 1;
  return VAR_2;

 }

 if (*VAR_4 < VAR_5) {
  FUNC_3(((void*)0), VAR_0,
    "IV passed is only %zd bytes long, cipher expects an IV of precisely %zd bytes, padding with \\0",
    *VAR_4, VAR_5);
  FUNC_2(VAR_9, *VAR_3, *VAR_4);
  *VAR_4 = VAR_5;
  *VAR_3 = VAR_9;
  *VAR_6 = 1;
  return VAR_2;
 }

 FUNC_3(((void*)0), VAR_0,
   "IV passed is %zd bytes long which is longer than the %zd expected by selected cipher, truncating",
   *VAR_4, VAR_5);
 FUNC_2(VAR_9, *VAR_3, VAR_5);
 *VAR_4 = VAR_5;
 *VAR_3 = VAR_9;
 *VAR_6 = 1;
 return VAR_2;

}
