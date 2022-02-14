
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ oid; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_enum ;
typedef int Datum ;
typedef int ArrayType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int *,int,scalar_t__,int,int,char) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int) ;
 int FUNC_12 (int ,int ,int *,int,int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;

__attribute__((used)) static ArrayType *
FUNC_17(Oid VAR_7, Oid VAR_8, Oid VAR_9)
{
 ArrayType *VAR_10;
 Relation VAR_11;
 Relation VAR_12;
 SysScanDesc VAR_13;
 HeapTuple VAR_14;
 ScanKeyData VAR_15;
 Datum *VAR_16;
 int VAR_17,
    VAR_18;
 bool VAR_19;






 FUNC_4(&VAR_15,
    VAR_1,
    VAR_2, VAR_5,
    FUNC_2(VAR_7));

 VAR_11 = FUNC_16(VAR_3, VAR_0);
 VAR_12 = FUNC_8(VAR_4, VAR_0);
 VAR_13 = FUNC_12(VAR_11, VAR_12, ((void*)0), 1, &VAR_15);

 VAR_17 = 64;
 VAR_16 = (Datum *) FUNC_9(VAR_17 * sizeof(Datum));
 VAR_18 = 0;
 VAR_19 = !FUNC_3(VAR_8);

 while (FUNC_1(VAR_14 = FUNC_14(VAR_13, VAR_6)))
 {
  Oid VAR_20 = ((Form_pg_enum) FUNC_0(VAR_14))->oid;

  if (!VAR_19 && VAR_8 == VAR_20)
   VAR_19 = 1;

  if (VAR_19)
  {

   FUNC_5(VAR_14);

   if (VAR_18 >= VAR_17)
   {
    VAR_17 *= 2;
    VAR_16 = (Datum *) FUNC_11(VAR_16, VAR_17 * sizeof(Datum));
   }

   VAR_16[VAR_18++] = FUNC_2(VAR_20);
  }

  if (FUNC_3(VAR_9) && VAR_9 == VAR_20)
   break;
 }

 FUNC_13(VAR_13);
 FUNC_7(VAR_12, VAR_0);
 FUNC_15(VAR_11, VAR_0);



 VAR_10 = FUNC_6(VAR_16, VAR_18, VAR_7, sizeof(Oid), 1, 'i');

 FUNC_10(VAR_16);

 return VAR_10;
}
