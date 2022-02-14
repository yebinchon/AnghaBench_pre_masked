
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pronargs; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_proc ;
typedef int Datum ;
typedef int ArrayType ;


 int FUNC_0 (int *) ;
 int* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (int) ;
 int * FUNC_6 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (int ,int ,int ,int*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int *,int ,int) ;
 scalar_t__ FUNC_11 (int) ;

int
FUNC_12(HeapTuple VAR_4,
      Oid **VAR_5)
{
 Datum VAR_6;
 ArrayType *VAR_7;
 int VAR_8;
 bool VAR_9;

 VAR_6 = FUNC_8(VAR_3, VAR_4,
          VAR_0,
          &VAR_9);
 if (!VAR_9)
 {






  VAR_7 = FUNC_6(VAR_6);
  VAR_8 = FUNC_1(VAR_7)[0];
  if (FUNC_4(VAR_7) != 1 ||
   VAR_8 < 0 ||
   FUNC_3(VAR_7) ||
   FUNC_2(VAR_7) != VAR_2)
   FUNC_9(VAR_1, "protrftypes is not a 1-D Oid array");
  FUNC_5(VAR_8 >= ((Form_pg_proc) FUNC_7(VAR_4))->pronargs);
  *VAR_5 = (Oid *) FUNC_11(VAR_8 * sizeof(Oid));
  FUNC_10(*VAR_5, FUNC_0(VAR_7),
      VAR_8 * sizeof(Oid));

  return VAR_8;
 }
 else
  return 0;
}
