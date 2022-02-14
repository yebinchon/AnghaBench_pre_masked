
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;
typedef int regex_t ;
typedef int pg_wchar ;
typedef int errMsg ;
typedef int Oid ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;


 int * FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (size_t) ;
 size_t FUNC_8 () ;
 int FUNC_9 (int,int *,char*,int) ;
 int FUNC_10 (int *,int **,size_t*) ;
 size_t FUNC_11 (int *,char*,size_t) ;

char *
FUNC_12(text *VAR_4, bool VAR_5, Oid VAR_6,
     bool *VAR_7)
{
 char *VAR_8;
 regex_t *VAR_9;
 int VAR_10;
 int VAR_11;
 pg_wchar *VAR_12;
 size_t VAR_13;
 size_t VAR_14;
 char VAR_15[100];

 *VAR_7 = 0;


 VAR_10 = VAR_2;
 if (VAR_5)
  VAR_10 |= VAR_3;

 VAR_9 = FUNC_2(VAR_4, VAR_10, VAR_6);


 VAR_11 = FUNC_10(VAR_9, &VAR_12, &VAR_13);

 switch (VAR_11)
 {
  case 129:
   return ((void*)0);

  case 128:

   break;

  case 130:
   *VAR_7 = 1;

   break;

  default:

   FUNC_1();
   FUNC_9(VAR_11, VAR_9, VAR_15, sizeof(VAR_15));
   FUNC_3(VAR_1,
     (FUNC_4(VAR_0),
      FUNC_5("regular expression failed: %s", VAR_15)));
   break;
 }


 VAR_14 = FUNC_8() * VAR_13 + 1;
 VAR_8 = (char *) FUNC_7(VAR_14);
 VAR_13 = FUNC_11(VAR_12, VAR_8, VAR_13);
 FUNC_0(VAR_13 < VAR_14);

 FUNC_6(VAR_12);

 return VAR_8;
}
