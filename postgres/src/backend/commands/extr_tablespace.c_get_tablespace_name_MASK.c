
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TableScanDesc ;
struct TYPE_2__ {int spcname; } ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_tablespace ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_5 (int ,int ) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;

char *
FUNC_11(Oid VAR_6)
{
 char *VAR_7;
 Relation VAR_8;
 TableScanDesc VAR_9;
 HeapTuple VAR_10;
 ScanKeyData VAR_11[1];






 VAR_8 = FUNC_10(VAR_5, VAR_0);

 FUNC_4(&VAR_11[0],
    VAR_1,
    VAR_2, VAR_3,
    FUNC_3(VAR_6));
 VAR_9 = FUNC_7(VAR_8, 1, VAR_11);
 VAR_10 = FUNC_5(VAR_9, VAR_4);


 if (FUNC_1(VAR_10))
  VAR_7 = FUNC_6(FUNC_2(((Form_pg_tablespace) FUNC_0(VAR_10))->spcname));
 else
  VAR_7 = ((void*)0);

 FUNC_9(VAR_9);
 FUNC_8(VAR_8, VAR_0);

 return VAR_7;
}
