
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_long ;
struct php_x509_request {char* config_filename; char* section_name; char* digest_name; char* extensions_section; char* request_extensions_section; int priv_key_encrypt; int * req_config; int curve_name; int * digest; int * md_alg; int const* priv_key_encrypt_cipher; int priv_key_type; int priv_key_bits; int * global_config; } ;
typedef int EVP_CIPHER ;
typedef int BIO ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,char*,char*) ;
 char* FUNC_4 (int *,char*,char*) ;
 void* FUNC_5 (int *,char*,int *) ;
 int * FUNC_6 (char*) ;
 int * FUNC_7 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 int VAR_6 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int VAR_7 ;
 int FUNC_12 (char*,int ,int ) ;
 int FUNC_13 (char*,char*,char*) ;
 int VAR_8 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 char* FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *) ;
 char* VAR_9 ;
 int VAR_10 ;
 int FUNC_18 (int *,int ,char*,...) ;
 int FUNC_19 (struct php_x509_request*) ;
 int * FUNC_20 (int ) ;
 int FUNC_21 (char*) ;
 int FUNC_22 () ;
 int VAR_11 ;
 scalar_t__ FUNC_23 (char*,char*) ;
 int * FUNC_24 (int ,char*,int) ;

__attribute__((used)) static int FUNC_25(struct php_x509_request * VAR_12, zval * VAR_13)
{
 char * VAR_14;
 zval * VAR_15;

 FUNC_13("config", VAR_12->config_filename, VAR_9);
 FUNC_13("config_section_name", VAR_12->section_name, "req");
 VAR_12->global_config = FUNC_5(((void*)0), VAR_9, ((void*)0));
 if (VAR_12->global_config == ((void*)0)) {
  FUNC_22();
 }
 VAR_12->req_config = FUNC_5(((void*)0), VAR_12->config_filename, ((void*)0));
 if (VAR_12->req_config == ((void*)0)) {
  FUNC_22();
  return VAR_1;
 }


 VAR_14 = FUNC_4(VAR_12->req_config, ((void*)0), "oid_file");
 if (VAR_14 == ((void*)0)) {
  FUNC_22();
 } else if (!FUNC_21(VAR_14)) {
  BIO *VAR_16 = FUNC_2(VAR_14, FUNC_10(VAR_7));
  if (VAR_16) {
   FUNC_8(VAR_16);
   FUNC_1(VAR_16);
   FUNC_22();
  }
 }
 if (FUNC_19(VAR_12) == VAR_1) {
  return VAR_1;
 }
 FUNC_13("digest_alg", VAR_12->digest_name,
  FUNC_4(VAR_12->req_config, VAR_12->section_name, "default_md"));
 FUNC_13("x509_extensions", VAR_12->extensions_section,
  FUNC_4(VAR_12->req_config, VAR_12->section_name, "x509_extensions"));
 FUNC_13("req_extensions", VAR_12->request_extensions_section,
  FUNC_4(VAR_12->req_config, VAR_12->section_name, "req_extensions"));
 FUNC_12("private_key_bits", VAR_12->priv_key_bits,
  FUNC_3(VAR_12->req_config, VAR_12->section_name, "default_bits"));

 FUNC_12("private_key_type", VAR_12->priv_key_type, VAR_6);

 if (VAR_13 && (VAR_15 = FUNC_24(FUNC_14(VAR_13), "encrypt_key", sizeof("encrypt_key")-1)) != ((void*)0)) {
  VAR_12->priv_key_encrypt = FUNC_17(VAR_15) == VAR_4 ? 1 : 0;
 } else {
  VAR_14 = FUNC_4(VAR_12->req_config, VAR_12->section_name, "encrypt_rsa_key");
  if (VAR_14 == ((void*)0)) {
   VAR_14 = FUNC_4(VAR_12->req_config, VAR_12->section_name, "encrypt_key");

   FUNC_22();
  }
  if (VAR_14 != ((void*)0) && FUNC_23(VAR_14, "no") == 0) {
   VAR_12->priv_key_encrypt = 0;
  } else {
   VAR_12->priv_key_encrypt = 1;
  }
 }

 if (VAR_12->priv_key_encrypt &&
  VAR_13 &&
  (VAR_15 = FUNC_24(FUNC_14(VAR_13), "encrypt_key_cipher", sizeof("encrypt_key_cipher")-1)) != ((void*)0) &&
  FUNC_17(VAR_15) == VAR_2
 ) {
  zend_long VAR_17 = FUNC_15(VAR_15);
  const EVP_CIPHER* VAR_18 = FUNC_20(VAR_17);
  if (VAR_18 == ((void*)0)) {
   FUNC_18(((void*)0), VAR_0, "Unknown cipher algorithm for private key.");
   return VAR_1;
  } else {
   VAR_12->priv_key_encrypt_cipher = VAR_18;
  }
 } else {
  VAR_12->priv_key_encrypt_cipher = ((void*)0);
 }


 if (VAR_12->digest_name == ((void*)0)) {
  VAR_12->digest_name = FUNC_4(VAR_12->req_config, VAR_12->section_name, "default_md");
 }
 if (VAR_12->digest_name != ((void*)0)) {
  VAR_12->digest = VAR_12->md_alg = FUNC_6(VAR_12->digest_name);
 } else {
  FUNC_22();
 }
 if (VAR_12->md_alg == ((void*)0)) {
  VAR_12->md_alg = VAR_12->digest = FUNC_7();
  FUNC_22();
 }

 FUNC_11(VAR_10);
 VAR_14 = FUNC_4(VAR_12->req_config, VAR_12->section_name, "string_mask");
 if (VAR_14 == ((void*)0)) {
  FUNC_22();
 } else if (!FUNC_0(VAR_14)) {
  FUNC_18(((void*)0), VAR_0, "Invalid global string mask setting %s", VAR_14);
  return VAR_1;
 }

 FUNC_11(VAR_11);

 return VAR_8;
}
