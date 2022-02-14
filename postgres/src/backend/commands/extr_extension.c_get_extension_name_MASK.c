
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int extname; } ;
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
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int,int *,int,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;

char *
FUNC_11(Oid VAR_6)
{
 char *VAR_7;
 Relation VAR_8;
 SysScanDesc VAR_9;
 HeapTuple VAR_10;
 ScanKeyData VAR_11[1];

 VAR_8 = FUNC_10(VAR_4, VAR_0);

 FUNC_4(&VAR_11[0],
    VAR_1,
    VAR_2, VAR_5,
    FUNC_3(VAR_6));

 VAR_9 = FUNC_6(VAR_8, VAR_3, 1,
          ((void*)0), 1, VAR_11);

 VAR_10 = FUNC_8(VAR_9);


 if (FUNC_1(VAR_10))
  VAR_7 = FUNC_5(FUNC_2(((Form_pg_extension) FUNC_0(VAR_10))->extname));
 else
  VAR_7 = ((void*)0);

 FUNC_7(VAR_9);

 FUNC_9(VAR_8, VAR_0);

 return VAR_7;
}
