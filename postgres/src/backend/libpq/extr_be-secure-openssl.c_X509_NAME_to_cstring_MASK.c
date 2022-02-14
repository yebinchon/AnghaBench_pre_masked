
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_NAME_ENTRY ;
typedef int X509_NAME ;
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
 char* FUNC_8 (int) ;
 char* FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int VAR_4 ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int *,int) ;
 int FUNC_15 (char*) ;
 char* FUNC_16 (char*,size_t,int ) ;
 char* FUNC_17 (char*) ;

__attribute__((used)) static char *
FUNC_18(X509_NAME *VAR_5)
{
 BIO *VAR_6 = FUNC_3(FUNC_5());
 int VAR_7,
    VAR_8,
    VAR_9 = FUNC_13(VAR_5);
 X509_NAME_ENTRY *VAR_10;
 ASN1_STRING *VAR_11;
 const char *VAR_12;
 size_t VAR_13;
 char VAR_14;
 char *VAR_15;
 char *VAR_16;
 char *VAR_17;

 (void) FUNC_6(VAR_6, VAR_3);
 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++)
 {
  VAR_10 = FUNC_14(VAR_5, VAR_7);
  VAR_8 = FUNC_10(FUNC_12(VAR_10));
  VAR_11 = FUNC_11(VAR_10);
  VAR_12 = FUNC_9(VAR_8);
  if (!VAR_12)
   VAR_12 = FUNC_8(VAR_8);
  FUNC_4(VAR_6, "/%s=", VAR_12);
  FUNC_0(VAR_6, VAR_11,
        ((VAR_1 & ~VAR_0)
         | VAR_2));
 }


 VAR_14 = '\0';
 FUNC_7(VAR_6, &VAR_14, 1);
 VAR_13 = FUNC_2(VAR_6, &VAR_15);
 VAR_16 = FUNC_16(VAR_15, VAR_13 - 1, VAR_4);

 VAR_17 = FUNC_17(VAR_16);
 if (VAR_16 != VAR_15)
  FUNC_15(VAR_16);
 FUNC_1(VAR_6);

 return VAR_17;
}
