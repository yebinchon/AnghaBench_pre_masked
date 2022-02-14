
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
typedef TYPE_1__* Form_pg_trigger ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,char const*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int,int *,int,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;

Oid
FUNC_14(Oid VAR_11, const char *VAR_12, bool VAR_13)
{
 Relation VAR_14;
 ScanKeyData VAR_15[2];
 SysScanDesc VAR_16;
 HeapTuple VAR_17;
 Oid VAR_18;




 VAR_14 = FUNC_13(VAR_9, VAR_0);

 FUNC_4(&VAR_15[0],
    VAR_2,
    VAR_3, VAR_7,
    FUNC_3(VAR_11));
 FUNC_4(&VAR_15[1],
    VAR_1,
    VAR_3, VAR_6,
    FUNC_0(VAR_12));

 VAR_16 = FUNC_9(VAR_14, VAR_10, 1,
        ((void*)0), 2, VAR_15);

 VAR_17 = FUNC_11(VAR_16);

 if (!FUNC_2(VAR_17))
 {
  if (!VAR_13)
   FUNC_5(VAR_5,
     (FUNC_6(VAR_4),
      FUNC_7("trigger \"%s\" for table \"%s\" does not exist",
       VAR_12, FUNC_8(VAR_11))));
  VAR_18 = VAR_8;
 }
 else
 {
  VAR_18 = ((Form_pg_trigger) FUNC_1(VAR_17))->oid;
 }

 FUNC_10(VAR_16);
 FUNC_12(VAR_14, VAR_0);
 return VAR_18;
}
