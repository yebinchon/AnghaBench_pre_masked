
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int HeapTuple ;
typedef int Datum ;
typedef int ArrayType ;


 scalar_t__ FUNC_0 (int *) ;
 int* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_2 ;
 int * FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ,int ,int*) ;
 scalar_t__ VAR_10 ;
 char* FUNC_12 (int ) ;
 int FUNC_13 (int *,scalar_t__,int,int,char,int **,int *,int*) ;
 int FUNC_14 (int ,char*,...) ;
 scalar_t__ FUNC_15 (int ,int ,int *) ;

char *
FUNC_16(Oid VAR_11)
{
 char *VAR_12;
 HeapTuple VAR_13;
 Datum VAR_14;
 Datum VAR_15;
 bool VAR_16;
 ArrayType *VAR_17;
 int VAR_18;
 char *VAR_19;
 Datum *VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;


 VAR_13 = FUNC_10(VAR_9, FUNC_8(VAR_11));
 if (!FUNC_7(VAR_13))
  FUNC_14(VAR_3, "cache lookup failed for function %u", VAR_11);


 if (FUNC_15(VAR_13, VAR_0, ((void*)0)) ||
  FUNC_15(VAR_13, VAR_1, ((void*)0)))
  VAR_12 = ((void*)0);
 else
 {

  VAR_14 = FUNC_11(VAR_9, VAR_13,
           VAR_0,
           &VAR_16);
  FUNC_5(!VAR_16);
  VAR_15 = FUNC_11(VAR_9, VAR_13,
           VAR_1,
           &VAR_16);
  FUNC_5(!VAR_16);







  VAR_17 = FUNC_6(VAR_14);
  VAR_18 = FUNC_1(VAR_17)[0];
  if (FUNC_4(VAR_17) != 1 ||
   VAR_18 < 0 ||
   FUNC_3(VAR_17) ||
   FUNC_2(VAR_17) != VAR_2)
   FUNC_14(VAR_3, "proargmodes is not a 1-D char array");
  VAR_19 = (char *) FUNC_0(VAR_17);
  VAR_17 = FUNC_6(VAR_15);
  if (FUNC_4(VAR_17) != 1 ||
   FUNC_1(VAR_17)[0] != VAR_18 ||
   FUNC_3(VAR_17) ||
   FUNC_2(VAR_17) != VAR_10)
   FUNC_14(VAR_3, "proargnames is not a 1-D text array");
  FUNC_13(VAR_17, VAR_10, -1, 0, 'i',
        &VAR_20, ((void*)0), &VAR_22);
  FUNC_5(VAR_22 == VAR_18);


  VAR_12 = ((void*)0);
  VAR_21 = 0;
  for (VAR_23 = 0; VAR_23 < VAR_18; VAR_23++)
  {
   if (VAR_19[VAR_23] == VAR_4 ||
    VAR_19[VAR_23] == VAR_8)
    continue;
   FUNC_5(VAR_19[VAR_23] == VAR_6 ||
       VAR_19[VAR_23] == VAR_5 ||
       VAR_19[VAR_23] == VAR_7);
   if (++VAR_21 > 1)
   {

    VAR_12 = ((void*)0);
    break;
   }
   VAR_12 = FUNC_12(VAR_20[VAR_23]);
   if (VAR_12 == ((void*)0) || VAR_12[0] == '\0')
   {

    VAR_12 = ((void*)0);
    break;
   }
  }
 }

 FUNC_9(VAR_13);

 return VAR_12;
}
