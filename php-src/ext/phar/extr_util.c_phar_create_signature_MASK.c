
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int php_stream ;
struct TYPE_3__ {unsigned char* signature; int sig_flags; int sig_len; int fname; } ;
typedef TYPE_1__ phar_archive_data ;
typedef int buf ;
typedef int PHP_SHA512_CTX ;
typedef int PHP_SHA256_CTX ;
typedef int PHP_SHA1_CTX ;
typedef int PHP_MD5_CTX ;
typedef int EVP_PKEY ;
typedef int EVP_MD_CTX ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned char*,unsigned int*,int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,unsigned char*,size_t) ;
 int FUNC_9 () ;
 int VAR_0 ;
 int * FUNC_10 (int *,int *,int *,char*) ;
 int FUNC_11 (int ) ;





 int FUNC_12 (unsigned char*,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,unsigned char*,size_t) ;
 int FUNC_15 (unsigned char*,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,unsigned char*,size_t) ;
 int FUNC_18 (unsigned char*,int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,unsigned char*,size_t) ;
 int FUNC_21 (unsigned char*,int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *,unsigned char*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_24 (unsigned char*) ;
 unsigned char* FUNC_25 (unsigned int) ;
 char* FUNC_26 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_27 (int,int *,int ,int ,int ,char**,size_t*) ;
 int FUNC_28 (char const*,size_t,unsigned char**) ;
 size_t FUNC_29 (int *,char*,int) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int *,int ,int ) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (char**,int ,char*,...) ;

int FUNC_34(phar_archive_data *VAR_5, php_stream *VAR_6, char **VAR_7, size_t *VAR_8, char **VAR_9)
{
 unsigned char VAR_10[1024];
 size_t VAR_11;

 FUNC_30(VAR_6);

 if (VAR_5->signature) {
  FUNC_24(VAR_5->signature);
  VAR_5->signature = ((void*)0);
 }

 switch(VAR_5->sig_flags) {
  case 128: {
   unsigned char VAR_12[64];
   PHP_SHA512_CTX VAR_13;

   FUNC_22(&VAR_13);

   while ((VAR_11 = FUNC_29(VAR_6, (char*)VAR_10, sizeof(VAR_10))) > 0) {
    FUNC_23(&VAR_13, VAR_10, VAR_11);
   }

   FUNC_21(VAR_12, &VAR_13);
   *VAR_7 = FUNC_26((char *) VAR_12, 64);
   *VAR_8 = 64;
   break;
  }
  case 129: {
   unsigned char VAR_14[32];
   PHP_SHA256_CTX VAR_15;

   FUNC_19(&VAR_15);

   while ((VAR_11 = FUNC_29(VAR_6, (char*)VAR_10, sizeof(VAR_10))) > 0) {
    FUNC_20(&VAR_15, VAR_10, VAR_11);
   }

   FUNC_18(VAR_14, &VAR_15);
   *VAR_7 = FUNC_26((char *) VAR_14, 32);
   *VAR_8 = 32;
   break;
  }
  case 131: {
   unsigned char *VAR_16;
   size_t VAR_17;
   VAR_16 = ((void*)0);
   VAR_17 = 0;
   FUNC_31(VAR_6, 0, VAR_1);

   if (VAR_0 == FUNC_27(1, VAR_6, FUNC_32(VAR_6), FUNC_11(VAR_3), FUNC_11(VAR_4), (char **)&VAR_16, &VAR_17)) {
    if (VAR_9) {
     FUNC_33(VAR_9, 0, "unable to write phar \"%s\" with requested openssl signature", VAR_5->fname);
    }
    return VAR_0;
   }

   *VAR_7 = (char *) VAR_16;
   *VAR_8 = VAR_17;
  }
  break;
  default:
   VAR_5->sig_flags = 130;
  case 130: {
   unsigned char VAR_18[20];
   PHP_SHA1_CTX VAR_19;

   FUNC_16(&VAR_19);

   while ((VAR_11 = FUNC_29(VAR_6, (char*)VAR_10, sizeof(VAR_10))) > 0) {
    FUNC_17(&VAR_19, VAR_10, VAR_11);
   }

   FUNC_15(VAR_18, &VAR_19);
   *VAR_7 = FUNC_26((char *) VAR_18, 20);
   *VAR_8 = 20;
   break;
  }
  case 132: {
   unsigned char VAR_20[16];
   PHP_MD5_CTX VAR_21;

   FUNC_13(&VAR_21);

   while ((VAR_11 = FUNC_29(VAR_6, (char*)VAR_10, sizeof(VAR_10))) > 0) {
    FUNC_14(&VAR_21, VAR_10, VAR_11);
   }

   FUNC_12(VAR_20, &VAR_21);
   *VAR_7 = FUNC_26((char *) VAR_20, 16);
   *VAR_8 = 16;
   break;
  }
 }

 VAR_5->sig_len = FUNC_28((const char *)*VAR_7, *VAR_8, &VAR_5->signature);
 return VAR_2;
}
