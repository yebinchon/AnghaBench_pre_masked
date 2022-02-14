
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
typedef TYPE_1__* Form_pg_constraint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,char const*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int,int *,int,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;

Oid
FUNC_15(Oid VAR_12, const char *VAR_13, bool VAR_14)
{
 Relation VAR_15;
 HeapTuple VAR_16;
 SysScanDesc VAR_17;
 ScanKeyData VAR_18[3];
 Oid VAR_19 = VAR_11;

 VAR_15 = FUNC_14(VAR_5, VAR_0);

 FUNC_5(&VAR_18[0],
    VAR_2,
    VAR_4, VAR_10,
    FUNC_3(VAR_11));
 FUNC_5(&VAR_18[1],
    VAR_3,
    VAR_4, VAR_10,
    FUNC_3(VAR_12));
 FUNC_5(&VAR_18[2],
    VAR_1,
    VAR_4, VAR_9,
    FUNC_0(VAR_13));

 VAR_17 = FUNC_10(VAR_15, VAR_6, 1,
         ((void*)0), 3, VAR_18);


 if (FUNC_2(VAR_16 = FUNC_12(VAR_17)))
  VAR_19 = ((Form_pg_constraint) FUNC_1(VAR_16))->oid;

 FUNC_11(VAR_17);


 if (!FUNC_4(VAR_19) && !VAR_14)
  FUNC_6(VAR_8,
    (FUNC_7(VAR_7),
     FUNC_8("constraint \"%s\" for domain %s does not exist",
      VAR_13, FUNC_9(VAR_12))));

 FUNC_13(VAR_15, VAR_0);

 return VAR_19;
}
