
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Datum ;
typedef int ArrayType ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int *,scalar_t__,int,int,char,int **,int *,int*) ;
 int FUNC_6 (int ,char*) ;
 char** FUNC_7 (int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(Datum VAR_2, char ***VAR_3)
{
 ArrayType *VAR_4 = FUNC_3(VAR_2);
 Datum *VAR_5;
 char **VAR_6;
 int VAR_7;
 int VAR_8;

 if (FUNC_2(VAR_4) != 1 || FUNC_1(VAR_4) || FUNC_0(VAR_4) != VAR_1)
  FUNC_6(VAR_0, "expected 1-D text array");
 FUNC_5(VAR_4, VAR_1, -1, 0, 'i', &VAR_5, ((void*)0), &VAR_8);

 VAR_6 = FUNC_7(VAR_8 * sizeof(char *));
 for (VAR_7 = 0; VAR_7 < VAR_8; ++VAR_7)
  VAR_6[VAR_7] = FUNC_4(VAR_5[VAR_7]);

 FUNC_8(VAR_5);
 *VAR_3 = VAR_6;
 return VAR_8;
}
