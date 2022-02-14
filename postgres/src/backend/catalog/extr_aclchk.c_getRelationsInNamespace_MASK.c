
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TableScanDesc ;
struct TYPE_2__ {int oid; } ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int List ;
typedef int * HeapTuple ;
typedef TYPE_1__* Form_pg_class ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int *) ;
 int * VAR_7 ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int * FUNC_4 (int ,int ) ;
 int * FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int,int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static List *
FUNC_10(Oid VAR_9, char VAR_10)
{
 List *VAR_11 = VAR_7;
 ScanKeyData VAR_12[2];
 Relation VAR_13;
 TableScanDesc VAR_14;
 HeapTuple VAR_15;

 FUNC_3(&VAR_12[0],
    VAR_2,
    VAR_3, VAR_5,
    FUNC_2(VAR_9));
 FUNC_3(&VAR_12[1],
    VAR_1,
    VAR_3, VAR_4,
    FUNC_0(VAR_10));

 VAR_13 = FUNC_9(VAR_8, VAR_0);
 VAR_14 = FUNC_6(VAR_13, 2, VAR_12);

 while ((VAR_15 = FUNC_4(VAR_14, VAR_6)) != ((void*)0))
 {
  Oid VAR_16 = ((Form_pg_class) FUNC_1(VAR_15))->oid;

  VAR_11 = FUNC_5(VAR_11, VAR_16);
 }

 FUNC_8(VAR_14);
 FUNC_7(VAR_13, VAR_0);

 return VAR_11;
}
