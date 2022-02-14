
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oid; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int ScanDirection ;
typedef int Relation ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_enum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int *,int,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static Oid
FUNC_12(Oid VAR_7, ScanDirection VAR_8)
{
 Relation VAR_9;
 Relation VAR_10;
 SysScanDesc VAR_11;
 HeapTuple VAR_12;
 ScanKeyData VAR_13;
 Oid VAR_14;






 FUNC_3(&VAR_13,
    VAR_1,
    VAR_2, VAR_5,
    FUNC_2(VAR_7));

 VAR_9 = FUNC_11(VAR_3, VAR_0);
 VAR_10 = FUNC_6(VAR_4, VAR_0);
 VAR_11 = FUNC_7(VAR_9, VAR_10, ((void*)0),
             1, &VAR_13);

 VAR_12 = FUNC_9(VAR_11, VAR_8);
 if (FUNC_1(VAR_12))
 {

  FUNC_4(VAR_12);
  VAR_14 = ((Form_pg_enum) FUNC_0(VAR_12))->oid;
 }
 else
 {

  VAR_14 = VAR_6;
 }

 FUNC_8(VAR_11);
 FUNC_5(VAR_10, VAR_0);
 FUNC_10(VAR_9, VAR_0);

 return VAR_14;
}
