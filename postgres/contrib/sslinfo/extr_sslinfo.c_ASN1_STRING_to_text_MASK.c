
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;
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
 int FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int *) ;
 int VAR_6 ;
 int * FUNC_8 (char*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 char* FUNC_14 (char*,size_t,int ) ;

__attribute__((used)) static Datum
FUNC_15(ASN1_STRING *VAR_7)
{
 BIO *VAR_8;
 size_t VAR_9;
 char VAR_10;
 char *VAR_11;
 char *VAR_12;
 text *VAR_13;

 VAR_8 = FUNC_3(FUNC_4());
 if (VAR_8 == ((void*)0))
  FUNC_10(VAR_5,
    (FUNC_11(VAR_4),
     FUNC_12("could not create OpenSSL BIO structure")));
 (void) FUNC_5(VAR_8, VAR_3);
 FUNC_0(VAR_8, VAR_7,
       ((VAR_1 & ~VAR_0)
        | VAR_2));

 VAR_10 = '\0';
 FUNC_6(VAR_8, &VAR_10, 1);
 VAR_9 = FUNC_2(VAR_8, &VAR_11);
 VAR_12 = FUNC_14(VAR_11, VAR_9 - 1, VAR_6);
 VAR_13 = FUNC_8(VAR_12);
 if (VAR_12 != VAR_11)
  FUNC_13(VAR_12);
 if (FUNC_1(VAR_8) != 1)
  FUNC_9(VAR_5, "could not free OpenSSL BIO structure");

 FUNC_7(VAR_13);
}
