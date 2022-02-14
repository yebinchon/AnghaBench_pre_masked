
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;
typedef size_t zend_off_t ;
typedef int uint32_t ;
typedef int php_stream ;
typedef int digest ;
typedef int buf ;
typedef int PHP_SHA512_CTX ;
typedef int PHP_SHA256_CTX ;
typedef int PHP_SHA1_CTX ;
typedef int PHP_MD5_CTX ;
typedef int EVP_PKEY ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned char*,size_t,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,unsigned char*,size_t) ;
 scalar_t__ FUNC_8 () ;
 int VAR_0 ;
 int * FUNC_9 (int *,int *,int *,int *) ;





 int FUNC_10 (unsigned char*,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,unsigned char*,size_t) ;
 int FUNC_13 (unsigned char*,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,unsigned char*,size_t) ;
 int FUNC_16 (unsigned char*,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,unsigned char*,size_t) ;
 int FUNC_19 (unsigned char*,int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,unsigned char*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_22 (int *) ;
 int * FUNC_23 (int *) ;
 int FUNC_24 (char*) ;
 int FUNC_25 (unsigned char*,char*,int) ;
 int VAR_4 ;
 int FUNC_26 (int ,int *,size_t,int *,int ,char**,size_t*) ;
 size_t FUNC_27 (char const*,int,char**) ;
 int FUNC_28 (int *) ;
 int * FUNC_29 (int *,int ,int ) ;
 int * FUNC_30 (char*,char*,int ,int *) ;
 size_t FUNC_31 (int *,char*,size_t) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (int *,int ,int ) ;
 int FUNC_34 (char**,int ,char*,...) ;
 int FUNC_35 (int *,char*,int) ;
 int FUNC_36 (int *,int ) ;

int FUNC_37(php_stream *VAR_5, size_t VAR_6, uint32_t VAR_7, char *VAR_8, size_t VAR_9, char *VAR_10, char **VAR_11, size_t *VAR_12, char **VAR_13)
{
 size_t VAR_14, VAR_15;
 zend_off_t VAR_16;
 unsigned char VAR_17[1024];

 FUNC_32(VAR_5);

 switch (VAR_7) {
  case 131: {






   size_t VAR_18;

   zend_string *VAR_19 = ((void*)0);
   char *VAR_20;
   php_stream *VAR_21;

   if (!FUNC_35(&VAR_4, "openssl", sizeof("openssl")-1)) {
    if (VAR_13) {
     FUNC_34(VAR_13, 0, "openssl not loaded");
    }
    return VAR_0;
   }


   FUNC_34(&VAR_20, 0, "%s.pubkey", VAR_10);
   VAR_21 = FUNC_30(VAR_20, "rb", 0, ((void*)0));
   FUNC_24(VAR_20);

   if (!VAR_21 || !(VAR_19 = FUNC_29(VAR_21, VAR_1, 0)) || !FUNC_22(VAR_19)) {
    if (VAR_21) {
     FUNC_28(VAR_21);
    }
    if (VAR_13) {
     FUNC_34(VAR_13, 0, "openssl public key could not be read");
    }
    return VAR_0;
   }

   FUNC_28(VAR_21);

   VAR_18 = VAR_9;

   if (VAR_0 == FUNC_26(0, VAR_5, VAR_6, VAR_19 ? FUNC_23(VAR_19) : ((void*)0), VAR_19 ? FUNC_22(VAR_19) : 0, &VAR_8, &VAR_18)) {
    if (VAR_19) {
     FUNC_36(VAR_19, 0);
    }

    if (VAR_13) {
     FUNC_34(VAR_13, 0, "openssl signature could not be verified");
    }

    return VAR_0;
   }

   if (VAR_19) {
    FUNC_36(VAR_19, 0);
   }

   VAR_9 = VAR_18;
   *VAR_12 = FUNC_27((const char*)VAR_8, VAR_9, VAR_11);
  }
  break;
  case 128: {
   unsigned char VAR_22[64];
   PHP_SHA512_CTX VAR_23;

   if (VAR_9 < sizeof(VAR_22)) {
    if (VAR_13) {
     FUNC_34(VAR_13, 0, "broken signature");
    }
    return VAR_0;
   }

   FUNC_20(&VAR_23);
   VAR_16 = VAR_6;

   if ((size_t)VAR_16 > sizeof(VAR_17)) {
    VAR_14 = sizeof(VAR_17);
   } else {
    VAR_14 = (size_t)VAR_16;
   }

   while ((VAR_15 = FUNC_31(VAR_5, (char*)VAR_17, VAR_14)) > 0) {
    FUNC_21(&VAR_23, VAR_17, VAR_15);
    VAR_16 -= (zend_off_t)VAR_15;
    if ((size_t)VAR_16 < VAR_14) {
     VAR_14 = (size_t)VAR_16;
    }
   }

   FUNC_19(VAR_22, &VAR_23);

   if (FUNC_25(VAR_22, VAR_8, sizeof(VAR_22))) {
    if (VAR_13) {
     FUNC_34(VAR_13, 0, "broken signature");
    }
    return VAR_0;
   }

   *VAR_12 = FUNC_27((const char*)VAR_22, sizeof(VAR_22), VAR_11);
   break;
  }
  case 129: {
   unsigned char VAR_24[32];
   PHP_SHA256_CTX VAR_25;

   if (VAR_9 < sizeof(VAR_24)) {
    if (VAR_13) {
     FUNC_34(VAR_13, 0, "broken signature");
    }
    return VAR_0;
   }

   FUNC_17(&VAR_25);
   VAR_16 = VAR_6;

   if ((size_t)VAR_16 > sizeof(VAR_17)) {
    VAR_14 = sizeof(VAR_17);
   } else {
    VAR_14 = (size_t)VAR_16;
   }

   while ((VAR_15 = FUNC_31(VAR_5, (char*)VAR_17, VAR_14)) > 0) {
    FUNC_18(&VAR_25, VAR_17, VAR_15);
    VAR_16 -= (zend_off_t)VAR_15;
    if ((size_t)VAR_16 < VAR_14) {
     VAR_14 = (size_t)VAR_16;
    }
   }

   FUNC_16(VAR_24, &VAR_25);

   if (FUNC_25(VAR_24, VAR_8, sizeof(VAR_24))) {
    if (VAR_13) {
     FUNC_34(VAR_13, 0, "broken signature");
    }
    return VAR_0;
   }

   *VAR_12 = FUNC_27((const char*)VAR_24, sizeof(VAR_24), VAR_11);
   break;
  }
  case 130: {
   unsigned char VAR_26[20];
   PHP_SHA1_CTX VAR_27;

   if (VAR_9 < sizeof(VAR_26)) {
    if (VAR_13) {
     FUNC_34(VAR_13, 0, "broken signature");
    }
    return VAR_0;
   }

   FUNC_14(&VAR_27);
   VAR_16 = VAR_6;

   if ((size_t)VAR_16 > sizeof(VAR_17)) {
    VAR_14 = sizeof(VAR_17);
   } else {
    VAR_14 = (size_t)VAR_16;
   }

   while ((VAR_15 = FUNC_31(VAR_5, (char*)VAR_17, VAR_14)) > 0) {
    FUNC_15(&VAR_27, VAR_17, VAR_15);
    VAR_16 -= (zend_off_t)VAR_15;
    if ((size_t)VAR_16 < VAR_14) {
     VAR_14 = (size_t)VAR_16;
    }
   }

   FUNC_13(VAR_26, &VAR_27);

   if (FUNC_25(VAR_26, VAR_8, sizeof(VAR_26))) {
    if (VAR_13) {
     FUNC_34(VAR_13, 0, "broken signature");
    }
    return VAR_0;
   }

   *VAR_12 = FUNC_27((const char*)VAR_26, sizeof(VAR_26), VAR_11);
   break;
  }
  case 132: {
   unsigned char VAR_28[16];
   PHP_MD5_CTX VAR_29;

   if (VAR_9 < sizeof(VAR_28)) {
    if (VAR_13) {
     FUNC_34(VAR_13, 0, "broken signature");
    }
    return VAR_0;
   }

   FUNC_11(&VAR_29);
   VAR_16 = VAR_6;

   if ((size_t)VAR_16 > sizeof(VAR_17)) {
    VAR_14 = sizeof(VAR_17);
   } else {
    VAR_14 = (size_t)VAR_16;
   }

   while ((VAR_15 = FUNC_31(VAR_5, (char*)VAR_17, VAR_14)) > 0) {
    FUNC_12(&VAR_29, VAR_17, VAR_15);
    VAR_16 -= (zend_off_t)VAR_15;
    if ((size_t)VAR_16 < VAR_14) {
     VAR_14 = (size_t)VAR_16;
    }
   }

   FUNC_10(VAR_28, &VAR_29);

   if (FUNC_25(VAR_28, VAR_8, sizeof(VAR_28))) {
    if (VAR_13) {
     FUNC_34(VAR_13, 0, "broken signature");
    }
    return VAR_0;
   }

   *VAR_12 = FUNC_27((const char*)VAR_28, sizeof(VAR_28), VAR_11);
   break;
  }
  default:
   if (VAR_13) {
    FUNC_34(VAR_13, 0, "broken or unsupported signature");
   }
   return VAR_0;
 }
 return VAR_3;
}
