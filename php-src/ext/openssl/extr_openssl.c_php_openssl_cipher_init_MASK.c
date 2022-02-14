
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_long ;
typedef int zend_bool ;
struct php_openssl_cipher_mode {int aead_set_tag_flag; int is_aead; scalar_t__ is_single_run_aead; } ;
typedef int EVP_CIPHER_CTX ;
typedef int EVP_CIPHER ;


 int FUNC_0 (int *,int ,int,unsigned char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 size_t FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int *,int const*,int *,unsigned char*,unsigned char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char* FUNC_6 (int) ;
 int FUNC_7 (unsigned char*,char*,int) ;
 int FUNC_8 (unsigned char*,int ,int) ;
 int FUNC_9 (int *,int ,char*) ;
 int FUNC_10 () ;
 int FUNC_11 (char**,size_t*,size_t,int*,int *,struct php_openssl_cipher_mode*) ;

__attribute__((used)) static int FUNC_12(const EVP_CIPHER *VAR_5,
  EVP_CIPHER_CTX *VAR_6, struct php_openssl_cipher_mode *VAR_7,
  char **VAR_8, size_t *VAR_9, zend_bool *VAR_10,
  char **VAR_11, size_t *VAR_12, zend_bool *VAR_13,
  char *VAR_14, int VAR_15, zend_long VAR_16, int VAR_17)
{
 unsigned char *VAR_18;
 int VAR_19, VAR_20;
 size_t VAR_21;

 *VAR_10 = 0;

 VAR_21 = FUNC_3(VAR_5);
 if (VAR_17 && *VAR_12 == 0 && VAR_21 > 0 && !VAR_7->is_aead) {
  FUNC_9(((void*)0), VAR_0,
    "Using an empty Initialization Vector (iv) is potentially insecure and not recommended");
 }

 if (!FUNC_5(VAR_6, VAR_5, ((void*)0), ((void*)0), ((void*)0), VAR_17)) {
  FUNC_10();
  return VAR_1;
 }
 if (FUNC_11(VAR_11, VAR_12, VAR_21, VAR_13, VAR_6, VAR_7) == VAR_1) {
  return VAR_1;
 }
 if (VAR_7->is_single_run_aead && VAR_17) {
  if (!FUNC_0(VAR_6, VAR_7->aead_set_tag_flag, VAR_15, ((void*)0))) {
   FUNC_9(((void*)0), VAR_0, "Setting tag length for AEAD cipher failed");
   return VAR_1;
  }
 } else if (!VAR_17 && VAR_14 && VAR_15 > 0) {
  if (!VAR_7->is_aead) {
   FUNC_9(((void*)0), VAR_0, "The tag cannot be used because the cipher method does not support AEAD");
  } else if (!FUNC_0(VAR_6, VAR_7->aead_set_tag_flag, VAR_15, (unsigned char *) VAR_14)) {
   FUNC_9(((void*)0), VAR_0, "Setting tag for AEAD cipher decryption failed");
   return VAR_1;
  }
 }

 VAR_20 = (int) *VAR_9;
 VAR_19 = FUNC_4(VAR_5);
 if (VAR_19 > VAR_20) {
  if ((VAR_2 & VAR_16) && !FUNC_1(VAR_6, VAR_20)) {
   FUNC_10();
   FUNC_9(((void*)0), VAR_0, "Key length cannot be set for the cipher method");
   return VAR_1;
  }
  VAR_18 = FUNC_6(VAR_19);
  FUNC_8(VAR_18, 0, VAR_19);
  FUNC_7(VAR_18, *VAR_8, VAR_20);
  *VAR_8 = (char *) VAR_18;
  *VAR_9 = VAR_19;
  *VAR_10 = 1;
 } else {
  if (VAR_20 > VAR_19 && !FUNC_1(VAR_6, VAR_20)) {
   FUNC_10();
  }
  VAR_18 = (unsigned char*)*VAR_8;
 }

 if (!FUNC_5(VAR_6, ((void*)0), ((void*)0), VAR_18, (unsigned char *)*VAR_11, VAR_17)) {
  FUNC_10();
  return VAR_1;
 }
 if (VAR_16 & VAR_3) {
  FUNC_2(VAR_6, 0);
 }

 return VAR_4;
}
