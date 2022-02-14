
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int X509_NAME_ENTRY ;
typedef int X509_NAME ;
typedef int ASN1_STRING ;
typedef int ASN1_OBJECT ;


 unsigned char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned char**,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (unsigned char*) ;
 scalar_t__ VAR_2 ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *) ;
 int FUNC_17 (int *,char*,char*,int) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *,char const*,int) ;
 int FUNC_20 (int *) ;
 int FUNC_21 () ;
 int FUNC_22 (char*) ;
 int * FUNC_23 (int ,char*,int ) ;
 int FUNC_24 (int ,char*,int ,int *) ;
 int FUNC_25 (int ) ;

__attribute__((used)) static void FUNC_26(zval * VAR_3, char * VAR_4, X509_NAME * VAR_5, int VAR_6)
{
 zval *VAR_7;
 zval VAR_8, VAR_9;
 int VAR_10;
 char *VAR_11;
 int VAR_12;
 X509_NAME_ENTRY * VAR_13;
 ASN1_STRING * VAR_14 = ((void*)0);
 ASN1_OBJECT * VAR_15;

 if (VAR_4 != ((void*)0)) {
  FUNC_20(&VAR_8);
 } else {
  FUNC_12(&VAR_8, VAR_3);
 }

 for (VAR_10 = 0; VAR_10 < FUNC_10(VAR_5); VAR_10++) {
  const unsigned char *VAR_16 = ((void*)0);
  int VAR_17 = 0;
  unsigned char *VAR_18 = ((void*)0);

  VAR_13 = FUNC_11(VAR_5, VAR_10);
  VAR_15 = FUNC_9(VAR_13);
  VAR_12 = FUNC_6(VAR_15);

  if (VAR_6) {
   VAR_11 = (char *) FUNC_5(VAR_12);
  } else {
   VAR_11 = (char *) FUNC_4(VAR_12);
  }

  VAR_14 = FUNC_8(VAR_13);
  if (FUNC_3(VAR_14) != VAR_2) {

   VAR_17 = FUNC_2(&VAR_18, VAR_14);
   VAR_16 = VAR_18;
  } else {

   VAR_16 = FUNC_0(VAR_14);
   VAR_17 = FUNC_1(VAR_14);
  }

  if (VAR_17 != -1) {
   if ((VAR_7 = FUNC_23(FUNC_13(VAR_8), VAR_11, FUNC_22(VAR_11))) != ((void*)0)) {
    if (FUNC_16(VAR_7) == VAR_0) {
     FUNC_19(VAR_7, (const char *)VAR_16, VAR_17);
    } else if (FUNC_16(VAR_7) == VAR_1) {
     FUNC_20(&VAR_9);
     FUNC_18(&VAR_9, FUNC_25(FUNC_15(VAR_7)));
     FUNC_19(&VAR_9, (const char *)VAR_16, VAR_17);
     FUNC_24(FUNC_13(VAR_8), VAR_11, FUNC_22(VAR_11), &VAR_9);
    }
   } else {



    FUNC_17(&VAR_8, VAR_11, (char *)VAR_16, VAR_17);
   }
  } else {
   FUNC_21();
  }

  if (VAR_18 != ((void*)0)) {
   FUNC_7(VAR_18);
  }
 }

 if (VAR_4 != ((void*)0)) {
  FUNC_24(FUNC_14(VAR_3), VAR_4, FUNC_22(VAR_4), &VAR_8);
 }
}
