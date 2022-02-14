
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int TableScanDesc ;
struct TYPE_10__ {int spcname; int oid; } ;
struct TYPE_9__ {int t_self; } ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int ObjectAddress ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_tablespace ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,int *,TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (char const*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_11 ;
 int FUNC_8 (int *,int ,int ,int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (int ,int ,char const*) ;
 int VAR_14 ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,char const*) ;
 TYPE_1__* FUNC_15 (TYPE_1__*) ;
 TYPE_1__* FUNC_16 (int ,int ) ;
 int FUNC_17 (int *,char const*) ;
 int FUNC_18 (int ,int ) ;
 scalar_t__ FUNC_19 (char const*,char*,int) ;
 int FUNC_20 (int ,int,int *) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ,int ) ;

ObjectAddress
FUNC_24(const char *VAR_15, const char *VAR_16)
{
 Oid VAR_17;
 Relation VAR_18;
 ScanKeyData VAR_19[1];
 TableScanDesc VAR_20;
 HeapTuple VAR_21;
 HeapTuple VAR_22;
 Form_pg_tablespace VAR_23;
 ObjectAddress VAR_24;


 VAR_18 = FUNC_23(VAR_12, VAR_11);

 FUNC_8(&VAR_19[0],
    VAR_1,
    VAR_2, VAR_7,
    FUNC_0(VAR_15));
 VAR_20 = FUNC_20(VAR_18, 1, VAR_19);
 VAR_21 = FUNC_16(VAR_20, VAR_8);
 if (!FUNC_4(VAR_21))
  FUNC_11(VAR_6,
    (FUNC_12(VAR_5),
     FUNC_14("tablespace \"%s\" does not exist",
      VAR_15)));

 VAR_22 = FUNC_15(VAR_21);
 VAR_23 = (Form_pg_tablespace) FUNC_2(VAR_22);
 VAR_17 = VAR_23->oid;

 FUNC_22(VAR_20);


 if (!FUNC_18(VAR_17, FUNC_3()))
  FUNC_9(VAR_0, VAR_10, VAR_15);


 if (!VAR_14 && FUNC_6(VAR_16))
  FUNC_11(VAR_6,
    (FUNC_12(VAR_4),
     FUNC_14("unacceptable tablespace name \"%s\"", VAR_16),
     FUNC_13("The prefix \"pg_\" is reserved for system tablespaces.")));
 FUNC_8(&VAR_19[0],
    VAR_1,
    VAR_2, VAR_7,
    FUNC_0(VAR_16));
 VAR_20 = FUNC_20(VAR_18, 1, VAR_19);
 VAR_21 = FUNC_16(VAR_20, VAR_8);
 if (FUNC_4(VAR_21))
  FUNC_11(VAR_6,
    (FUNC_12(VAR_3),
     FUNC_14("tablespace \"%s\" already exists",
      VAR_16)));

 FUNC_22(VAR_20);


 FUNC_17(&(VAR_23->spcname), VAR_16);

 FUNC_1(VAR_18, &VAR_22->t_self, VAR_22);

 FUNC_5(VAR_12, VAR_17, 0);

 FUNC_7(VAR_24, VAR_12, VAR_17);

 FUNC_21(VAR_18, VAR_9);

 return VAR_24;
}
