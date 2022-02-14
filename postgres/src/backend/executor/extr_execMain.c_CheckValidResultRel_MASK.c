
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int trig_delete_instead_row; int trig_update_instead_row; int trig_insert_instead_row; } ;
typedef TYPE_2__ TriggerDesc ;
struct TYPE_16__ {int (* IsForeignRelUpdatable ) (TYPE_4__*) ;int * ExecForeignDelete; int * ExecForeignUpdate; int * ExecForeignInsert; } ;
struct TYPE_15__ {TYPE_1__* rd_rel; TYPE_2__* trigdesc; } ;
struct TYPE_14__ {TYPE_5__* ri_FdwRoutine; TYPE_4__* ri_RelationDesc; } ;
struct TYPE_12__ {int relkind; } ;
typedef TYPE_3__ ResultRelInfo ;
typedef TYPE_4__* Relation ;
typedef TYPE_5__ FdwRoutine ;
typedef scalar_t__ CmdType ;





 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;







 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*) ;

void
FUNC_11(ResultRelInfo *VAR_4, CmdType VAR_5)
{
 Relation VAR_6 = VAR_4->ri_RelationDesc;
 TriggerDesc *VAR_7 = VAR_6->trigdesc;
 FdwRoutine *VAR_8;

 switch (VAR_6->rd_rel->relkind)
 {
  case 131:
  case 132:
   FUNC_0(VAR_6, VAR_5);
   break;
  case 130:
   FUNC_4(VAR_3,
     (FUNC_5(VAR_2),
      FUNC_7("cannot change sequence \"%s\"",
       FUNC_2(VAR_6))));
   break;
  case 129:
   FUNC_4(VAR_3,
     (FUNC_5(VAR_2),
      FUNC_7("cannot change TOAST relation \"%s\"",
       FUNC_2(VAR_6))));
   break;
  case 128:
   switch (VAR_5)
   {
    case 136:
     if (!VAR_7 || !VAR_7->trig_insert_instead_row)
      FUNC_4(VAR_3,
        (FUNC_5(VAR_1),
         FUNC_7("cannot insert into view \"%s\"",
          FUNC_2(VAR_6)),
         FUNC_6("To enable inserting into the view, provide an INSTEAD OF INSERT trigger or an unconditional ON INSERT DO INSTEAD rule.")));
     break;
    case 135:
     if (!VAR_7 || !VAR_7->trig_update_instead_row)
      FUNC_4(VAR_3,
        (FUNC_5(VAR_1),
         FUNC_7("cannot update view \"%s\"",
          FUNC_2(VAR_6)),
         FUNC_6("To enable updating the view, provide an INSTEAD OF UPDATE trigger or an unconditional ON UPDATE DO INSTEAD rule.")));
     break;
    case 137:
     if (!VAR_7 || !VAR_7->trig_delete_instead_row)
      FUNC_4(VAR_3,
        (FUNC_5(VAR_1),
         FUNC_7("cannot delete from view \"%s\"",
          FUNC_2(VAR_6)),
         FUNC_6("To enable deleting from the view, provide an INSTEAD OF DELETE trigger or an unconditional ON DELETE DO INSTEAD rule.")));
     break;
    default:
     FUNC_3(VAR_3, "unrecognized CmdType: %d", (int) VAR_5);
     break;
   }
   break;
  case 133:
   if (!FUNC_1())
    FUNC_4(VAR_3,
      (FUNC_5(VAR_2),
       FUNC_7("cannot change materialized view \"%s\"",
        FUNC_2(VAR_6))));
   break;
  case 134:

   VAR_8 = VAR_4->ri_FdwRoutine;
   switch (VAR_5)
   {
    case 136:
     if (VAR_8->ExecForeignInsert == ((void*)0))
      FUNC_4(VAR_3,
        (FUNC_5(VAR_0),
         FUNC_7("cannot insert into foreign table \"%s\"",
          FUNC_2(VAR_6))));
     if (VAR_8->IsForeignRelUpdatable != ((void*)0) &&
      (VAR_8->IsForeignRelUpdatable(VAR_6) & (1 << 136)) == 0)
      FUNC_4(VAR_3,
        (FUNC_5(VAR_1),
         FUNC_7("foreign table \"%s\" does not allow inserts",
          FUNC_2(VAR_6))));
     break;
    case 135:
     if (VAR_8->ExecForeignUpdate == ((void*)0))
      FUNC_4(VAR_3,
        (FUNC_5(VAR_0),
         FUNC_7("cannot update foreign table \"%s\"",
          FUNC_2(VAR_6))));
     if (VAR_8->IsForeignRelUpdatable != ((void*)0) &&
      (VAR_8->IsForeignRelUpdatable(VAR_6) & (1 << 135)) == 0)
      FUNC_4(VAR_3,
        (FUNC_5(VAR_1),
         FUNC_7("foreign table \"%s\" does not allow updates",
          FUNC_2(VAR_6))));
     break;
    case 137:
     if (VAR_8->ExecForeignDelete == ((void*)0))
      FUNC_4(VAR_3,
        (FUNC_5(VAR_0),
         FUNC_7("cannot delete from foreign table \"%s\"",
          FUNC_2(VAR_6))));
     if (VAR_8->IsForeignRelUpdatable != ((void*)0) &&
      (VAR_8->IsForeignRelUpdatable(VAR_6) & (1 << 137)) == 0)
      FUNC_4(VAR_3,
        (FUNC_5(VAR_1),
         FUNC_7("foreign table \"%s\" does not allow deletes",
          FUNC_2(VAR_6))));
     break;
    default:
     FUNC_3(VAR_3, "unrecognized CmdType: %d", (int) VAR_5);
     break;
   }
   break;
  default:
   FUNC_4(VAR_3,
     (FUNC_5(VAR_2),
      FUNC_7("cannot change relation \"%s\"",
       FUNC_2(VAR_6))));
   break;
 }
}
