
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
 int FUNC_0 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int,int *,int,int *) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;

void
FUNC_9(Oid VAR_6)
{
 Relation VAR_7;
 ScanKeyData VAR_8[1];
 SysScanDesc VAR_9;
 HeapTuple VAR_10;

 VAR_7 = FUNC_8(VAR_2, VAR_5);

 FUNC_3(&VAR_8[0],
    VAR_0,
    VAR_1, VAR_4,
    FUNC_2(VAR_6));

 VAR_9 = FUNC_4(VAR_7, VAR_3, 1,
         ((void*)0), 1, VAR_8);

 while (FUNC_1(VAR_10 = FUNC_6(VAR_9)))
 {
  FUNC_0(VAR_7, &VAR_10->t_self);
 }

 FUNC_5(VAR_9);

 FUNC_7(VAR_7, VAR_5);
}
