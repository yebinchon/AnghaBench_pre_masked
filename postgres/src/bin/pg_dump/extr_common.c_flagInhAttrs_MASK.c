
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {char* name; int dumpId; scalar_t__ dump; int namespace; } ;
struct TYPE_11__ {scalar_t__ relkind; int numParents; int numatts; int* notnull; int* inhNotNull; TYPE_4__** attrdefs; TYPE_2__ dobj; int * attnames; scalar_t__* attisdropped; struct TYPE_11__** parents; } ;
typedef TYPE_3__ TableInfo ;
struct TYPE_9__ {scalar_t__ oid; scalar_t__ tableoid; } ;
struct TYPE_13__ {scalar_t__ dump; int namespace; void* name; TYPE_1__ catId; int objType; } ;
struct TYPE_12__ {int adnum; int separate; TYPE_7__ dobj; void* adef_expr; TYPE_3__* adtable; } ;
typedef int DumpOptions ;
typedef TYPE_4__ AttrDefInfo ;


 int FUNC_0 (TYPE_7__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_7__*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 void* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *,TYPE_3__*,int) ;
 int FUNC_5 (int ,int *,int) ;

__attribute__((used)) static void
FUNC_6(DumpOptions *VAR_4, TableInfo *VAR_5, int VAR_6)
{
 int VAR_7,
    VAR_8,
    VAR_9;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
 {
  TableInfo *VAR_10 = &(VAR_5[VAR_7]);
  int VAR_11;
  TableInfo **VAR_12;


  if (VAR_10->relkind == VAR_2 ||
   VAR_10->relkind == VAR_3 ||
   VAR_10->relkind == VAR_1)
   continue;


  if (!VAR_10->dobj.dump)
   continue;

  VAR_11 = VAR_10->numParents;
  VAR_12 = VAR_10->parents;

  if (VAR_11 == 0)
   continue;


  for (VAR_8 = 0; VAR_8 < VAR_10->numatts; VAR_8++)
  {
   bool VAR_13;
   bool VAR_14;


   if (VAR_10->attisdropped[VAR_8])
    continue;

   VAR_13 = 0;
   VAR_14 = 0;
   for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++)
   {
    TableInfo *VAR_15 = VAR_12[VAR_9];
    int VAR_16;

    VAR_16 = FUNC_5(VAR_10->attnames[VAR_8],
          VAR_15->attnames,
          VAR_15->numatts);
    if (VAR_16 >= 0)
    {
     VAR_13 |= VAR_15->notnull[VAR_16];
     VAR_14 |= (VAR_15->attrdefs[VAR_16] != ((void*)0));
    }
   }


   VAR_10->inhNotNull[VAR_8] = VAR_13;


   if (VAR_14 && VAR_10->attrdefs[VAR_8] == ((void*)0))
   {
    AttrDefInfo *VAR_17;

    VAR_17 = (AttrDefInfo *) FUNC_2(sizeof(AttrDefInfo));
    VAR_17->dobj.objType = VAR_0;
    VAR_17->dobj.catId.tableoid = 0;
    VAR_17->dobj.catId.oid = 0;
    FUNC_0(&VAR_17->dobj);
    VAR_17->dobj.name = FUNC_3(VAR_10->dobj.name);
    VAR_17->dobj.namespace = VAR_10->dobj.namespace;
    VAR_17->dobj.dump = VAR_10->dobj.dump;

    VAR_17->adtable = VAR_10;
    VAR_17->adnum = VAR_8 + 1;
    VAR_17->adef_expr = FUNC_3("NULL");


    if (FUNC_4(VAR_4, VAR_10, VAR_8))
    {
     VAR_17->separate = 0;

    }
    else
    {

     VAR_17->separate = 1;

     FUNC_1(&VAR_17->dobj,
          VAR_10->dobj.dumpId);
    }

    VAR_10->attrdefs[VAR_8] = VAR_17;
   }
  }
 }
}
