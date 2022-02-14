
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int values ;
typedef int nulls ;
struct TYPE_23__ {int options; int servername; scalar_t__ if_not_exists; scalar_t__ user; } ;
struct TYPE_22__ {int fdwvalidator; } ;
struct TYPE_21__ {int serverid; int fdwid; } ;
struct TYPE_20__ {scalar_t__ objectSubId; int objectId; int classId; } ;
struct TYPE_19__ {int rd_att; } ;
struct TYPE_18__ {scalar_t__ roletype; } ;
typedef TYPE_1__ RoleSpec ;
typedef TYPE_2__* Relation ;
typedef int Oid ;
typedef TYPE_3__ ObjectAddress ;
typedef int HeapTuple ;
typedef TYPE_4__ ForeignServer ;
typedef TYPE_5__ ForeignDataWrapper ;
typedef int Datum ;
typedef TYPE_6__ CreateUserMappingStmt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_5__* FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (int ,int,int,int) ;
 TYPE_3__ VAR_9 ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*,int ,int ) ;
 int FUNC_15 (scalar_t__,int) ;
 int FUNC_16 (int ,int*,int*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int*,int,int) ;
 int FUNC_19 (TYPE_3__*,TYPE_3__*,int ) ;
 int FUNC_20 (int ,int ,int ) ;
 int FUNC_21 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,int ,int ,int ) ;
 int FUNC_24 (int ,int ,int ) ;

ObjectAddress
FUNC_25(CreateUserMappingStmt *VAR_17)
{
 Relation VAR_18;
 Datum VAR_19;
 Datum VAR_20[VAR_11];
 bool VAR_21[VAR_11];
 HeapTuple VAR_22;
 Oid VAR_23;
 Oid VAR_24;
 ObjectAddress VAR_25;
 ObjectAddress VAR_26;
 ForeignServer *VAR_27;
 ForeignDataWrapper *VAR_28;
 RoleSpec *VAR_29 = (RoleSpec *) VAR_17->user;

 VAR_18 = FUNC_22(VAR_16, VAR_13);

 if (VAR_29->roletype == VAR_12)
  VAR_23 = VAR_0;
 else
  VAR_23 = FUNC_15(VAR_17->user, 0);


 VAR_27 = FUNC_3(VAR_17->servername, 0);

 FUNC_24(VAR_23, VAR_27->serverid, VAR_17->servername);




 VAR_24 = FUNC_5(VAR_14, VAR_1,
         FUNC_8(VAR_23),
         FUNC_8(VAR_27->serverid));

 if (FUNC_9(VAR_24))
 {
  if (VAR_17->if_not_exists)
  {
   FUNC_12(VAR_10,
     (FUNC_13(VAR_6),
      FUNC_14("user mapping for \"%s\" already exists for server \"%s\", skipping",
       FUNC_7(VAR_23),
       VAR_17->servername)));

   FUNC_21(VAR_18, VAR_13);
   return VAR_9;
  }
  else
   FUNC_12(VAR_7,
     (FUNC_13(VAR_6),
      FUNC_14("user mapping for \"%s\" already exists for server \"%s\"",
       FUNC_7(VAR_23),
       VAR_17->servername)));
 }

 VAR_28 = FUNC_2(VAR_27->fdwid);




 FUNC_18(VAR_20, 0, sizeof(VAR_20));
 FUNC_18(VAR_21, 0, sizeof(VAR_21));

 VAR_24 = FUNC_4(VAR_18, VAR_15,
         VAR_1);
 VAR_20[VAR_1 - 1] = FUNC_8(VAR_24);
 VAR_20[VAR_4 - 1] = FUNC_8(VAR_23);
 VAR_20[VAR_3 - 1] = FUNC_8(VAR_27->serverid);


 VAR_19 = FUNC_23(VAR_16,
           FUNC_10(((void*)0)),
           VAR_17->options,
           VAR_28->fdwvalidator);

 if (FUNC_11(FUNC_1(VAR_19)))
  VAR_20[VAR_2 - 1] = VAR_19;
 else
  VAR_21[VAR_2 - 1] = 1;

 VAR_22 = FUNC_16(VAR_18->rd_att, VAR_20, VAR_21);

 FUNC_0(VAR_18, VAR_22);

 FUNC_17(VAR_22);


 VAR_25.classId = VAR_16;
 VAR_25.objectId = VAR_24;
 VAR_25.objectSubId = 0;

 VAR_26.classId = VAR_8;
 VAR_26.objectId = VAR_27->serverid;
 VAR_26.objectSubId = 0;
 FUNC_19(&VAR_25, &VAR_26, VAR_5);

 if (FUNC_9(VAR_23))
 {

  FUNC_20(VAR_16, VAR_24, VAR_23);
 }
 FUNC_6(VAR_16, VAR_24, 0);

 FUNC_21(VAR_18, VAR_13);

 return VAR_25;
}
