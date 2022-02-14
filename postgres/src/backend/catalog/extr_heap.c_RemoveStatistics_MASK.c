
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
typedef scalar_t__ AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ,int ,int,int *,int,int *) ;
 int FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

void
FUNC_10(Oid VAR_8, AttrNumber VAR_9)
{
 Relation VAR_10;
 SysScanDesc VAR_11;
 ScanKeyData VAR_12[2];
 int VAR_13;
 HeapTuple VAR_14;

 VAR_10 = FUNC_9(VAR_6, VAR_5);

 FUNC_4(&VAR_12[0],
    VAR_1,
    VAR_2, VAR_4,
    FUNC_3(VAR_8));

 if (VAR_9 == 0)
  VAR_13 = 1;
 else
 {
  FUNC_4(&VAR_12[1],
     VAR_0,
     VAR_2, VAR_3,
     FUNC_2(VAR_9));
  VAR_13 = 2;
 }

 VAR_11 = FUNC_5(VAR_10, VAR_7, 1,
         ((void*)0), VAR_13, VAR_12);


 while (FUNC_1(VAR_14 = FUNC_7(VAR_11)))
  FUNC_0(VAR_10, &VAR_14->t_self);

 FUNC_6(VAR_11);

 FUNC_8(VAR_10, VAR_5);
}
