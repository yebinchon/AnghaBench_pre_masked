
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int zval ;
struct TYPE_7__ {scalar_t__ type; } ;
typedef TYPE_1__ zend_resource ;
struct php_openssl_pem_password {char* key; size_t len; } ;
typedef int X509 ;
typedef int EVP_PKEY ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int ) ;
 int * FUNC_2 (char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_3 (int *,int *,int *,int *) ;
 int * FUNC_4 (int *,int *,int *,struct php_openssl_pem_password*) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 TYPE_1__* FUNC_12 (int *) ;
 size_t FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 char* FUNC_15 (int ) ;
 char* FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_19 (char*,char*,int) ;
 int FUNC_20 (int *,int ,char*) ;
 int FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (char*) ;
 int * VAR_9 ;
 int FUNC_23 () ;
 int * FUNC_24 (int *,int ,TYPE_1__**) ;
 int FUNC_25 (int *) ;
 void* FUNC_26 (TYPE_1__*,char*,scalar_t__,scalar_t__) ;
 int * FUNC_27 (int ,int) ;
 TYPE_1__* FUNC_28 (int *,scalar_t__) ;
 int FUNC_29 (int *) ;

__attribute__((used)) static EVP_PKEY * FUNC_30(
  zval * VAR_10, int VAR_11, char *VAR_12, size_t VAR_13,
  int VAR_14, zend_resource **VAR_15)
{
 EVP_PKEY * VAR_16 = ((void*)0);
 X509 * VAR_17 = ((void*)0);
 int VAR_18 = 0;
 zend_resource *VAR_19 = ((void*)0);
 char * VAR_20 = ((void*)0);
 zval VAR_21;

 FUNC_9(&VAR_21);







 if (VAR_15) {
  *VAR_15 = ((void*)0);
 }
 if (FUNC_18(VAR_10) == VAR_1) {
  zval * VAR_22;



  if ((VAR_22 = FUNC_27(FUNC_11(VAR_10), 1)) == ((void*)0)) {
   FUNC_20(((void*)0), VAR_0, "key array must be of the form array(0 => key, 1 => phrase)");
   return ((void*)0);
  }

  if (FUNC_18(VAR_22) == VAR_4) {
   VAR_12 = FUNC_16(VAR_22);
   VAR_13 = FUNC_14(VAR_22);
  } else {
   FUNC_8(&VAR_21, VAR_22);
   if (!FUNC_25(&VAR_21)) {
    return ((void*)0);
   }

   VAR_12 = FUNC_15(VAR_21);
   VAR_13 = FUNC_13(VAR_21);
  }


  if ((VAR_10 = FUNC_27(FUNC_11(VAR_10), 0)) == ((void*)0)) {
   FUNC_20(((void*)0), VAR_0, "key array must be of the form array(0 => key, 1 => phrase)");
   if (FUNC_17(VAR_21) == VAR_4) { FUNC_29(&VAR_21); } return ((void*)0);;
  }
 }

 if (FUNC_18(VAR_10) == VAR_3) {
  void * VAR_23;
  zend_resource * VAR_24 = FUNC_12(VAR_10);

  VAR_23 = FUNC_26(VAR_24, "OpenSSL X.509/key", VAR_8, VAR_7);
  if (!VAR_23) {
   if (FUNC_17(VAR_21) == VAR_4) { FUNC_29(&VAR_21); } return ((void*)0);;
  }
  if (VAR_15) {
   *VAR_15 = VAR_24;
   FUNC_10(VAR_10);
  }
  if (VAR_24->type == VAR_8) {

   VAR_17 = (X509*)VAR_23;
   VAR_18 = 0;
  } else if (VAR_24->type == VAR_7) {
   int VAR_25;

   VAR_25 = FUNC_21((EVP_PKEY*)VAR_23);


   if (!VAR_11 && !VAR_25) {
    FUNC_20(((void*)0), VAR_0, "supplied key param is a public key");
    if (FUNC_17(VAR_21) == VAR_4) { FUNC_29(&VAR_21); } return ((void*)0);;
   }

   if (VAR_11 && VAR_25) {
    FUNC_20(((void*)0), VAR_0, "Don't know how to get public key from this private key");
    if (FUNC_17(VAR_21) == VAR_4) { FUNC_29(&VAR_21); } return ((void*)0);;
   } else {
    if (FUNC_17(VAR_21) == VAR_4) {
     FUNC_29(&VAR_21);
    }

    return (EVP_PKEY*)VAR_23;
   }
  } else {

   if (FUNC_17(VAR_21) == VAR_4) { FUNC_29(&VAR_21); } return ((void*)0);;
  }
 } else {




  if (!(FUNC_18(VAR_10) == VAR_4 || FUNC_18(VAR_10) == VAR_2)) {
   if (FUNC_17(VAR_21) == VAR_4) { FUNC_29(&VAR_21); } return ((void*)0);;
  }
  if (!FUNC_25(VAR_10)) {
   if (FUNC_17(VAR_21) == VAR_4) { FUNC_29(&VAR_21); } return ((void*)0);;
  }

  if (FUNC_14(VAR_10) > 7 && FUNC_19(FUNC_16(VAR_10), "file://", sizeof("file://") - 1) == 0) {
   VAR_20 = FUNC_16(VAR_10) + (sizeof("file://") - 1);
   if (FUNC_22(VAR_20)) {
    if (FUNC_17(VAR_21) == VAR_4) { FUNC_29(&VAR_21); } return ((void*)0);;
   }
  }

  if (VAR_11) {
   VAR_17 = FUNC_24(VAR_10, 0, &VAR_19);
   VAR_18 = (VAR_19 == ((void*)0));

   if (!VAR_17) {

    BIO* VAR_26;
    if (VAR_20) {
     VAR_26 = FUNC_1(VAR_20, FUNC_5(VAR_5));
    } else {
     VAR_26 = FUNC_2(FUNC_16(VAR_10), (int)FUNC_14(VAR_10));
    }
    if (VAR_26 == ((void*)0)) {
     FUNC_23();
     if (FUNC_17(VAR_21) == VAR_4) { FUNC_29(&VAR_21); } return ((void*)0);;
    }
    VAR_16 = FUNC_3(VAR_26, ((void*)0),((void*)0), ((void*)0));
    FUNC_0(VAR_26);
   }
  } else {

   BIO *VAR_27;

   if (VAR_20) {
    VAR_27 = FUNC_1(VAR_20, FUNC_5(VAR_5));
   } else {
    VAR_27 = FUNC_2(FUNC_16(VAR_10), (int)FUNC_14(VAR_10));
   }

   if (VAR_27 == ((void*)0)) {
    if (FUNC_17(VAR_21) == VAR_4) { FUNC_29(&VAR_21); } return ((void*)0);;
   }
   if (VAR_12 == ((void*)0)) {
    VAR_16 = FUNC_4(VAR_27, ((void*)0), ((void*)0), ((void*)0));
   } else {
    struct php_openssl_pem_password VAR_28;
    VAR_28.key = VAR_12;
    VAR_28.len = VAR_13;
    VAR_16 = FUNC_4(VAR_27, ((void*)0), VAR_9, &VAR_28);
   }
   FUNC_0(VAR_27);
  }
 }

 if (VAR_16 == ((void*)0)) {
  FUNC_23();

  if (VAR_11 && VAR_17) {

   VAR_16 = (EVP_PKEY *) FUNC_7(VAR_17);
   if (VAR_16 == ((void*)0)) {
    FUNC_23();
   }
  }
 }

 if (VAR_18 && VAR_17) {
  FUNC_6(VAR_17);
 }
 if (VAR_16 && VAR_14 && VAR_15) {
  *VAR_15 = FUNC_28(VAR_16, VAR_7);
 }
 if (FUNC_17(VAR_21) == VAR_4) {
  FUNC_29(&VAR_21);
 }
 return VAR_16;
}
