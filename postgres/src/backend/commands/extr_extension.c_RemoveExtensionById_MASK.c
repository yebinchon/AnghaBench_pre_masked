
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int t_self; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef TYPE_1__* HeapTuple ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_8 ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,int ,int,int *,int,int *) ;
 int FUNC_9 (int ) ;
 TYPE_1__* FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;

void
FUNC_13(Oid VAR_9)
{
 Relation VAR_10;
 SysScanDesc VAR_11;
 HeapTuple VAR_12;
 ScanKeyData VAR_13[1];
 if (VAR_9 == VAR_2)
  FUNC_4(VAR_4,
    (FUNC_5(VAR_3),
     FUNC_6("cannot drop extension \"%s\" because it is being modified",
      FUNC_7(VAR_9))));

 VAR_10 = FUNC_12(VAR_6, VAR_8);

 FUNC_3(&VAR_13[0],
    VAR_0,
    VAR_1, VAR_7,
    FUNC_2(VAR_9));
 VAR_11 = FUNC_8(VAR_10, VAR_5, 1,
          ((void*)0), 1, VAR_13);

 VAR_12 = FUNC_10(VAR_11);


 if (FUNC_1(VAR_12))
  FUNC_0(VAR_10, &VAR_12->t_self);

 FUNC_9(VAR_11);

 FUNC_11(VAR_10, VAR_8);
}
