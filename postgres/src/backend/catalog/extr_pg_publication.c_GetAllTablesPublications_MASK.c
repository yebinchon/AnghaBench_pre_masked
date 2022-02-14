
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oid; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int List ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_publication ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int * FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int ,int,int *,int,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

List *
FUNC_10(void)
{
 List *VAR_7;
 Relation VAR_8;
 ScanKeyData VAR_9;
 SysScanDesc VAR_10;
 HeapTuple VAR_11;


 VAR_8 = FUNC_9(VAR_6, VAR_0);

 FUNC_3(&VAR_9,
    VAR_1,
    VAR_2, VAR_3,
    FUNC_0(1));

 VAR_10 = FUNC_5(VAR_8, VAR_4, 0,
         ((void*)0), 1, &VAR_9);

 VAR_7 = VAR_5;
 while (FUNC_2(VAR_11 = FUNC_7(VAR_10)))
 {
  Oid VAR_12 = ((Form_pg_publication) FUNC_1(VAR_11))->oid;

  VAR_7 = FUNC_4(VAR_7, VAR_12);
 }

 FUNC_6(VAR_10);
 FUNC_8(VAR_8, VAR_0);

 return VAR_7;
}
