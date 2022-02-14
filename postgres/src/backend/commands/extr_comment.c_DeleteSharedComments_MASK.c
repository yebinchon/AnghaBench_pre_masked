
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int t_self; } ;
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
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,int,int *,int,int *) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

void
FUNC_8(Oid VAR_7, Oid VAR_8)
{
 Relation VAR_9;
 ScanKeyData VAR_10[2];
 SysScanDesc VAR_11;
 HeapTuple VAR_12;



 FUNC_2(&VAR_10[0],
    VAR_1,
    VAR_2, VAR_3,
    FUNC_1(VAR_7));
 FUNC_2(&VAR_10[1],
    VAR_0,
    VAR_2, VAR_3,
    FUNC_1(VAR_8));

 VAR_9 = FUNC_7(VAR_6, VAR_4);

 VAR_11 = FUNC_3(VAR_9, VAR_5, 1,
       ((void*)0), 2, VAR_10);

 while ((VAR_12 = FUNC_5(VAR_11)) != ((void*)0))
  FUNC_0(VAR_9, &VAR_12->t_self);



 FUNC_4(VAR_11);
 FUNC_6(VAR_9, VAR_4);
}
