
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;
typedef int X509_NAME_ENTRY ;
typedef int X509_NAME ;
typedef int Datum ;
typedef int BIO ;
typedef int ASN1_STRING ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (int *,char**) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,char const*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_8 (int) ;
 char* FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int VAR_8 ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int *,int) ;
 int * FUNC_16 (char*) ;
 int FUNC_17 (int ,char*) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (char*,...) ;
 int FUNC_21 (char*) ;
 char* FUNC_22 (char*,size_t,int ) ;

__attribute__((used)) static Datum
FUNC_23(X509_NAME *VAR_9)
{
 BIO *VAR_10 = FUNC_3(FUNC_5());
 int VAR_11,
    VAR_12,
    VAR_13 = FUNC_14(VAR_9);
 X509_NAME_ENTRY *VAR_14;
 ASN1_STRING *VAR_15;
 const char *VAR_16;
 size_t VAR_17;
 char VAR_18;
 char *VAR_19;
 char *VAR_20;
 text *VAR_21;

 if (VAR_10 == ((void*)0))
  FUNC_18(VAR_6,
    (FUNC_19(VAR_5),
     FUNC_20("could not create OpenSSL BIO structure")));

 (void) FUNC_6(VAR_10, VAR_3);
 for (VAR_11 = 0; VAR_11 < VAR_13; VAR_11++)
 {
  VAR_14 = FUNC_15(VAR_9, VAR_11);
  VAR_12 = FUNC_10(FUNC_13(VAR_14));
  if (VAR_12 == VAR_7)
   FUNC_18(VAR_6,
     (FUNC_19(VAR_4),
      FUNC_20("could not get NID for ASN1_OBJECT object")));
  VAR_15 = FUNC_12(VAR_14);
  VAR_16 = FUNC_9(VAR_12);
  if (VAR_16 == ((void*)0))
   VAR_16 = FUNC_8(VAR_12);
  if (VAR_16 == ((void*)0))
   FUNC_18(VAR_6,
     (FUNC_19(VAR_4),
      FUNC_20("could not convert NID %d to an ASN1_OBJECT structure", VAR_12)));
  FUNC_4(VAR_10, "/%s=", VAR_16);
  FUNC_0(VAR_10, VAR_15,
        ((VAR_1 & ~VAR_0)
         | VAR_2));
 }


 VAR_18 = '\0';
 FUNC_7(VAR_10, &VAR_18, 1);
 VAR_17 = FUNC_2(VAR_10, &VAR_19);
 VAR_20 = FUNC_22(VAR_19, VAR_17 - 1, VAR_8);
 VAR_21 = FUNC_16(VAR_20);
 if (VAR_20 != VAR_19)
  FUNC_21(VAR_20);
 if (FUNC_1(VAR_10) != 1)
  FUNC_17(VAR_6, "could not free OpenSSL BIO structure");

 FUNC_11(VAR_21);
}
