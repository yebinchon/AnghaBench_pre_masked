
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;
typedef int regex_t ;
typedef int pg_wchar ;
typedef int errMsg ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int *,int) ;
 int FUNC_8 (int *,int *,int,int,int ) ;
 int FUNC_9 (int,int *,char*,int) ;

__attribute__((used)) static void
FUNC_10(regex_t *VAR_3, text *VAR_4, int VAR_5, Oid VAR_6)
{
 int VAR_7 = FUNC_1(VAR_4);
 char *VAR_8 = FUNC_0(VAR_4);
 pg_wchar *VAR_9;
 int VAR_10;
 int VAR_11;
 char VAR_12[100];


 VAR_9 = (pg_wchar *) FUNC_5((VAR_7 + 1) * sizeof(pg_wchar));
 VAR_10 = FUNC_7(VAR_8,
            VAR_9,
            VAR_7);


 VAR_11 = FUNC_8(VAR_3,
        VAR_9,
        VAR_10,
        VAR_5,
        VAR_6);

 FUNC_6(VAR_9);

 if (VAR_11 != VAR_2)
 {

  FUNC_9(VAR_11, VAR_3, VAR_12, sizeof(VAR_12));
  FUNC_2(VAR_1,
    (FUNC_3(VAR_0),
     FUNC_4("invalid regular expression: %s", VAR_12)));
 }
}
