
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int values ;
typedef int nulls ;
struct TYPE_18__ {int options; int servername; } ;
struct TYPE_17__ {int fdwvalidator; } ;
struct TYPE_16__ {int serverid; int fdwid; int servername; } ;
struct TYPE_15__ {scalar_t__ objectSubId; int objectId; int classId; } ;
struct TYPE_14__ {int rd_att; } ;
typedef TYPE_1__* Relation ;
typedef int Oid ;
typedef TYPE_2__ ObjectAddress ;
typedef int HeapTuple ;
typedef TYPE_3__ ForeignServer ;
typedef TYPE_4__ ForeignDataWrapper ;
typedef int Datum ;
typedef TYPE_5__ CreateForeignTableStmt ;
typedef scalar_t__ AclResult ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 () ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_4__* FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (int ,int) ;
 int FUNC_5 () ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (scalar_t__,int ,int ) ;
 int FUNC_10 (int ,int*,int*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int*,int,int) ;
 scalar_t__ FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_15 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ,int ,int ) ;

void
FUNC_18(CreateForeignTableStmt *VAR_12, Oid VAR_13)
{
 Relation VAR_14;
 Datum VAR_15;
 Datum VAR_16[VAR_8];
 bool VAR_17[VAR_8];
 HeapTuple VAR_18;
 AclResult VAR_19;
 ObjectAddress VAR_20;
 ObjectAddress VAR_21;
 Oid VAR_22;
 ForeignDataWrapper *VAR_23;
 ForeignServer *VAR_24;





 FUNC_1();

 VAR_14 = FUNC_16(VAR_7, VAR_11);




 VAR_22 = FUNC_5();





 VAR_24 = FUNC_4(VAR_12->servername, 0);
 VAR_19 = FUNC_13(VAR_24->serverid, VAR_22, VAR_1);
 if (VAR_19 != VAR_0)
  FUNC_9(VAR_19, VAR_9, VAR_24->servername);

 VAR_23 = FUNC_3(VAR_24->fdwid);




 FUNC_12(VAR_16, 0, sizeof(VAR_16));
 FUNC_12(VAR_17, 0, sizeof(VAR_17));

 VAR_16[VAR_3 - 1] = FUNC_6(VAR_13);
 VAR_16[VAR_4 - 1] = FUNC_6(VAR_24->serverid);

 VAR_15 = FUNC_17(VAR_7,
          FUNC_7(((void*)0)),
          VAR_12->options,
          VAR_23->fdwvalidator);

 if (FUNC_8(FUNC_2(VAR_15)))
  VAR_16[VAR_2 - 1] = VAR_15;
 else
  VAR_17[VAR_2 - 1] = 1;

 VAR_18 = FUNC_10(VAR_14->rd_att, VAR_16, VAR_17);

 FUNC_0(VAR_14, VAR_18);

 FUNC_11(VAR_18);


 VAR_20.classId = VAR_10;
 VAR_20.objectId = VAR_13;
 VAR_20.objectSubId = 0;

 VAR_21.classId = VAR_6;
 VAR_21.objectId = VAR_24->serverid;
 VAR_21.objectSubId = 0;
 FUNC_14(&VAR_20, &VAR_21, VAR_5);

 FUNC_15(VAR_14, VAR_11);
}
