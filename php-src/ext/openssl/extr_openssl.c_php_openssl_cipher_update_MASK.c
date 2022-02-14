
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;
struct php_openssl_cipher_mode {scalar_t__ is_aead; scalar_t__ is_single_run_aead; } ;
typedef int EVP_CIPHER_CTX ;
typedef int EVP_CIPHER ;


 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int *,unsigned char*,int*,unsigned char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 () ;
 int * FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(const EVP_CIPHER *VAR_3,
  EVP_CIPHER_CTX *VAR_4, struct php_openssl_cipher_mode *VAR_5,
  zend_string **VAR_6, int *VAR_7, char *VAR_8, size_t VAR_9,
  char *VAR_10, size_t VAR_11, int VAR_12)
{
 int VAR_13 = 0;

 if (VAR_5->is_single_run_aead && !FUNC_1(VAR_4, ((void*)0), &VAR_13, ((void*)0), (int)VAR_9)) {
  FUNC_4();
  FUNC_3(((void*)0), VAR_0, "Setting of data length failed");
  return VAR_1;
 }

 if (VAR_5->is_aead && !FUNC_1(VAR_4, ((void*)0), &VAR_13, (unsigned char *)VAR_10, (int)VAR_11)) {
  FUNC_4();
  FUNC_3(((void*)0), VAR_0, "Setting of additional application data failed");
  return VAR_1;
 }

 *VAR_6 = FUNC_5((int)VAR_9 + FUNC_0(VAR_3), 0);

 if (!FUNC_1(VAR_4, (unsigned char*)FUNC_2(*VAR_6),
     &VAR_13, (unsigned char *)VAR_8, (int)VAR_9)) {







  FUNC_4();
  FUNC_6(*VAR_6, 0);
  return VAR_1;
 }

 *VAR_7 = VAR_13;

 return VAR_2;
}
