
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;
typedef int X509_NAME ;
typedef int Datum ;
typedef int ASN1_STRING ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (int *) ;

__attribute__((used)) static Datum
FUNC_10(X509_NAME *VAR_3, text *VAR_4)
{
 char *VAR_5;
 int VAR_6,
    VAR_7;
 ASN1_STRING *VAR_8;

 VAR_5 = FUNC_9(VAR_4);
 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6 == VAR_2)
  FUNC_5(VAR_1,
    (FUNC_6(VAR_0),
     FUNC_7("invalid X.509 field name: \"%s\"",
      VAR_5)));
 FUNC_8(VAR_5);
 VAR_7 = FUNC_4(VAR_3, VAR_6, -1);
 if (VAR_7 < 0)
  return (Datum) 0;
 VAR_8 = FUNC_2(FUNC_3(VAR_3, VAR_7));
 return FUNC_0(VAR_8);
}
