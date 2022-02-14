
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dim1; int values; } ;
struct TYPE_4__ {int pronargs; TYPE_1__ proargtypes; } ;
typedef char Oid ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_proc ;
typedef int Datum ;
typedef int ArrayType ;


 int FUNC_0 (int *) ;
 int* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_3 ;
 int * FUNC_6 (int ) ;
 int VAR_4 ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int ,int ,int ,int*) ;
 int VAR_7 ;
 char* FUNC_9 (int ) ;
 int FUNC_10 (int *,int ,int,int,char,int **,int *,int*) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (char*,int ,int) ;
 scalar_t__ FUNC_13 (int) ;

int
FUNC_14(HeapTuple VAR_8,
      Oid **VAR_9, char ***VAR_10, char **VAR_11)
{
 Form_pg_proc VAR_12 = (Form_pg_proc) FUNC_7(VAR_8);
 Datum VAR_13;
 Datum VAR_14;
 Datum VAR_15;
 bool VAR_16;
 ArrayType *VAR_17;
 int VAR_18;
 Datum *VAR_19;
 int VAR_20;
 int VAR_21;


 VAR_13 = FUNC_8(VAR_6, VAR_8,
          VAR_0,
          &VAR_16);
 if (!VAR_16)
 {






  VAR_17 = FUNC_6(VAR_13);
  VAR_18 = FUNC_1(VAR_17)[0];
  if (FUNC_4(VAR_17) != 1 ||
   VAR_18 < 0 ||
   FUNC_3(VAR_17) ||
   FUNC_2(VAR_17) != VAR_5)
   FUNC_11(VAR_4, "proallargtypes is not a 1-D Oid array");
  FUNC_5(VAR_18 >= VAR_12->pronargs);
  *VAR_9 = (Oid *) FUNC_13(VAR_18 * sizeof(Oid));
  FUNC_12(*VAR_9, FUNC_0(VAR_17),
      VAR_18 * sizeof(Oid));
 }
 else
 {

  VAR_18 = VAR_12->proargtypes.dim1;
  FUNC_5(VAR_18 == VAR_12->pronargs);
  *VAR_9 = (Oid *) FUNC_13(VAR_18 * sizeof(Oid));
  FUNC_12(*VAR_9, VAR_12->proargtypes.values,
      VAR_18 * sizeof(Oid));
 }


 VAR_15 = FUNC_8(VAR_6, VAR_8,
          VAR_2,
          &VAR_16);
 if (VAR_16)
  *VAR_10 = ((void*)0);
 else
 {
  FUNC_10(FUNC_6(VAR_15),
        VAR_7, -1, 0, 'i',
        &VAR_19, ((void*)0), &VAR_20);
  if (VAR_20 != VAR_18)
   FUNC_11(VAR_4, "proargnames must have the same number of elements as the function has arguments");
  *VAR_10 = (char **) FUNC_13(sizeof(char *) * VAR_18);
  for (VAR_21 = 0; VAR_21 < VAR_18; VAR_21++)
   (*VAR_10)[VAR_21] = FUNC_9(VAR_19[VAR_21]);
 }


 VAR_14 = FUNC_8(VAR_6, VAR_8,
          VAR_1,
          &VAR_16);
 if (VAR_16)
  *VAR_11 = ((void*)0);
 else
 {
  VAR_17 = FUNC_6(VAR_14);
  if (FUNC_4(VAR_17) != 1 ||
   FUNC_1(VAR_17)[0] != VAR_18 ||
   FUNC_3(VAR_17) ||
   FUNC_2(VAR_17) != VAR_3)
   FUNC_11(VAR_4, "proargmodes is not a 1-D char array");
  *VAR_11 = (char *) FUNC_13(VAR_18 * sizeof(char));
  FUNC_12(*VAR_11, FUNC_0(VAR_17),
      VAR_18 * sizeof(char));
 }

 return VAR_18;
}
