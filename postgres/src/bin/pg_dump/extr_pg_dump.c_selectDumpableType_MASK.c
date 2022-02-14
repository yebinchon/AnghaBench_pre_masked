
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {TYPE_3__* namespace; int dump; void* objType; } ;
struct TYPE_12__ {scalar_t__ typrelkind; TYPE_8__ dobj; scalar_t__ isArray; int typrelid; } ;
typedef TYPE_4__ TypeInfo ;
struct TYPE_9__ {int dump; } ;
struct TYPE_13__ {TYPE_1__ dobj; } ;
typedef TYPE_5__ TableInfo ;
struct TYPE_10__ {int dump_contains; } ;
struct TYPE_11__ {TYPE_2__ dobj; } ;
typedef int Archive ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_8__*,int *) ;
 TYPE_5__* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(TypeInfo *VAR_3, Archive *VAR_4)
{

 if (FUNC_0(VAR_3->typrelid) &&
  VAR_3->typrelkind != VAR_2)
 {
  TableInfo *VAR_5 = FUNC_2(VAR_3->typrelid);

  VAR_3->dobj.objType = VAR_0;
  if (VAR_5 != ((void*)0))
   VAR_3->dobj.dump = VAR_5->dobj.dump;
  else
   VAR_3->dobj.dump = VAR_1;
  return;
 }


 if (VAR_3->isArray)
 {
  VAR_3->dobj.objType = VAR_0;







 }

 if (FUNC_1(&VAR_3->dobj, VAR_4))
  return;


 VAR_3->dobj.dump = VAR_3->dobj.namespace->dobj.dump_contains;
}
