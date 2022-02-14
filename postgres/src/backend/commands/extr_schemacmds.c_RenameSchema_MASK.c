
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int nspname; int oid; } ;
struct TYPE_8__ {int t_self; } ;
typedef int Relation ;
typedef int Oid ;
typedef int ObjectAddress ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_namespace ;
typedef scalar_t__ AclResult ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,int *,TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (char const*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (int ,int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_13 ;
 TYPE_1__* FUNC_9 (int ,int ) ;
 int FUNC_10 (scalar_t__,int ,char const*) ;
 int VAR_14 ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,char const*) ;
 char const* FUNC_15 (int ) ;
 int FUNC_16 (char const*,int) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (int *,char const*) ;
 scalar_t__ FUNC_19 (int ,int ,int ) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int ) ;

ObjectAddress
FUNC_23(const char *VAR_15, const char *VAR_16)
{
 Oid VAR_17;
 HeapTuple VAR_18;
 Relation VAR_19;
 AclResult VAR_20;
 ObjectAddress VAR_21;
 Form_pg_namespace VAR_22;

 VAR_19 = FUNC_22(VAR_9, VAR_13);

 VAR_18 = FUNC_9(VAR_8, FUNC_0(VAR_15));
 if (!FUNC_4(VAR_18))
  FUNC_11(VAR_6,
    (FUNC_12(VAR_5),
     FUNC_14("schema \"%s\" does not exist", VAR_15)));

 VAR_22 = (Form_pg_namespace) FUNC_2(VAR_18);
 VAR_17 = VAR_22->oid;


 if (FUNC_8(FUNC_16(VAR_16, 1)))
  FUNC_11(VAR_6,
    (FUNC_12(VAR_3),
     FUNC_14("schema \"%s\" already exists", VAR_16)));


 if (!FUNC_20(VAR_17, FUNC_3()))
  FUNC_10(VAR_0, VAR_12,
        VAR_15);


 VAR_20 = FUNC_19(VAR_7, FUNC_3(), VAR_2);
 if (VAR_20 != VAR_1)
  FUNC_10(VAR_20, VAR_11,
        FUNC_15(VAR_7));

 if (!VAR_14 && FUNC_6(VAR_16))
  FUNC_11(VAR_6,
    (FUNC_12(VAR_4),
     FUNC_14("unacceptable schema name \"%s\"", VAR_16),
     FUNC_13("The prefix \"pg_\" is reserved for system schemas.")));


 FUNC_18(&VAR_22->nspname, VAR_16);
 FUNC_1(VAR_19, &VAR_18->t_self, VAR_18);

 FUNC_5(VAR_9, VAR_17, 0);

 FUNC_7(VAR_21, VAR_9, VAR_17);

 FUNC_21(VAR_19, VAR_10);
 FUNC_17(VAR_18);

 return VAR_21;
}
