
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int Value ;
struct TYPE_17__ {int objtype; int comment; scalar_t__ object; } ;
struct TYPE_16__ {int objectSubId; int classId; int objectId; } ;
struct TYPE_15__ {TYPE_1__* rd_rel; } ;
struct TYPE_14__ {int relkind; } ;
typedef TYPE_2__* Relation ;
typedef TYPE_3__ ObjectAddress ;
typedef TYPE_4__ CommentStmt ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 TYPE_3__ VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 char* FUNC_4 (TYPE_2__*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (int ,int,TYPE_3__,scalar_t__,TYPE_2__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,int) ;
 TYPE_3__ FUNC_10 (int,scalar_t__,TYPE_2__**,int ,int) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 char* FUNC_12 (int *) ;

ObjectAddress
FUNC_13(CommentStmt *VAR_16)
{
 Relation VAR_17;
 ObjectAddress VAR_18 = VAR_3;
 if (VAR_16->objtype == VAR_5)
 {
  char *VAR_19 = FUNC_12((Value *) VAR_16->object);

  if (!FUNC_3(FUNC_9(VAR_19, 1)))
  {
   FUNC_6(VAR_15,
     (FUNC_7(VAR_0),
      FUNC_8("database \"%s\" does not exist", VAR_19)));
   return VAR_18;
  }
 }







 VAR_18 = FUNC_10(VAR_16->objtype, VAR_16->object,
         &VAR_17, VAR_14, 0);


 FUNC_5(FUNC_2(), VAR_16->objtype, VAR_18,
         VAR_16->object, VAR_17);


 switch (VAR_16->objtype)
 {
  case 128:
   if (VAR_17->rd_rel->relkind != VAR_12 &&
    VAR_17->rd_rel->relkind != VAR_13 &&
    VAR_17->rd_rel->relkind != VAR_10 &&
    VAR_17->rd_rel->relkind != VAR_8 &&
    VAR_17->rd_rel->relkind != VAR_9 &&
    VAR_17->rd_rel->relkind != VAR_11)
    FUNC_6(VAR_2,
      (FUNC_7(VAR_1),
       FUNC_8("\"%s\" is not a table, view, materialized view, composite type, or foreign table",
        FUNC_4(VAR_17))));
   break;
  default:
   break;
 }






 if (VAR_16->objtype == VAR_5 || VAR_16->objtype == VAR_7
  || VAR_16->objtype == VAR_6)
  FUNC_1(VAR_18.objectId, VAR_18.classId, VAR_16->comment);
 else
  FUNC_0(VAR_18.objectId, VAR_18.classId, VAR_18.objectSubId,
        VAR_16->comment);







 if (VAR_17 != ((void*)0))
  FUNC_11(VAR_17, VAR_4);

 return VAR_18;
}
