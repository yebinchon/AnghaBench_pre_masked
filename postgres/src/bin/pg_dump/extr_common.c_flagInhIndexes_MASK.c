
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {size_t dumpId; } ;
struct TYPE_20__ {int numParents; int numIndexes; TYPE_1__ dobj; TYPE_7__* indexes; struct TYPE_20__** parents; int ispartition; } ;
typedef TYPE_6__ TableInfo ;
struct TYPE_16__ {scalar_t__ oid; scalar_t__ tableoid; } ;
struct TYPE_23__ {int namespace; int name; TYPE_2__ catId; int objType; } ;
struct TYPE_22__ {TYPE_9__ dobj; TYPE_7__* partitionIdx; TYPE_7__* parentIdx; } ;
struct TYPE_17__ {int dumpId; int name; } ;
struct TYPE_21__ {int partattaches; TYPE_5__* indextable; TYPE_3__ dobj; int parentidx; } ;
struct TYPE_18__ {int dumpId; int namespace; } ;
struct TYPE_19__ {TYPE_4__ dobj; } ;
typedef TYPE_7__ IndxInfo ;
typedef TYPE_8__ IndexAttachInfo ;
typedef int **** DumpableObject ;
typedef int Archive ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_9__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_9__*,int ) ;
 int ******** FUNC_3 (TYPE_7__*,int,int) ;
 TYPE_7__* FUNC_4 (int ,int ******,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int *******) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,TYPE_9__*) ;

__attribute__((used)) static void
FUNC_10(Archive *VAR_1, TableInfo VAR_2[], int VAR_3)
{
 int VAR_4,
    VAR_5,
    VAR_6;
 DumpableObject ***VAR_7;

 VAR_7 = (DumpableObject ***)
  FUNC_7(FUNC_5() * sizeof(DumpableObject **));

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
 {
  TableInfo *VAR_8;
  IndexAttachInfo *VAR_9;

  if (!VAR_2[VAR_4].ispartition || VAR_2[VAR_4].numParents == 0)
   continue;

  FUNC_0(VAR_2[VAR_4].numParents == 1);
  VAR_8 = VAR_2[VAR_4].parents[0];
  if (VAR_7[VAR_8->dobj.dumpId] == ((void*)0))
   VAR_7[VAR_8->dobj.dumpId] =
    FUNC_3(VAR_8->indexes,
        VAR_8->numIndexes,
        sizeof(IndxInfo));

  VAR_9 = (IndexAttachInfo *)
   FUNC_7(VAR_2[VAR_4].numIndexes * sizeof(IndexAttachInfo));
  for (VAR_5 = 0, VAR_6 = 0; VAR_5 < VAR_2[VAR_4].numIndexes; VAR_5++)
  {
   IndxInfo *VAR_10 = &(VAR_2[VAR_4].indexes[VAR_5]);
   IndxInfo *VAR_11;

   if (VAR_10->parentidx == 0)
    continue;

   VAR_11 = FUNC_4(VAR_10->parentidx,
            VAR_7[VAR_8->dobj.dumpId],
            VAR_8->numIndexes);
   if (VAR_11 == ((void*)0))
    continue;

   VAR_9[VAR_6].dobj.objType = VAR_0;
   VAR_9[VAR_6].dobj.catId.tableoid = 0;
   VAR_9[VAR_6].dobj.catId.oid = 0;
   FUNC_1(&VAR_9[VAR_6].dobj);
   VAR_9[VAR_6].dobj.name = FUNC_8(VAR_10->dobj.name);
   VAR_9[VAR_6].dobj.namespace = VAR_10->indextable->dobj.namespace;
   VAR_9[VAR_6].parentIdx = VAR_11;
   VAR_9[VAR_6].partitionIdx = VAR_10;
   FUNC_2(&VAR_9[VAR_6].dobj, VAR_10->dobj.dumpId);
   FUNC_2(&VAR_9[VAR_6].dobj, VAR_11->dobj.dumpId);
   FUNC_2(&VAR_9[VAR_6].dobj,
        VAR_10->indextable->dobj.dumpId);
   FUNC_2(&VAR_9[VAR_6].dobj,
        VAR_11->indextable->dobj.dumpId);


   FUNC_9(&VAR_11->partattaches, &VAR_9[VAR_6].dobj);

   VAR_6++;
  }
 }

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  if (VAR_7[VAR_4])
   FUNC_6(&VAR_7[VAR_4]);
 FUNC_6(VAR_7);
}
