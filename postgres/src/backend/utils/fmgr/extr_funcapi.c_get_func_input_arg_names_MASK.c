
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Datum ;
typedef int ArrayType ;


 scalar_t__ FUNC_0 (int *) ;
 int* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_0 ;
 int * FUNC_5 (scalar_t__) ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ VAR_5 ;
 char* FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *,scalar_t__,int,int,char,scalar_t__**,int *,int*) ;
 int FUNC_9 (int ,char*) ;
 scalar_t__ FUNC_10 (int) ;

int
FUNC_11(Datum VAR_6, Datum VAR_7,
       char ***VAR_8)
{
 ArrayType *VAR_9;
 int VAR_10;
 Datum *VAR_11;
 char *VAR_12;
 char **VAR_13;
 int VAR_14;
 int VAR_15;


 if (VAR_6 == FUNC_6(((void*)0)))
 {
  *VAR_8 = ((void*)0);
  return 0;
 }






 VAR_9 = FUNC_5(VAR_6);
 if (FUNC_4(VAR_9) != 1 ||
  FUNC_3(VAR_9) ||
  FUNC_2(VAR_9) != VAR_5)
  FUNC_9(VAR_1, "proargnames is not a 1-D text array");
 FUNC_8(VAR_9, VAR_5, -1, 0, 'i',
       &VAR_11, ((void*)0), &VAR_10);
 if (VAR_7 != FUNC_6(((void*)0)))
 {
  VAR_9 = FUNC_5(VAR_7);
  if (FUNC_4(VAR_9) != 1 ||
   FUNC_1(VAR_9)[0] != VAR_10 ||
   FUNC_3(VAR_9) ||
   FUNC_2(VAR_9) != VAR_0)
   FUNC_9(VAR_1, "proargmodes is not a 1-D char array");
  VAR_12 = (char *) FUNC_0(VAR_9);
 }
 else
  VAR_12 = ((void*)0);


 if (VAR_10 <= 0)
 {
  *VAR_8 = ((void*)0);
  return 0;
 }


 VAR_13 = (char **) FUNC_10(VAR_10 * sizeof(char *));
 VAR_14 = 0;
 for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++)
 {
  if (VAR_12 == ((void*)0) ||
   VAR_12[VAR_15] == VAR_2 ||
   VAR_12[VAR_15] == VAR_3 ||
   VAR_12[VAR_15] == VAR_4)
  {
   char *VAR_16 = FUNC_7(VAR_11[VAR_15]);

   if (VAR_16[0] != '\0')
    VAR_13[VAR_14] = VAR_16;
   else
    VAR_13[VAR_14] = ((void*)0);
   VAR_14++;
  }
 }

 *VAR_8 = VAR_13;
 return VAR_14;
}
