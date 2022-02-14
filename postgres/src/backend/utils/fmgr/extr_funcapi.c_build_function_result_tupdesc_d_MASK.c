
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * TupleDesc ;
typedef int Oid ;
typedef scalar_t__ Datum ;
typedef int ArrayType ;


 scalar_t__ FUNC_0 (int *) ;
 int* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_0 ;
 int * FUNC_6 (int) ;
 int * FUNC_7 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ VAR_9 ;
 char* FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *,int,char*,int ,int,int ) ;
 int FUNC_11 (int *,scalar_t__,int,int,char,scalar_t__**,int *,int*) ;
 int FUNC_12 (int ,char*) ;
 scalar_t__ FUNC_13 (int) ;
 char* FUNC_14 (char*,int) ;

TupleDesc
FUNC_15(char VAR_10,
        Datum VAR_11,
        Datum VAR_12,
        Datum VAR_13)
{
 TupleDesc VAR_14;
 ArrayType *VAR_15;
 int VAR_16;
 Oid *VAR_17;
 char *VAR_18;
 Datum *VAR_19 = ((void*)0);
 Oid *VAR_20;
 char **VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24;


 if (VAR_11 == FUNC_8(((void*)0)) ||
  VAR_12 == FUNC_8(((void*)0)))
  return ((void*)0);






 VAR_15 = FUNC_7(VAR_11);
 VAR_16 = FUNC_1(VAR_15)[0];
 if (FUNC_4(VAR_15) != 1 ||
  VAR_16 < 0 ||
  FUNC_3(VAR_15) ||
  FUNC_2(VAR_15) != VAR_2)
  FUNC_12(VAR_1, "proallargtypes is not a 1-D Oid array");
 VAR_17 = (Oid *) FUNC_0(VAR_15);
 VAR_15 = FUNC_7(VAR_12);
 if (FUNC_4(VAR_15) != 1 ||
  FUNC_1(VAR_15)[0] != VAR_16 ||
  FUNC_3(VAR_15) ||
  FUNC_2(VAR_15) != VAR_0)
  FUNC_12(VAR_1, "proargmodes is not a 1-D char array");
 VAR_18 = (char *) FUNC_0(VAR_15);
 if (VAR_13 != FUNC_8(((void*)0)))
 {
  VAR_15 = FUNC_7(VAR_13);
  if (FUNC_4(VAR_15) != 1 ||
   FUNC_1(VAR_15)[0] != VAR_16 ||
   FUNC_3(VAR_15) ||
   FUNC_2(VAR_15) != VAR_9)
   FUNC_12(VAR_1, "proargnames is not a 1-D text array");
  FUNC_11(VAR_15, VAR_9, -1, 0, 'i',
        &VAR_19, ((void*)0), &VAR_23);
  FUNC_5(VAR_23 == VAR_16);
 }


 if (VAR_16 <= 0)
  return ((void*)0);


 VAR_20 = (Oid *) FUNC_13(VAR_16 * sizeof(Oid));
 VAR_21 = (char **) FUNC_13(VAR_16 * sizeof(char *));
 VAR_22 = 0;
 for (VAR_24 = 0; VAR_24 < VAR_16; VAR_24++)
 {
  char *VAR_25;

  if (VAR_18[VAR_24] == VAR_3 ||
   VAR_18[VAR_24] == VAR_7)
   continue;
  FUNC_5(VAR_18[VAR_24] == VAR_5 ||
      VAR_18[VAR_24] == VAR_4 ||
      VAR_18[VAR_24] == VAR_6);
  VAR_20[VAR_22] = VAR_17[VAR_24];
  if (VAR_19)
   VAR_25 = FUNC_9(VAR_19[VAR_24]);
  else
   VAR_25 = ((void*)0);
  if (VAR_25 == ((void*)0) || VAR_25[0] == '\0')
  {

   VAR_25 = FUNC_14("column%d", VAR_22 + 1);
  }
  VAR_21[VAR_22] = VAR_25;
  VAR_22++;
 }





 if (VAR_22 < 2 && VAR_10 != VAR_8)
  return ((void*)0);

 VAR_14 = FUNC_6(VAR_22);
 for (VAR_24 = 0; VAR_24 < VAR_22; VAR_24++)
 {
  FUNC_10(VAR_14, VAR_24 + 1,
         VAR_21[VAR_24],
         VAR_20[VAR_24],
         -1,
         0);
 }

 return VAR_14;
}
