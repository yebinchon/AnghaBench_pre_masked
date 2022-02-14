
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GucSource ;
typedef int GucContext ;
typedef int GucAction ;
typedef int Datum ;
typedef int ArrayType ;


 int* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int FUNC_5 (char*,char**,char**) ;
 scalar_t__ VAR_1 ;
 char* FUNC_6 (int ) ;
 int VAR_2 ;
 int FUNC_7 (int *,int,int*,int,int,int,char,int*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,char*,int ,int ,int ,int,int ,int) ;

void
FUNC_14(ArrayType *VAR_3,
    GucContext VAR_4, GucSource VAR_5, GucAction VAR_6)
{
 int VAR_7;

 FUNC_4(VAR_3 != ((void*)0));
 FUNC_4(FUNC_1(VAR_3) == VAR_1);
 FUNC_4(FUNC_3(VAR_3) == 1);
 FUNC_4(FUNC_2(VAR_3)[0] == 1);

 for (VAR_7 = 1; VAR_7 <= FUNC_0(VAR_3)[0]; VAR_7++)
 {
  Datum VAR_8;
  bool VAR_9;
  char *VAR_10;
  char *VAR_11;
  char *VAR_12;

  VAR_8 = FUNC_7(VAR_3, 1, &VAR_7,
       -1 ,
       -1 ,
       0 ,
       'i' ,
       &VAR_9);

  if (VAR_9)
   continue;

  VAR_10 = FUNC_6(VAR_8);

  FUNC_5(VAR_10, &VAR_11, &VAR_12);
  if (!VAR_12)
  {
   FUNC_8(VAR_2,
     (FUNC_9(VAR_0),
      FUNC_10("could not parse setting for parameter \"%s\"",
       VAR_11)));
   FUNC_11(VAR_11);
   continue;
  }

  (void) FUNC_13(VAR_11, VAR_12,
         VAR_4, VAR_5,
         VAR_6, 1, 0, 0);

  FUNC_11(VAR_11);
  if (VAR_12)
   FUNC_11(VAR_12);
  FUNC_12(VAR_10);
 }
}
