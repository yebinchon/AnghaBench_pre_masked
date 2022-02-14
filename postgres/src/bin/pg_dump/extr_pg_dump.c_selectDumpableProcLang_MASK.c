
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ oid; } ;
struct TYPE_13__ {void* dump; TYPE_2__ catId; } ;
struct TYPE_12__ {int remoteVersion; TYPE_1__* dopt; } ;
struct TYPE_11__ {TYPE_7__ dobj; } ;
struct TYPE_9__ {int include_everything; } ;
typedef TYPE_3__ ProcLangInfo ;
typedef scalar_t__ Oid ;
typedef TYPE_4__ Archive ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_7__*,TYPE_4__*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_1(ProcLangInfo *VAR_4, Archive *VAR_5)
{
 if (FUNC_0(&VAR_4->dobj, VAR_5))
  return;
 if (!VAR_5->dopt->include_everything)
  VAR_4->dobj.dump = VAR_2;
 else
 {
  if (VAR_4->dobj.catId.oid <= (Oid) VAR_3)
   VAR_4->dobj.dump = VAR_5->remoteVersion < 90600 ?
    VAR_2 : VAR_0;
  else
   VAR_4->dobj.dump = VAR_1;
 }
}
