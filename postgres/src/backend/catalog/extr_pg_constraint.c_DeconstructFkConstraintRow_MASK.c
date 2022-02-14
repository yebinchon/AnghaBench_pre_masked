
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_2__ {int oid; } ;
typedef scalar_t__ Pointer ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_constraint ;
typedef int Datum ;
typedef int AttrNumber ;
typedef int ArrayType ;


 int FUNC_0 (int *) ;
 int* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_8 (int ,int ,int ,int*) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (int *) ;

void
FUNC_12(HeapTuple VAR_10, int *VAR_11,
         AttrNumber *VAR_12, AttrNumber *VAR_13,
         Oid *VAR_14, Oid *VAR_15, Oid *VAR_16)
{
 Oid VAR_17;
 Datum VAR_18;
 bool VAR_19;
 ArrayType *VAR_20;
 int VAR_21;

 VAR_17 = ((Form_pg_constraint) FUNC_7(VAR_10))->oid;






 VAR_18 = FUNC_8(VAR_5, VAR_10,
        VAR_2, &VAR_19);
 if (VAR_19)
  FUNC_9(VAR_6, "null conkey for constraint %u", VAR_17);
 VAR_20 = FUNC_5(VAR_18);
 if (FUNC_4(VAR_20) != 1 ||
  FUNC_3(VAR_20) ||
  FUNC_2(VAR_20) != VAR_8)
  FUNC_9(VAR_6, "conkey is not a 1-D smallint array");
 VAR_21 = FUNC_1(VAR_20)[0];
 if (VAR_21 <= 0 || VAR_21 > VAR_7)
  FUNC_9(VAR_6, "foreign key constraint cannot have %d columns", VAR_21);
 FUNC_10(VAR_12, FUNC_0(VAR_20), VAR_21 * sizeof(int16));
 if ((Pointer) VAR_20 != FUNC_6(VAR_18))
  FUNC_11(VAR_20);

 VAR_18 = FUNC_8(VAR_5, VAR_10,
        VAR_1, &VAR_19);
 if (VAR_19)
  FUNC_9(VAR_6, "null confkey for constraint %u", VAR_17);
 VAR_20 = FUNC_5(VAR_18);
 if (FUNC_4(VAR_20) != 1 ||
  FUNC_1(VAR_20)[0] != VAR_21 ||
  FUNC_3(VAR_20) ||
  FUNC_2(VAR_20) != VAR_8)
  FUNC_9(VAR_6, "confkey is not a 1-D smallint array");
 FUNC_10(VAR_13, FUNC_0(VAR_20), VAR_21 * sizeof(int16));
 if ((Pointer) VAR_20 != FUNC_6(VAR_18))
  FUNC_11(VAR_20);

 if (VAR_14)
 {
  VAR_18 = FUNC_8(VAR_5, VAR_10,
         VAR_3, &VAR_19);
  if (VAR_19)
   FUNC_9(VAR_6, "null conpfeqop for constraint %u", VAR_17);
  VAR_20 = FUNC_5(VAR_18);

  if (FUNC_4(VAR_20) != 1 ||
   FUNC_1(VAR_20)[0] != VAR_21 ||
   FUNC_3(VAR_20) ||
   FUNC_2(VAR_20) != VAR_9)
   FUNC_9(VAR_6, "conpfeqop is not a 1-D Oid array");
  FUNC_10(VAR_14, FUNC_0(VAR_20), VAR_21 * sizeof(Oid));
  if ((Pointer) VAR_20 != FUNC_6(VAR_18))
   FUNC_11(VAR_20);
 }

 if (VAR_15)
 {
  VAR_18 = FUNC_8(VAR_5, VAR_10,
         VAR_4, &VAR_19);
  if (VAR_19)
   FUNC_9(VAR_6, "null conppeqop for constraint %u", VAR_17);
  VAR_20 = FUNC_5(VAR_18);
  if (FUNC_4(VAR_20) != 1 ||
   FUNC_1(VAR_20)[0] != VAR_21 ||
   FUNC_3(VAR_20) ||
   FUNC_2(VAR_20) != VAR_9)
   FUNC_9(VAR_6, "conppeqop is not a 1-D Oid array");
  FUNC_10(VAR_15, FUNC_0(VAR_20), VAR_21 * sizeof(Oid));
  if ((Pointer) VAR_20 != FUNC_6(VAR_18))
   FUNC_11(VAR_20);
 }

 if (VAR_16)
 {
  VAR_18 = FUNC_8(VAR_5, VAR_10,
         VAR_0, &VAR_19);
  if (VAR_19)
   FUNC_9(VAR_6, "null conffeqop for constraint %u", VAR_17);
  VAR_20 = FUNC_5(VAR_18);
  if (FUNC_4(VAR_20) != 1 ||
   FUNC_1(VAR_20)[0] != VAR_21 ||
   FUNC_3(VAR_20) ||
   FUNC_2(VAR_20) != VAR_9)
   FUNC_9(VAR_6, "conffeqop is not a 1-D Oid array");
  FUNC_10(VAR_16, FUNC_0(VAR_20), VAR_21 * sizeof(Oid));
  if ((Pointer) VAR_20 != FUNC_6(VAR_18))
   FUNC_11(VAR_20);
 }

 *VAR_11 = VAR_21;
}
