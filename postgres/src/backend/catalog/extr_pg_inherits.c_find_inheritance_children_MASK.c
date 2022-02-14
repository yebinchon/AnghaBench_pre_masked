
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int inhrelid; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int List ;
typedef int LOCKMODE ;
typedef int * HeapTuple ;
typedef TYPE_1__* Form_pg_inherits ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int *,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int,int,int ) ;
 scalar_t__ FUNC_11 (int *,int) ;
 int FUNC_12 (int ,int ,int,int *,int,int *) ;
 int FUNC_13 (int ) ;
 int * FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;

List *
FUNC_17(Oid VAR_10, LOCKMODE VAR_11)
{
 List *VAR_12 = VAR_6;
 Relation VAR_13;
 SysScanDesc VAR_14;
 ScanKeyData VAR_15[1];
 HeapTuple VAR_16;
 Oid VAR_17;
 Oid *VAR_18;
 int VAR_19,
    VAR_20,
    VAR_21;





 if (!FUNC_6(VAR_10))
  return VAR_6;




 VAR_19 = 32;
 VAR_18 = (Oid *) FUNC_8(VAR_19 * sizeof(Oid));
 VAR_20 = 0;

 VAR_13 = FUNC_16(VAR_5, VAR_0);

 FUNC_3(&VAR_15[0],
    VAR_1,
    VAR_2, VAR_3,
    FUNC_2(VAR_10));

 VAR_14 = FUNC_12(VAR_13, VAR_4, 1,
         ((void*)0), 1, VAR_15);

 while ((VAR_16 = FUNC_14(VAR_14)) != ((void*)0))
 {
  VAR_17 = ((Form_pg_inherits) FUNC_0(VAR_16))->inhrelid;
  if (VAR_20 >= VAR_19)
  {
   VAR_19 *= 2;
   VAR_18 = (Oid *) FUNC_11(VAR_18, VAR_19 * sizeof(Oid));
  }
  VAR_18[VAR_20++] = VAR_17;
 }

 FUNC_13(VAR_14);

 FUNC_15(VAR_13, VAR_0);







 if (VAR_20 > 1)
  FUNC_10(VAR_18, VAR_20, sizeof(Oid), VAR_9);




 for (VAR_21 = 0; VAR_21 < VAR_20; VAR_21++)
 {
  VAR_17 = VAR_18[VAR_21];

  if (VAR_11 != VAR_7)
  {

   FUNC_1(VAR_17, VAR_11);






   if (!FUNC_4(VAR_8, FUNC_2(VAR_17)))
   {

    FUNC_5(VAR_17, VAR_11);

    continue;
   }
  }

  VAR_12 = FUNC_7(VAR_12, VAR_17);
 }

 FUNC_9(VAR_18);

 return VAR_12;
}
