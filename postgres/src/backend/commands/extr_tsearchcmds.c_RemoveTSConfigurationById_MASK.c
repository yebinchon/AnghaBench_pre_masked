
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int t_self; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_5 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ,int ,int,int *,int,int *) ;
 int FUNC_8 (int ) ;
 TYPE_1__* FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;

void
FUNC_12(Oid VAR_9)
{
 Relation VAR_10,
    VAR_11;
 HeapTuple VAR_12;
 ScanKeyData VAR_13;
 SysScanDesc VAR_14;


 VAR_10 = FUNC_11(VAR_8, VAR_4);

 VAR_12 = FUNC_5(VAR_5, FUNC_2(VAR_9));

 if (!FUNC_1(VAR_12))
  FUNC_6(VAR_2, "cache lookup failed for text search dictionary %u",
    VAR_9);

 FUNC_0(VAR_10, &VAR_12->t_self);

 FUNC_3(VAR_12);

 FUNC_10(VAR_10, VAR_4);


 VAR_11 = FUNC_11(VAR_7, VAR_4);

 FUNC_4(&VAR_13,
    VAR_0,
    VAR_1, VAR_3,
    FUNC_2(VAR_9));

 VAR_14 = FUNC_7(VAR_11, VAR_6, 1,
         ((void*)0), 1, &VAR_13);

 while (FUNC_1((VAR_12 = FUNC_9(VAR_14))))
 {
  FUNC_0(VAR_11, &VAR_12->t_self);
 }

 FUNC_8(VAR_14);

 FUNC_10(VAR_11, VAR_4);
}
