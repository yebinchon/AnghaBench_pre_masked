
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;
typedef struct TYPE_15__ TYPE_11__ ;


typedef TYPE_2__* TupleDesc ;
struct TYPE_21__ {int attname; scalar_t__ attgenerated; scalar_t__ attisdropped; } ;
struct TYPE_19__ {int natts; scalar_t__ replident; int attkeys; int relname; int nspname; } ;
struct TYPE_20__ {int* attrmap; int updatable; scalar_t__ state; int statelsn; int localreloid; TYPE_11__* localrel; TYPE_3__ remoterel; } ;
struct TYPE_18__ {int natts; } ;
struct TYPE_17__ {int relkind; } ;
struct TYPE_16__ {int oid; } ;
struct TYPE_15__ {TYPE_1__* rd_rel; } ;
typedef int Oid ;
typedef int MemoryContext ;
typedef TYPE_3__ LogicalRepRelation ;
typedef TYPE_4__ LogicalRepRelMapEntry ;
typedef int LogicalRepRelId ;
typedef int LOCKMODE ;
typedef TYPE_5__* Form_pg_attribute ;
typedef int Bitmapset ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,int ,int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 TYPE_14__* VAR_8 ;
 int FUNC_5 (int ) ;
 int VAR_9 ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_7 (int ,int ,int) ;
 TYPE_2__* FUNC_8 (TYPE_11__*) ;
 int * FUNC_9 (TYPE_11__*,int ) ;
 scalar_t__ VAR_11 ;
 TYPE_5__* FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int ,char*,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*,int ,int ) ;
 TYPE_4__* FUNC_17 (int *,void*,int ,int*) ;
 int FUNC_18 (TYPE_3__*,int ) ;
 int FUNC_19 () ;
 int FUNC_20 (int ,int ,int) ;
 int* FUNC_21 (int) ;
 void* FUNC_22 (int ,int ) ;

LogicalRepRelMapEntry *
FUNC_23(LogicalRepRelId VAR_12, LOCKMODE VAR_13)
{
 LogicalRepRelMapEntry *VAR_14;
 bool VAR_15;

 if (VAR_6 == ((void*)0))
  FUNC_19();


 VAR_14 = FUNC_17(VAR_6, (void *) &VAR_12,
      VAR_3, &VAR_15);

 if (!VAR_15)
  FUNC_13(VAR_1, "no relation map entry for remote relation ID %u",
    VAR_12);


 if (!FUNC_6(VAR_14->localreloid))
 {
  Oid VAR_16;
  int VAR_17;
  int VAR_18;
  Bitmapset *VAR_19;
  TupleDesc VAR_20;
  LogicalRepRelation *VAR_21;
  MemoryContext VAR_22;

  VAR_21 = &VAR_14->remoterel;


  VAR_16 = FUNC_7(FUNC_20(VAR_21->nspname,
             VAR_21->relname, -1),
         VAR_13, 1);
  if (!FUNC_6(VAR_16))
   FUNC_14(VAR_1,
     (FUNC_15(VAR_0),
      FUNC_16("logical replication target relation \"%s.%s\" does not exist",
       VAR_21->nspname, VAR_21->relname)));
  VAR_14->localrel = FUNC_22(VAR_16, VAR_9);


  FUNC_2(VAR_14->localrel->rd_rel->relkind,
         VAR_21->nspname, VAR_21->relname);






  VAR_20 = FUNC_8(VAR_14->localrel);
  VAR_22 = FUNC_4(VAR_7);
  VAR_14->attrmap = FUNC_21(VAR_20->natts * sizeof(AttrNumber));
  FUNC_4(VAR_22);

  VAR_18 = 0;
  for (VAR_17 = 0; VAR_17 < VAR_20->natts; VAR_17++)
  {
   int VAR_23;
   Form_pg_attribute VAR_24 = FUNC_10(VAR_20, VAR_17);

   if (VAR_24->attisdropped || VAR_24->attgenerated)
   {
    VAR_14->attrmap[VAR_17] = -1;
    continue;
   }

   VAR_23 = FUNC_18(VAR_21,
            FUNC_5(VAR_24->attname));

   VAR_14->attrmap[VAR_17] = VAR_23;
   if (VAR_23 >= 0)
    VAR_18++;
  }


  if (VAR_18 < VAR_21->natts)
   FUNC_14(VAR_1,
     (FUNC_15(VAR_0),
      FUNC_16("logical replication target relation \"%s.%s\" is missing "
       "some replicated columns",
       VAR_21->nspname, VAR_21->relname)));
  VAR_14->updatable = 1;
  VAR_19 = FUNC_9(VAR_14->localrel,
             VAR_4);

  if (VAR_19 == ((void*)0))
  {
   VAR_19 = FUNC_9(VAR_14->localrel,
              VAR_5);





   if (VAR_19 == ((void*)0) && VAR_21->replident != VAR_10)
    VAR_14->updatable = 0;
  }

  VAR_17 = -1;
  while ((VAR_17 = FUNC_12(VAR_19, VAR_17)) >= 0)
  {
   int VAR_25 = VAR_17 + VAR_2;

   if (!FUNC_1(VAR_25))
    FUNC_14(VAR_1,
      (FUNC_15(VAR_0),
       FUNC_16("logical replication target relation \"%s.%s\" uses "
        "system columns in REPLICA IDENTITY index",
        VAR_21->nspname, VAR_21->relname)));

   VAR_25 = FUNC_0(VAR_25);

   if (VAR_14->attrmap[VAR_25] < 0 ||
    !FUNC_11(VAR_14->attrmap[VAR_25], VAR_21->attkeys))
   {
    VAR_14->updatable = 0;
    break;
   }
  }

  VAR_14->localreloid = VAR_16;
 }
 else
  VAR_14->localrel = FUNC_22(VAR_14->localreloid, VAR_13);

 if (VAR_14->state != VAR_11)
  VAR_14->state = FUNC_3(VAR_8->oid,
              VAR_14->localreloid,
              &VAR_14->statelsn,
              1);

 return VAR_14;
}
