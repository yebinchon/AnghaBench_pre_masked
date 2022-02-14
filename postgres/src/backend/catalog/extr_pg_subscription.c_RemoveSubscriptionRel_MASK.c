
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int TableScanDesc ;
struct TYPE_4__ {int t_self; } ;
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
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int VAR_6 ;
 TYPE_1__* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int,int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;

void
FUNC_10(Oid VAR_7, Oid VAR_8)
{
 Relation VAR_9;
 TableScanDesc VAR_10;
 ScanKeyData VAR_11[2];
 HeapTuple VAR_12;
 int VAR_13 = 0;

 VAR_9 = FUNC_9(VAR_6, VAR_5);

 if (FUNC_3(VAR_7))
 {
  FUNC_4(&VAR_11[VAR_13++],
     VAR_1,
     VAR_2,
     VAR_3,
     FUNC_2(VAR_7));
 }

 if (FUNC_3(VAR_8))
 {
  FUNC_4(&VAR_11[VAR_13++],
     VAR_0,
     VAR_2,
     VAR_3,
     FUNC_2(VAR_8));
 }


 VAR_10 = FUNC_6(VAR_9, VAR_13, VAR_11);
 while (FUNC_1(VAR_12 = FUNC_5(VAR_10, VAR_4)))
 {
  FUNC_0(VAR_9, &VAR_12->t_self);
 }
 FUNC_8(VAR_10);

 FUNC_7(VAR_9, VAR_5);
}
