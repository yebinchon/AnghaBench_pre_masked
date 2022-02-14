
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TableScanDesc ;
struct TYPE_3__ {int oid; } ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int List ;
typedef int * HeapTuple ;
typedef TYPE_1__* Form_pg_class ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 int * FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*) ;
 int * FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int,int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;

List *
FUNC_10(void)
{
 Relation VAR_8;
 ScanKeyData VAR_9[1];
 TableScanDesc VAR_10;
 HeapTuple VAR_11;
 List *VAR_12 = VAR_5;

 VAR_8 = FUNC_9(VAR_7, VAR_0);

 FUNC_2(&VAR_9[0],
    VAR_1,
    VAR_2, VAR_3,
    FUNC_0(VAR_6));

 VAR_10 = FUNC_6(VAR_8, 1, VAR_9);

 while ((VAR_11 = FUNC_3(VAR_10, VAR_4)) != ((void*)0))
 {
  Form_pg_class VAR_13 = (Form_pg_class) FUNC_1(VAR_11);
  Oid VAR_14 = VAR_13->oid;

  if (FUNC_4(VAR_14, VAR_13))
   VAR_12 = FUNC_5(VAR_12, VAR_14);
 }

 FUNC_8(VAR_10);
 FUNC_7(VAR_8, VAR_0);

 return VAR_12;
}
