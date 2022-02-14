
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ opcintype; scalar_t__ oid; int opcdefault; } ;
typedef int TYPCATEGORY ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_opclass ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int *,int ,int ,int ,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ,int ,int,int *,int,int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;

Oid
FUNC_17(Oid VAR_9, Oid VAR_10)
{
 Oid VAR_11 = VAR_6;
 int VAR_12 = 0;
 int VAR_13 = 0;
 int VAR_14 = 0;
 Relation VAR_15;
 ScanKeyData VAR_16[1];
 SysScanDesc VAR_17;
 HeapTuple VAR_18;
 TYPCATEGORY VAR_19;


 VAR_9 = FUNC_11(VAR_9);

 VAR_19 = FUNC_6(VAR_9);
 VAR_15 = FUNC_16(VAR_8, VAR_0);

 FUNC_5(&VAR_16[0],
    VAR_1,
    VAR_2, VAR_5,
    FUNC_4(VAR_10));

 VAR_17 = FUNC_12(VAR_15, VAR_7, 1,
         ((void*)0), 1, VAR_16);

 while (FUNC_1(VAR_18 = FUNC_14(VAR_17)))
 {
  Form_pg_opclass VAR_20 = (Form_pg_opclass) FUNC_0(VAR_18);


  if (!VAR_20->opcdefault)
   continue;
  if (VAR_20->opcintype == VAR_9)
  {
   VAR_12++;
   VAR_11 = VAR_20->oid;
  }
  else if (VAR_12 == 0 &&
     FUNC_2(VAR_9, VAR_20->opcintype))
  {
   if (FUNC_3(VAR_19, VAR_20->opcintype))
   {
    VAR_14++;
    VAR_11 = VAR_20->oid;
   }
   else if (VAR_14 == 0)
   {
    VAR_13++;
    VAR_11 = VAR_20->oid;
   }
  }
 }

 FUNC_13(VAR_17);

 FUNC_15(VAR_15, VAR_0);


 if (VAR_12 > 1)
  FUNC_7(VAR_4,
    (FUNC_8(VAR_3),
     FUNC_9("there are multiple default operator classes for data type %s",
      FUNC_10(VAR_9))));

 if (VAR_12 == 1 ||
  VAR_14 == 1 ||
  (VAR_14 == 0 && VAR_13 == 1))
  return VAR_11;

 return VAR_6;
}
