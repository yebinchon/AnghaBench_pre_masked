
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int datname; } ;
struct TYPE_7__ {int t_self; } ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef int ObjectAddress ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_database ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,TYPE_1__*) ;
 scalar_t__ FUNC_1 (scalar_t__,int*,int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int ,int ,scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_13 ;
 TYPE_1__* FUNC_9 (int ,int ) ;
 int VAR_14 ;
 int FUNC_10 (int ,int ,char const*) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (char const*,int) ;
 int FUNC_17 (char const*,int ,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_18 () ;
 int FUNC_19 (int *,char const*) ;
 int FUNC_20 (scalar_t__,int ) ;
 int * FUNC_21 (char const*,char*) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,int ) ;

ObjectAddress
FUNC_24(const char *VAR_15, const char *VAR_16)
{
 Oid VAR_17;
 HeapTuple VAR_18;
 Relation VAR_19;
 int VAR_20;
 int VAR_21;
 ObjectAddress VAR_22;





 VAR_19 = FUNC_23(VAR_3, VAR_13);

 if (!FUNC_17(VAR_15, VAR_1, &VAR_17, ((void*)0), ((void*)0),
      ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0)))
  FUNC_12(VAR_9,
    (FUNC_13(VAR_8),
     FUNC_15("database \"%s\" does not exist", VAR_15)));


 if (!FUNC_20(VAR_17, FUNC_3()))
  FUNC_10(VAR_0, VAR_12,
        VAR_15);


 if (!FUNC_18())
  FUNC_12(VAR_9,
    (FUNC_13(VAR_6),
     FUNC_15("permission denied to rename database")));
 if (FUNC_8(FUNC_16(VAR_16, 1)))
  FUNC_12(VAR_9,
    (FUNC_13(VAR_4),
     FUNC_15("database \"%s\" already exists", VAR_16)));







 if (VAR_17 == VAR_10)
  FUNC_12(VAR_9,
    (FUNC_13(VAR_5),
     FUNC_15("current database cannot be renamed")));







 if (FUNC_1(VAR_17, &VAR_20, &VAR_21))
  FUNC_12(VAR_9,
    (FUNC_13(VAR_7),
     FUNC_15("database \"%s\" is being accessed by other users",
      VAR_15),
     FUNC_14(VAR_20, VAR_21)));


 VAR_18 = FUNC_9(VAR_2, FUNC_7(VAR_17));
 if (!FUNC_4(VAR_18))
  FUNC_11(VAR_9, "cache lookup failed for database %u", VAR_17);
 FUNC_19(&(((Form_pg_database) FUNC_2(VAR_18))->datname), VAR_16);
 FUNC_0(VAR_19, &VAR_18->t_self, VAR_18);

 FUNC_5(VAR_3, VAR_17, 0);

 FUNC_6(VAR_22, VAR_3, VAR_17);




 FUNC_22(VAR_19, VAR_11);

 return VAR_22;
}
