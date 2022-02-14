
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct php_x509_request {scalar_t__ priv_key_bits; int priv_key_type; int * priv_key; int curve_name; int section_name; int req_config; } ;
typedef int RSA ;
typedef int EVP_PKEY ;
typedef int EC_KEY ;
typedef int DSA ;
typedef int DH ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 char* FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (int *,int*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,scalar_t__,int,int *) ;
 int FUNC_8 () ;
 int * FUNC_9 () ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,scalar_t__,int *,int ,int *,int *,int *) ;
 int FUNC_14 () ;
 int * FUNC_15 () ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int * FUNC_19 (int ) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int *,int *) ;
 int FUNC_22 (int *,int *) ;
 int FUNC_23 (int *,int *) ;
 int FUNC_24 (int *,int *) ;
 int FUNC_25 (int *) ;
 int * FUNC_26 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_27 () ;
 int VAR_4 ;
 scalar_t__ FUNC_28 (scalar_t__,int ,int *,int *) ;
 int FUNC_29 (int *,scalar_t__,int *,int *) ;
 int * FUNC_30 () ;
 int FUNC_31 (int *,int ,char*,...) ;
 int FUNC_32 (char*,int*,int*) ;
 int FUNC_33 () ;
 int FUNC_34 (char*,int,int) ;

__attribute__((used)) static EVP_PKEY * FUNC_35(struct php_x509_request * VAR_5)
{
 char * VAR_6 = ((void*)0);
 int VAR_7, VAR_8;
 EVP_PKEY * VAR_9 = ((void*)0);

 if (VAR_5->priv_key_bits < VAR_1) {
  FUNC_31(((void*)0), VAR_0, "private key length is too short; it needs to be at least %d bits, not %d",
    VAR_1, VAR_5->priv_key_bits);
  return ((void*)0);
 }

 VAR_6 = FUNC_3(VAR_5->req_config, VAR_5->section_name, "RANDFILE");
 if (VAR_6 == ((void*)0)) {
  FUNC_33();
 }
 FUNC_32(VAR_6, &VAR_7, &VAR_8);

 if ((VAR_5->priv_key = FUNC_26()) != ((void*)0)) {
  switch(VAR_5->priv_key_type) {
   case 128:
    {
     RSA* VAR_10;


     FUNC_27();
     VAR_10 = (RSA*)FUNC_28(VAR_5->priv_key_bits, VAR_4, ((void*)0), ((void*)0));
     if (VAR_10 && FUNC_24(VAR_5->priv_key, VAR_10)) {
      VAR_9 = VAR_5->priv_key;
     } else {
      FUNC_33();
     }
    }
    break;

   case 130:
    FUNC_27();
    {
     DSA *VAR_11 = FUNC_15();
     if (VAR_11 && FUNC_13(VAR_11, VAR_5->priv_key_bits, ((void*)0), 0, ((void*)0), ((void*)0), ((void*)0))) {
      FUNC_16(VAR_11, FUNC_14());
      if (FUNC_12(VAR_11)) {
       if (FUNC_22(VAR_5->priv_key, VAR_11)) {
        VAR_9 = VAR_5->priv_key;
       } else {
        FUNC_33();
       }
      } else {
       FUNC_33();
       FUNC_11(VAR_11);
      }
     } else {
      FUNC_33();
     }
    }
    break;


   case 131:
    FUNC_27();
    {
     int VAR_12 = 0;
     DH *VAR_13 = FUNC_9();
     if (VAR_13 && FUNC_7(VAR_13, VAR_5->priv_key_bits, 2, ((void*)0))) {
      FUNC_10(VAR_13, FUNC_8());
      if (FUNC_4(VAR_13, &VAR_12) && VAR_12 == 0 && FUNC_6(VAR_13)) {
       if (FUNC_21(VAR_5->priv_key, VAR_13)) {
        VAR_9 = VAR_5->priv_key;
       } else {
        FUNC_33();
       }
      } else {
       FUNC_33();
       FUNC_5(VAR_13);
      }
     } else {
      FUNC_33();
     }
    }
    break;
   default:
    FUNC_31(((void*)0), VAR_0, "Unsupported private key type");
  }
 } else {
  FUNC_33();
 }

 FUNC_34(VAR_6, VAR_7, VAR_8);

 if (VAR_9 == ((void*)0)) {
  FUNC_25(VAR_5->priv_key);
  VAR_5->priv_key = ((void*)0);
  return ((void*)0);
 }

 return VAR_9;
}
