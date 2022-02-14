
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_41__ TYPE_9__ ;
typedef struct TYPE_40__ TYPE_8__ ;
typedef struct TYPE_39__ TYPE_7__ ;
typedef struct TYPE_38__ TYPE_6__ ;
typedef struct TYPE_37__ TYPE_5__ ;
typedef struct TYPE_36__ TYPE_4__ ;
typedef struct TYPE_35__ TYPE_3__ ;
typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_23__ ;
typedef struct TYPE_32__ TYPE_1__ ;
typedef struct TYPE_31__ TYPE_15__ ;
typedef struct TYPE_30__ TYPE_14__ ;
typedef struct TYPE_29__ TYPE_13__ ;
typedef struct TYPE_28__ TYPE_12__ ;
typedef struct TYPE_27__ TYPE_11__ ;
typedef struct TYPE_26__ TYPE_10__ ;


struct TYPE_34__ {int oid; } ;
struct TYPE_37__ {int dump; TYPE_4__* namespace; TYPE_2__ catId; int name; } ;
struct TYPE_41__ {scalar_t__ relkind; int numIndexes; TYPE_12__* indexes; TYPE_5__ dobj; int hastriggers; } ;
typedef TYPE_9__ TableInfo ;
struct TYPE_40__ {TYPE_10__* head; } ;
struct TYPE_38__ {scalar_t__ oid; } ;
struct TYPE_39__ {TYPE_6__ catId; } ;
struct TYPE_32__ {int name; } ;
struct TYPE_36__ {TYPE_1__ dobj; } ;
struct TYPE_35__ {void* oid; void* tableoid; } ;
struct TYPE_33__ {TYPE_4__* namespace; void* name; TYPE_3__ catId; int objType; } ;
struct TYPE_31__ {int remoteVersion; } ;
struct TYPE_30__ {float contype; int condeferrable; int condeferred; int conislocal; int separate; TYPE_23__ dobj; void* confrelid; scalar_t__ conindex; void* condef; int * condomain; TYPE_9__* contable; } ;
struct TYPE_29__ {int dumpId; } ;
struct TYPE_28__ {TYPE_8__ partattaches; TYPE_7__ dobj; } ;
struct TYPE_27__ {int data; } ;
struct TYPE_26__ {scalar_t__ ptr; struct TYPE_26__* next; } ;
typedef TYPE_10__ SimplePtrListCell ;
typedef TYPE_11__* PQExpBuffer ;
typedef int PGresult ;
typedef scalar_t__ Oid ;
typedef TYPE_12__ IndxInfo ;
typedef TYPE_13__ DumpableObject ;
typedef TYPE_14__ ConstraintInfo ;
typedef TYPE_15__ Archive ;


 int FUNC_0 (TYPE_23__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (TYPE_15__*,int ,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (TYPE_23__*,int ) ;
 int FUNC_7 (TYPE_11__*,char*,int ) ;
 void* FUNC_8 (int ) ;
 TYPE_11__* FUNC_9 () ;
 int FUNC_10 (TYPE_11__*) ;
 TYPE_9__* FUNC_11 (void*) ;
 int FUNC_12 (char*,int ,int ) ;
 scalar_t__ FUNC_13 (int) ;
 void* FUNC_14 (int ) ;
 int FUNC_15 (TYPE_11__*) ;

void
FUNC_16(Archive *VAR_5, TableInfo VAR_6[], int VAR_7)
{
 int VAR_8,
    VAR_9;
 ConstraintInfo *VAR_10;
 PQExpBuffer VAR_11;
 PGresult *VAR_12;
 int VAR_13,
    VAR_14,
    VAR_15,
    VAR_16,
    VAR_17,
    VAR_18;
 int VAR_19;

 VAR_11 = FUNC_9();

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
 {
  TableInfo *VAR_20 = &VAR_6[VAR_8];





  if ((!VAR_20->hastriggers &&
    VAR_20->relkind != VAR_4) ||
   !(VAR_20->dobj.dump & VAR_1))
   continue;

  FUNC_12("reading foreign key constraints for table \"%s.%s\"",
     VAR_20->dobj.namespace->dobj.name,
     VAR_20->dobj.name);

  FUNC_15(VAR_11);
  if (VAR_5->remoteVersion >= 110000)
   FUNC_7(VAR_11,
         "SELECT tableoid, oid, conname, confrelid, conindid, "
         "pg_catalog.pg_get_constraintdef(oid) AS condef "
         "FROM pg_catalog.pg_constraint "
         "WHERE conrelid = '%u'::pg_catalog.oid "
         "AND conparentid = 0 "
         "AND contype = 'f'",
         VAR_20->dobj.catId.oid);
  else
   FUNC_7(VAR_11,
         "SELECT tableoid, oid, conname, confrelid, 0 as conindid, "
         "pg_catalog.pg_get_constraintdef(oid) AS condef "
         "FROM pg_catalog.pg_constraint "
         "WHERE conrelid = '%u'::pg_catalog.oid "
         "AND contype = 'f'",
         VAR_20->dobj.catId.oid);
  VAR_12 = FUNC_1(VAR_5, VAR_11->data, VAR_3);

  VAR_19 = FUNC_5(VAR_12);

  VAR_13 = FUNC_3(VAR_12, "tableoid");
  VAR_14 = FUNC_3(VAR_12, "oid");
  VAR_15 = FUNC_3(VAR_12, "conname");
  VAR_16 = FUNC_3(VAR_12, "confrelid");
  VAR_17 = FUNC_3(VAR_12, "conindid");
  VAR_18 = FUNC_3(VAR_12, "condef");

  VAR_10 = (ConstraintInfo *) FUNC_13(VAR_19 * sizeof(ConstraintInfo));

  for (VAR_9 = 0; VAR_9 < VAR_19; VAR_9++)
  {
   TableInfo *VAR_21;

   VAR_10[VAR_9].dobj.objType = VAR_0;
   VAR_10[VAR_9].dobj.catId.tableoid = FUNC_8(FUNC_4(VAR_12, VAR_9, VAR_13));
   VAR_10[VAR_9].dobj.catId.oid = FUNC_8(FUNC_4(VAR_12, VAR_9, VAR_14));
   FUNC_0(&VAR_10[VAR_9].dobj);
   VAR_10[VAR_9].dobj.name = FUNC_14(FUNC_4(VAR_12, VAR_9, VAR_15));
   VAR_10[VAR_9].dobj.namespace = VAR_20->dobj.namespace;
   VAR_10[VAR_9].contable = VAR_20;
   VAR_10[VAR_9].condomain = ((void*)0);
   VAR_10[VAR_9].contype = 'f';
   VAR_10[VAR_9].condef = FUNC_14(FUNC_4(VAR_12, VAR_9, VAR_18));
   VAR_10[VAR_9].confrelid = FUNC_8(FUNC_4(VAR_12, VAR_9, VAR_16));
   VAR_10[VAR_9].conindex = 0;
   VAR_10[VAR_9].condeferrable = 0;
   VAR_10[VAR_9].condeferred = 0;
   VAR_10[VAR_9].conislocal = 1;
   VAR_10[VAR_9].separate = 1;







   VAR_21 = FUNC_11(VAR_10[VAR_9].confrelid);
   if (VAR_21 && VAR_21->relkind == VAR_4)
   {
    IndxInfo *VAR_22;
    Oid VAR_23 = FUNC_8(FUNC_4(VAR_12, VAR_9, VAR_17));

    if (VAR_23 != VAR_2)
    {
     for (int VAR_24 = 0; VAR_24 < VAR_21->numIndexes; VAR_24++)
     {
      SimplePtrListCell *VAR_25;


      if (VAR_21->indexes[VAR_24].dobj.catId.oid != VAR_23)
       continue;

      VAR_22 = &VAR_21->indexes[VAR_24];
      for (VAR_25 = VAR_22->partattaches.head; VAR_25;
        VAR_25 = VAR_25->next)
       FUNC_6(&VAR_10[VAR_9].dobj,
            ((DumpableObject *)
             VAR_25->ptr)->dumpId);
      break;
     }
    }
   }
  }

  FUNC_2(VAR_12);
 }

 FUNC_10(VAR_11);
}
