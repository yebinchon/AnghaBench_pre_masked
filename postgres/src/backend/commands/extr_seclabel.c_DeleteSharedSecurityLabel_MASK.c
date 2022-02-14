
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
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int ,int,int *,int,int *) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;

void
FUNC_9(Oid VAR_7, Oid VAR_8)
{
 Relation VAR_9;
 ScanKeyData VAR_10[2];
 SysScanDesc VAR_11;
 HeapTuple VAR_12;

 FUNC_3(&VAR_10[0],
    VAR_1,
    VAR_2, VAR_3,
    FUNC_2(VAR_7));
 FUNC_3(&VAR_10[1],
    VAR_0,
    VAR_2, VAR_3,
    FUNC_2(VAR_8));

 VAR_9 = FUNC_8(VAR_6, VAR_4);

 VAR_11 = FUNC_4(VAR_9, VAR_5, 1,
         ((void*)0), 2, VAR_10);
 while (FUNC_1(VAR_12 = FUNC_6(VAR_11)))
  FUNC_0(VAR_9, &VAR_12->t_self);
 FUNC_5(VAR_11);

 FUNC_7(VAR_9, VAR_4);
}
