
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
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int,int *,int,int *) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

void
FUNC_8(Oid VAR_6)
{
 Relation VAR_7;
 SysScanDesc VAR_8;
 ScanKeyData VAR_9[1];
 HeapTuple VAR_10;


 VAR_7 = FUNC_7(VAR_1, VAR_5);


 FUNC_2(&VAR_9[0],
    VAR_0,
    VAR_3, VAR_4,
    FUNC_1(VAR_6));

 VAR_8 = FUNC_3(VAR_7, VAR_2, 1,
         ((void*)0), 1, VAR_9);


 while ((VAR_10 = FUNC_5(VAR_8)) != ((void*)0))
  FUNC_0(VAR_7, &VAR_10->t_self);


 FUNC_4(VAR_8);
 FUNC_6(VAR_7, VAR_5);
}
