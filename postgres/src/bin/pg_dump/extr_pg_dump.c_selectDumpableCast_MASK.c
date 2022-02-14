
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ oid; } ;
struct TYPE_13__ {void* dump; TYPE_1__ catId; } ;
struct TYPE_12__ {TYPE_2__* dopt; } ;
struct TYPE_11__ {TYPE_7__ dobj; } ;
struct TYPE_10__ {scalar_t__ include_everything; } ;
typedef scalar_t__ Oid ;
typedef TYPE_3__ CastInfo ;
typedef TYPE_4__ Archive ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_7__*,TYPE_4__*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_1(CastInfo *VAR_3, Archive *VAR_4)
{
 if (FUNC_0(&VAR_3->dobj, VAR_4))
  return;





 if (VAR_3->dobj.catId.oid <= (Oid) VAR_2)
  VAR_3->dobj.dump = VAR_1;
 else
  VAR_3->dobj.dump = VAR_4->dopt->include_everything ?
   VAR_0 : VAR_1;
}
