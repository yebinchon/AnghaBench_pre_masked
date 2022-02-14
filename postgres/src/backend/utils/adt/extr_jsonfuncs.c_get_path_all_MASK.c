
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;
typedef int FunctionCallInfo ;
typedef int Datum ;
typedef int ArrayType ;


 int FUNC_0 (int) ;
 long VAR_0 ;
 long VAR_1 ;
 int * FUNC_1 (int) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 char* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int,int,char,int **,int**,int*) ;
 scalar_t__ VAR_3 ;
 int * FUNC_8 (int *,char**,int*,int,int) ;
 void* FUNC_9 (int) ;
 long FUNC_10 (char*,char**,int) ;

__attribute__((used)) static Datum
FUNC_11(FunctionCallInfo VAR_4, bool VAR_5)
{
 text *VAR_6 = FUNC_2(0);
 ArrayType *VAR_7 = FUNC_1(1);
 text *VAR_8;
 Datum *VAR_9;
 bool *VAR_10;
 int VAR_11;
 char **VAR_12;
 int *VAR_13;
 int VAR_14;
 if (FUNC_6(VAR_7))
  FUNC_3();

 FUNC_7(VAR_7, VAR_2, -1, 0, 'i',
       &VAR_9, &VAR_10, &VAR_11);

 VAR_12 = FUNC_9(VAR_11 * sizeof(char *));
 VAR_13 = FUNC_9(VAR_11 * sizeof(int));

 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++)
 {
  FUNC_0(!VAR_10[VAR_14]);
  VAR_12[VAR_14] = FUNC_5(VAR_9[VAR_14]);






  if (*VAR_12[VAR_14] != '\0')
  {
   long VAR_15;
   char *VAR_16;

   VAR_3 = 0;
   VAR_15 = FUNC_10(VAR_12[VAR_14], &VAR_16, 10);
   if (*VAR_16 == '\0' && VAR_3 == 0 && VAR_15 <= VAR_0 && VAR_15 >= VAR_1)
    VAR_13[VAR_14] = (int) VAR_15;
   else
    VAR_13[VAR_14] = VAR_1;
  }
  else
   VAR_13[VAR_14] = VAR_1;
 }

 VAR_8 = FUNC_8(VAR_6, VAR_12, VAR_13, VAR_11, VAR_5);

 if (VAR_8 != ((void*)0))
  FUNC_4(VAR_8);
 else
  FUNC_3();
}
