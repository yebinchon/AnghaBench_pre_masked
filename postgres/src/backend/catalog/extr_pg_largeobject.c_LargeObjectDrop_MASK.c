
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int t_self; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ,int ,int,int *,int,int *) ;
 int FUNC_8 (int ) ;
 TYPE_1__* FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;

void
FUNC_12(Oid VAR_11)
{
 Relation VAR_12;
 Relation VAR_13;
 ScanKeyData VAR_14[1];
 SysScanDesc VAR_15;
 HeapTuple VAR_16;

 VAR_12 = FUNC_11(VAR_8,
       VAR_10);

 VAR_13 = FUNC_11(VAR_9,
        VAR_10);




 FUNC_3(&VAR_14[0],
    VAR_1,
    VAR_2, VAR_5,
    FUNC_2(VAR_11));

 VAR_15 = FUNC_7(VAR_12,
         VAR_7, 1,
         ((void*)0), 1, VAR_14);

 VAR_16 = FUNC_9(VAR_15);
 if (!FUNC_1(VAR_16))
  FUNC_4(VAR_4,
    (FUNC_5(VAR_3),
     FUNC_6("large object %u does not exist", VAR_11)));

 FUNC_0(VAR_12, &VAR_16->t_self);

 FUNC_8(VAR_15);




 FUNC_3(&VAR_14[0],
    VAR_0,
    VAR_2, VAR_5,
    FUNC_2(VAR_11));

 VAR_15 = FUNC_7(VAR_13,
         VAR_6, 1,
         ((void*)0), 1, VAR_14);
 while (FUNC_1(VAR_16 = FUNC_9(VAR_15)))
 {
  FUNC_0(VAR_13, &VAR_16->t_self);
 }

 FUNC_8(VAR_15);

 FUNC_10(VAR_13, VAR_10);

 FUNC_10(VAR_12, VAR_10);
}
