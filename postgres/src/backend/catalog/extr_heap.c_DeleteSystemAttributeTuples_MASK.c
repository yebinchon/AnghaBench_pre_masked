
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
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int,int *,int,int *) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;

void
FUNC_9(Oid VAR_9)
{
 Relation VAR_10;
 SysScanDesc VAR_11;
 ScanKeyData VAR_12[2];
 HeapTuple VAR_13;


 VAR_10 = FUNC_8(VAR_2, VAR_8);


 FUNC_3(&VAR_12[0],
    VAR_1,
    VAR_4, VAR_7,
    FUNC_2(VAR_9));
 FUNC_3(&VAR_12[1],
    VAR_0,
    VAR_5, VAR_6,
    FUNC_1(0));

 VAR_11 = FUNC_4(VAR_10, VAR_3, 1,
         ((void*)0), 2, VAR_12);


 while ((VAR_13 = FUNC_6(VAR_11)) != ((void*)0))
  FUNC_0(VAR_10, &VAR_13->t_self);


 FUNC_5(VAR_11);
 FUNC_7(VAR_10, VAR_8);
}
