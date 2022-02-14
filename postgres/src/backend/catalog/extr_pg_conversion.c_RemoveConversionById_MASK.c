
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
 int FUNC_0 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (int ,char*,int ) ;
 TYPE_1__* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int,int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;

void
FUNC_10(Oid VAR_7)
{
 Relation VAR_8;
 HeapTuple VAR_9;
 TableScanDesc VAR_10;
 ScanKeyData VAR_11;

 FUNC_3(&VAR_11,
    VAR_0,
    VAR_1, VAR_4,
    FUNC_2(VAR_7));


 VAR_8 = FUNC_9(VAR_2, VAR_6);

 VAR_10 = FUNC_6(VAR_8, 1, &VAR_11);


 if (FUNC_1(VAR_9 = FUNC_5(VAR_10, VAR_5)))
  FUNC_0(VAR_8, &VAR_9->t_self);
 else
  FUNC_4(VAR_3, "could not find tuple for conversion %u", VAR_7);
 FUNC_8(VAR_10);
 FUNC_7(VAR_8, VAR_6);
}
