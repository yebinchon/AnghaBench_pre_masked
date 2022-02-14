
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int oid; } ;
struct TYPE_15__ {void* dump; TYPE_3__ catId; TYPE_2__* namespace; } ;
struct TYPE_13__ {TYPE_9__ dobj; } ;
typedef TYPE_4__ TableInfo ;
struct TYPE_14__ {int * head; } ;
struct TYPE_10__ {void* dump_contains; } ;
struct TYPE_11__ {TYPE_1__ dobj; } ;
typedef int Archive ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_9__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_5__*,int ) ;
 TYPE_5__ VAR_2 ;
 TYPE_5__ VAR_3 ;

__attribute__((used)) static void
FUNC_2(TableInfo *VAR_4, Archive *VAR_5)
{
 if (FUNC_0(&VAR_4->dobj, VAR_5))
  return;





 if (VAR_3.head != ((void*)0))
  VAR_4->dobj.dump = FUNC_1(&VAR_3,
               VAR_4->dobj.catId.oid) ?
   VAR_0 : VAR_1;
 else
  VAR_4->dobj.dump = VAR_4->dobj.namespace->dobj.dump_contains;




 if (VAR_4->dobj.dump &&
  FUNC_1(&VAR_2,
          VAR_4->dobj.catId.oid))
  VAR_4->dobj.dump = VAR_1;
}
