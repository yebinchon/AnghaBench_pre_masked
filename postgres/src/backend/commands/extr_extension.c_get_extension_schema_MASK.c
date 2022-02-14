
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int extnamespace; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_extension ;


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
 int FUNC_4 (int ,int ,int,int *,int,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static Oid
FUNC_9(Oid VAR_7)
{
 Oid VAR_8;
 Relation VAR_9;
 SysScanDesc VAR_10;
 HeapTuple VAR_11;
 ScanKeyData VAR_12[1];

 VAR_9 = FUNC_8(VAR_4, VAR_0);

 FUNC_3(&VAR_12[0],
    VAR_1,
    VAR_2, VAR_5,
    FUNC_2(VAR_7));

 VAR_10 = FUNC_4(VAR_9, VAR_3, 1,
          ((void*)0), 1, VAR_12);

 VAR_11 = FUNC_6(VAR_10);


 if (FUNC_1(VAR_11))
  VAR_8 = ((Form_pg_extension) FUNC_0(VAR_11))->extnamespace;
 else
  VAR_8 = VAR_6;

 FUNC_5(VAR_10);

 FUNC_7(VAR_9, VAR_0);

 return VAR_8;
}
