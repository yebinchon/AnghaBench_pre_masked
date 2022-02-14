
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_17__ ;
typedef struct TYPE_25__ TYPE_16__ ;
typedef struct TYPE_24__ TYPE_15__ ;
typedef struct TYPE_23__ TYPE_14__ ;
typedef struct TYPE_22__ TYPE_13__ ;
typedef struct TYPE_21__ TYPE_12__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct TYPE_31__ {int name; TYPE_4__* namespace; } ;
struct TYPE_20__ {TYPE_5__ dobj; } ;
typedef TYPE_11__ TypeInfo ;
struct TYPE_21__ {TYPE_9__* tgtable; } ;
typedef TYPE_12__ TriggerInfo ;
struct TYPE_34__ {int name; } ;
struct TYPE_35__ {TYPE_8__ dobj; } ;
struct TYPE_32__ {int name; } ;
struct TYPE_33__ {TYPE_6__ dobj; } ;
struct TYPE_29__ {int name; } ;
struct TYPE_30__ {TYPE_3__ dobj; } ;
struct TYPE_27__ {int name; } ;
struct TYPE_28__ {TYPE_1__ dobj; } ;
struct TYPE_26__ {int adnum; } ;
struct TYPE_19__ {int oid; } ;
struct TYPE_25__ {size_t objType; TYPE_10__ catId; int name; TYPE_2__* namespace; } ;
struct TYPE_24__ {int nargs; int * argtypes; } ;
struct TYPE_23__ {int oprkind; } ;
struct TYPE_22__ {TYPE_7__* poltable; } ;
typedef TYPE_13__ PolicyInfo ;
typedef TYPE_14__ OprInfo ;
typedef TYPE_15__ FuncInfo ;
typedef TYPE_16__ DumpableObject ;
typedef TYPE_17__ AttrDefInfo ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int* VAR_6 ;
 TYPE_11__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(const void *VAR_7, const void *VAR_8)
{
 DumpableObject *VAR_9 = *(DumpableObject *const *) VAR_7;
 DumpableObject *VAR_10 = *(DumpableObject *const *) VAR_8;
 int VAR_11;


 VAR_11 = VAR_6[VAR_9->objType] -
  VAR_6[VAR_10->objType];

 if (VAR_11 != 0)
  return VAR_11;






 if (VAR_9->namespace)
 {
  if (VAR_10->namespace)
  {
   VAR_11 = FUNC_2(VAR_9->namespace->dobj.name,
       VAR_10->namespace->dobj.name);
   if (VAR_11 != 0)
    return VAR_11;
  }
  else
   return -1;
 }
 else if (VAR_10->namespace)
  return 1;


 VAR_11 = FUNC_2(VAR_9->name, VAR_10->name);
 if (VAR_11 != 0)
  return VAR_11;


 if (VAR_9->objType == VAR_2 || VAR_9->objType == VAR_0)
 {
  FuncInfo *VAR_12 = *(FuncInfo *const *) VAR_7;
  FuncInfo *VAR_13 = *(FuncInfo *const *) VAR_8;
  int VAR_14;


  VAR_11 = VAR_12->nargs - VAR_13->nargs;
  if (VAR_11 != 0)
   return VAR_11;
  for (VAR_14 = 0; VAR_14 < VAR_12->nargs; VAR_14++)
  {
   TypeInfo *VAR_15 = FUNC_0(VAR_12->argtypes[VAR_14]);
   TypeInfo *VAR_16 = FUNC_0(VAR_13->argtypes[VAR_14]);

   if (VAR_15 && VAR_16)
   {
    if (VAR_15->dobj.namespace && VAR_16->dobj.namespace)
    {
     VAR_11 = FUNC_2(VAR_15->dobj.namespace->dobj.name,
         VAR_16->dobj.namespace->dobj.name);
     if (VAR_11 != 0)
      return VAR_11;
    }
    VAR_11 = FUNC_2(VAR_15->dobj.name, VAR_16->dobj.name);
    if (VAR_11 != 0)
     return VAR_11;
   }
  }
 }
 else if (VAR_9->objType == VAR_3)
 {
  OprInfo *VAR_17 = *(OprInfo *const *) VAR_7;
  OprInfo *VAR_18 = *(OprInfo *const *) VAR_8;


  VAR_11 = (VAR_18->oprkind - VAR_17->oprkind);
  if (VAR_11 != 0)
   return VAR_11;
 }
 else if (VAR_9->objType == VAR_1)
 {
  AttrDefInfo *VAR_19 = *(AttrDefInfo *const *) VAR_7;
  AttrDefInfo *VAR_20 = *(AttrDefInfo *const *) VAR_8;


  VAR_11 = (VAR_19->adnum - VAR_20->adnum);
  if (VAR_11 != 0)
   return VAR_11;
 }
 else if (VAR_9->objType == VAR_4)
 {
  PolicyInfo *VAR_21 = *(PolicyInfo *const *) VAR_7;
  PolicyInfo *VAR_22 = *(PolicyInfo *const *) VAR_8;


  VAR_11 = FUNC_2(VAR_21->poltable->dobj.name,
      VAR_22->poltable->dobj.name);
  if (VAR_11 != 0)
   return VAR_11;
 }
 else if (VAR_9->objType == VAR_5)
 {
  TriggerInfo *VAR_23 = *(TriggerInfo *const *) VAR_7;
  TriggerInfo *VAR_24 = *(TriggerInfo *const *) VAR_8;


  VAR_11 = FUNC_2(VAR_23->tgtable->dobj.name,
      VAR_24->tgtable->dobj.name);
  if (VAR_11 != 0)
   return VAR_11;
 }


 return FUNC_1(VAR_9->catId.oid, VAR_10->catId.oid);
}
