
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
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_extension ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (int ,int ,int,int *,int,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;

Oid
FUNC_13(const char *VAR_9, bool VAR_10)
{
 Oid VAR_11;
 Relation VAR_12;
 SysScanDesc VAR_13;
 HeapTuple VAR_14;
 ScanKeyData VAR_15[1];

 VAR_12 = FUNC_12(VAR_6, VAR_0);

 FUNC_4(&VAR_15[0],
    VAR_1,
    VAR_2, VAR_7,
    FUNC_0(VAR_9));

 VAR_13 = FUNC_8(VAR_12, VAR_5, 1,
          ((void*)0), 1, VAR_15);

 VAR_14 = FUNC_10(VAR_13);


 if (FUNC_2(VAR_14))
  VAR_11 = ((Form_pg_extension) FUNC_1(VAR_14))->oid;
 else
  VAR_11 = VAR_8;

 FUNC_9(VAR_13);

 FUNC_11(VAR_12, VAR_0);

 if (!FUNC_3(VAR_11) && !VAR_10)
  FUNC_5(VAR_4,
    (FUNC_6(VAR_3),
     FUNC_7("extension \"%s\" does not exist",
      VAR_9)));

 return VAR_11;
}
