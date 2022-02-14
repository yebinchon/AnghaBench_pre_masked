
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ contype; int old_conpfeqop; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef int Datum ;
typedef TYPE_1__ Constraint ;
typedef int ArrayType ;


 scalar_t__ FUNC_0 (int *) ;
 int* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ,int ,int*) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static void
FUNC_14(Oid VAR_6, Constraint *VAR_7)
{
 HeapTuple VAR_8;
 Datum VAR_9;
 bool VAR_10;
 ArrayType *VAR_11;
 Oid *VAR_12;
 int VAR_13;
 int VAR_14;

 FUNC_5(VAR_7->contype == VAR_2);
 FUNC_5(VAR_7->old_conpfeqop == VAR_4);

 VAR_8 = FUNC_10(VAR_1, FUNC_8(VAR_6));
 if (!FUNC_7(VAR_8))
  FUNC_12(VAR_3, "cache lookup failed for constraint %u", VAR_6);

 VAR_9 = FUNC_11(VAR_1, VAR_8,
        VAR_0, &VAR_10);
 if (VAR_10)
  FUNC_12(VAR_3, "null conpfeqop for constraint %u", VAR_6);
 VAR_11 = FUNC_6(VAR_9);
 VAR_13 = FUNC_1(VAR_11)[0];

 if (FUNC_4(VAR_11) != 1 ||
  FUNC_3(VAR_11) ||
  FUNC_2(VAR_11) != VAR_5)
  FUNC_12(VAR_3, "conpfeqop is not a 1-D Oid array");
 VAR_12 = (Oid *) FUNC_0(VAR_11);


 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++)
  VAR_7->old_conpfeqop = FUNC_13(VAR_7->old_conpfeqop, VAR_12[VAR_14]);

 FUNC_9(VAR_8);
}
