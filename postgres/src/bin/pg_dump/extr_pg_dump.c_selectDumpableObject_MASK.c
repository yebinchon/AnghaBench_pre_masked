
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {TYPE_3__* dopt; } ;
struct TYPE_13__ {int dump; TYPE_2__* namespace; } ;
struct TYPE_12__ {scalar_t__ include_everything; } ;
struct TYPE_10__ {int dump_contains; } ;
struct TYPE_11__ {TYPE_1__ dobj; } ;
typedef TYPE_4__ DumpableObject ;
typedef TYPE_5__ Archive ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_4__*,TYPE_5__*) ;

__attribute__((used)) static void
FUNC_1(DumpableObject *VAR_2, Archive *VAR_3)
{
 if (FUNC_0(VAR_2, VAR_3))
  return;





 if (VAR_2->namespace)
  VAR_2->dump = VAR_2->namespace->dobj.dump_contains;
 else
  VAR_2->dump = VAR_3->dopt->include_everything ?
   VAR_0 : VAR_1;
}
