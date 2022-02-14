
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
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,int ,int ,int ,int,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int,int *,int,int *) ;
 int FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

void
FUNC_10(Oid VAR_9)
{
 Relation VAR_10;
 ScanKeyData VAR_11[1];
 SysScanDesc VAR_12;
 HeapTuple VAR_13;

 VAR_10 = FUNC_9(VAR_8, VAR_5);





 FUNC_3(&VAR_11[0],
    VAR_0,
    VAR_1, VAR_3,
    FUNC_2(VAR_9));


 VAR_12 = FUNC_5(VAR_10, VAR_7, 1,
         ((void*)0), 1, VAR_11);

 while (FUNC_1(VAR_13 = FUNC_7(VAR_12)))
 {
  FUNC_0(VAR_10, &VAR_13->t_self);
 }

 FUNC_6(VAR_12);


 FUNC_4(VAR_10, VAR_2, VAR_9, 0, 1,
      VAR_4, VAR_4,
      VAR_6);

 FUNC_8(VAR_10, VAR_5);
}
