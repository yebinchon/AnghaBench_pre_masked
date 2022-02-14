
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int oid; } ;
struct TYPE_13__ {int dumpId; int namespace; int name; TYPE_2__ catId; } ;
struct TYPE_14__ {scalar_t__ relkind; scalar_t__ relpersistence; TYPE_5__* dataObj; TYPE_3__ dobj; } ;
typedef TYPE_4__ TableInfo ;
struct TYPE_11__ {int oid; scalar_t__ tableoid; } ;
struct TYPE_17__ {int namespace; int name; TYPE_1__ catId; int objType; } ;
struct TYPE_15__ {TYPE_9__ dobj; int * filtercond; TYPE_4__* tdtable; } ;
typedef TYPE_5__ TableDataInfo ;
struct TYPE_16__ {scalar_t__ no_unlogged_table_data; } ;
typedef TYPE_6__ DumpOptions ;


 int FUNC_0 (TYPE_9__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (TYPE_9__*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_4(DumpOptions *VAR_10, TableInfo *VAR_11)
{
 TableDataInfo *VAR_12;





 if (VAR_11->dataObj != ((void*)0))
  return;


 if (VAR_11->relkind == VAR_7)
  return;

 if (VAR_11->relkind == VAR_3)
  return;

 if (VAR_11->relkind == VAR_5)
  return;


 if (VAR_11->relpersistence == VAR_8 &&
  VAR_10->no_unlogged_table_data)
  return;


 if (FUNC_3(&VAR_9,
          VAR_11->dobj.catId.oid))
  return;


 VAR_12 = (TableDataInfo *) FUNC_2(sizeof(TableDataInfo));

 if (VAR_11->relkind == VAR_4)
  VAR_12->dobj.objType = VAR_0;
 else if (VAR_11->relkind == VAR_6)
  VAR_12->dobj.objType = VAR_1;
 else
  VAR_12->dobj.objType = VAR_2;





 VAR_12->dobj.catId.tableoid = 0;
 VAR_12->dobj.catId.oid = VAR_11->dobj.catId.oid;
 FUNC_0(&VAR_12->dobj);
 VAR_12->dobj.name = VAR_11->dobj.name;
 VAR_12->dobj.namespace = VAR_11->dobj.namespace;
 VAR_12->tdtable = VAR_11;
 VAR_12->filtercond = ((void*)0);
 FUNC_1(&VAR_12->dobj, VAR_11->dobj.dumpId);

 VAR_11->dataObj = VAR_12;
}
