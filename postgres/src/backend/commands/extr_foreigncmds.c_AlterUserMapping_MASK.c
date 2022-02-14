
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int repl_val ;
typedef int repl_repl ;
typedef int repl_null ;
struct TYPE_20__ {scalar_t__ options; int servername; scalar_t__ user; } ;
struct TYPE_19__ {int fdwvalidator; } ;
struct TYPE_18__ {int fdwid; int serverid; } ;
struct TYPE_17__ {int t_self; } ;
struct TYPE_16__ {scalar_t__ roletype; } ;
typedef TYPE_1__ RoleSpec ;
typedef int Relation ;
typedef int Oid ;
typedef int ObjectAddress ;
typedef TYPE_2__* HeapTuple ;
typedef TYPE_3__ ForeignServer ;
typedef TYPE_4__ ForeignDataWrapper ;
typedef int Datum ;
typedef TYPE_5__ AlterUserMappingStmt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,TYPE_2__*) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_12 (int ) ;
 int VAR_7 ;
 TYPE_2__* FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,TYPE_2__*,int,int*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_15 (int ,char*,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (char*,int ,int ) ;
 int FUNC_19 (scalar_t__,int) ;
 int FUNC_20 (TYPE_2__*) ;
 TYPE_2__* FUNC_21 (TYPE_2__*,int ,int*,int*,int*) ;
 int FUNC_22 (int*,int,int) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int ,int ) ;
 int FUNC_25 (int ,int,scalar_t__,int ) ;
 int FUNC_26 (int ,int ,int ) ;

ObjectAddress
FUNC_27(AlterUserMappingStmt *VAR_11)
{
 Relation VAR_12;
 HeapTuple VAR_13;
 Datum VAR_14[VAR_5];
 bool VAR_15[VAR_5];
 bool VAR_16[VAR_5];
 Oid VAR_17;
 Oid VAR_18;
 ForeignServer *VAR_19;
 ObjectAddress VAR_20;
 RoleSpec *VAR_21 = (RoleSpec *) VAR_11->user;

 VAR_12 = FUNC_24(VAR_10, VAR_7);

 if (VAR_21->roletype == VAR_6)
  VAR_17 = VAR_0;
 else
  VAR_17 = FUNC_19(VAR_11->user, 0);

 VAR_19 = FUNC_3(VAR_11->servername, 0);

 VAR_18 = FUNC_4(VAR_9, VAR_1,
         FUNC_8(VAR_17),
         FUNC_8(VAR_19->serverid));
 if (!FUNC_9(VAR_18))
  FUNC_16(VAR_4,
    (FUNC_17(VAR_3),
     FUNC_18("user mapping for \"%s\" does not exist for server \"%s\"",
      FUNC_6(VAR_17), VAR_11->servername)));

 FUNC_26(VAR_17, VAR_19->serverid, VAR_11->servername);

 VAR_13 = FUNC_13(VAR_8, FUNC_8(VAR_18));

 if (!FUNC_5(VAR_13))
  FUNC_15(VAR_4, "cache lookup failed for user mapping %u", VAR_18);

 FUNC_22(VAR_14, 0, sizeof(VAR_14));
 FUNC_22(VAR_15, 0, sizeof(VAR_15));
 FUNC_22(VAR_16, 0, sizeof(VAR_16));

 if (VAR_11->options)
 {
  ForeignDataWrapper *VAR_22;
  Datum VAR_23;
  bool VAR_24;





  VAR_22 = FUNC_2(VAR_19->fdwid);

  VAR_23 = FUNC_14(VAR_9,
        VAR_13,
        VAR_2,
        &VAR_24);
  if (VAR_24)
   VAR_23 = FUNC_10(((void*)0));


  VAR_23 = FUNC_25(VAR_10,
          VAR_23,
          VAR_11->options,
          VAR_22->fdwvalidator);

  if (FUNC_11(FUNC_1(VAR_23)))
   VAR_14[VAR_2 - 1] = VAR_23;
  else
   VAR_15[VAR_2 - 1] = 1;

  VAR_16[VAR_2 - 1] = 1;
 }


 VAR_13 = FUNC_21(VAR_13, FUNC_12(VAR_12),
         VAR_14, VAR_15, VAR_16);

 FUNC_0(VAR_12, &VAR_13->t_self, VAR_13);

 FUNC_7(VAR_20, VAR_10, VAR_18);

 FUNC_20(VAR_13);

 FUNC_23(VAR_12, VAR_7);

 return VAR_20;
}
