
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int values ;
typedef int nulls ;
struct TYPE_19__ {int options; scalar_t__ version; scalar_t__ servertype; int servername; int fdwname; scalar_t__ if_not_exists; } ;
struct TYPE_18__ {int fdwid; int fdwvalidator; int fdwname; } ;
struct TYPE_17__ {scalar_t__ objectSubId; int objectId; int classId; } ;
struct TYPE_16__ {int rd_att; } ;
typedef TYPE_1__* Relation ;
typedef int Oid ;
typedef TYPE_2__ ObjectAddress ;
typedef int HeapTuple ;
typedef TYPE_3__ ForeignDataWrapper ;
typedef int Datum ;
typedef TYPE_4__ CreateForeignServerStmt ;
typedef scalar_t__ AclResult ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_10 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_3__* FUNC_5 (int ,int) ;
 int * FUNC_6 (int ,int) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int FUNC_8 () ;
 TYPE_2__ VAR_16 ;
 int FUNC_9 (int ,int ,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ) ;
 int VAR_20 ;
 int FUNC_13 (scalar_t__,int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*,int ) ;
 int FUNC_17 (int ,int*,int*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int*,int,int) ;
 int VAR_21 ;
 scalar_t__ FUNC_20 (int ,int ,int ) ;
 int FUNC_21 (TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_22 (TYPE_2__*,int) ;
 int FUNC_23 (int ,int ,int ) ;
 int FUNC_24 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_25 (int ,int ) ;
 int FUNC_26 (int ,int ,int ,int ) ;

ObjectAddress
FUNC_27(CreateForeignServerStmt *VAR_22)
{
 Relation VAR_23;
 Datum VAR_24;
 Datum VAR_25[VAR_18];
 bool VAR_26[VAR_18];
 HeapTuple VAR_27;
 Oid VAR_28;
 Oid VAR_29;
 AclResult VAR_30;
 ObjectAddress VAR_31;
 ObjectAddress VAR_32;
 ForeignDataWrapper *VAR_33;

 VAR_23 = FUNC_25(VAR_15, VAR_20);


 VAR_29 = FUNC_8();





 if (FUNC_6(VAR_22->servername, 1) != ((void*)0))
 {
  if (VAR_22->if_not_exists)
  {
   FUNC_14(VAR_17,
     (FUNC_15(VAR_11),
      FUNC_16("server \"%s\" already exists, skipping",
       VAR_22->servername)));
   FUNC_24(VAR_23, VAR_20);
   return VAR_16;
  }
  else
   FUNC_14(VAR_12,
     (FUNC_15(VAR_11),
      FUNC_16("server \"%s\" already exists",
       VAR_22->servername)));
 }





 VAR_33 = FUNC_5(VAR_22->fdwname, 0);

 VAR_30 = FUNC_20(VAR_33->fdwid, VAR_29, VAR_1);
 if (VAR_30 != VAR_0)
  FUNC_13(VAR_30, VAR_19, VAR_33->fdwname);




 FUNC_19(VAR_25, 0, sizeof(VAR_25));
 FUNC_19(VAR_26, 0, sizeof(VAR_26));

 VAR_28 = FUNC_7(VAR_23, VAR_14,
          VAR_2);
 VAR_25[VAR_2 - 1] = FUNC_10(VAR_28);
 VAR_25[VAR_5 - 1] =
  FUNC_4(VAR_21, FUNC_0(VAR_22->servername));
 VAR_25[VAR_7 - 1] = FUNC_10(VAR_29);
 VAR_25[VAR_4 - 1] = FUNC_10(VAR_33->fdwid);


 if (VAR_22->servertype)
  VAR_25[VAR_8 - 1] =
   FUNC_1(VAR_22->servertype);
 else
  VAR_26[VAR_8 - 1] = 1;


 if (VAR_22->version)
  VAR_25[VAR_9 - 1] =
   FUNC_1(VAR_22->version);
 else
  VAR_26[VAR_9 - 1] = 1;


 VAR_26[VAR_3 - 1] = 1;


 VAR_24 = FUNC_26(VAR_15,
           FUNC_11(((void*)0)),
           VAR_22->options,
           VAR_33->fdwvalidator);

 if (FUNC_12(FUNC_3(VAR_24)))
  VAR_25[VAR_6 - 1] = VAR_24;
 else
  VAR_26[VAR_6 - 1] = 1;

 VAR_27 = FUNC_17(VAR_23->rd_att, VAR_25, VAR_26);

 FUNC_2(VAR_23, VAR_27);

 FUNC_18(VAR_27);


 VAR_31.classId = VAR_15;
 VAR_31.objectId = VAR_28;
 VAR_31.objectSubId = 0;

 VAR_32.classId = VAR_13;
 VAR_32.objectId = VAR_33->fdwid;
 VAR_32.objectSubId = 0;
 FUNC_21(&VAR_31, &VAR_32, VAR_10);

 FUNC_23(VAR_15, VAR_28, VAR_29);


 FUNC_22(&VAR_31, 0);


 FUNC_9(VAR_15, VAR_28, 0);

 FUNC_24(VAR_23, VAR_20);

 return VAR_31;
}
