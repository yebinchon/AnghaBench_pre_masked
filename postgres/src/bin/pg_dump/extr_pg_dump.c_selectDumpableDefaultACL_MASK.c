
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int dump; TYPE_2__* namespace; } ;
struct TYPE_12__ {TYPE_3__ dobj; } ;
struct TYPE_11__ {scalar_t__ include_everything; } ;
struct TYPE_8__ {int dump_contains; } ;
struct TYPE_9__ {TYPE_1__ dobj; } ;
typedef TYPE_4__ DumpOptions ;
typedef TYPE_5__ DefaultACLInfo ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(DefaultACLInfo *VAR_2, DumpOptions *VAR_3)
{


 if (VAR_2->dobj.namespace)

  VAR_2->dobj.dump = VAR_2->dobj.namespace->dobj.dump_contains;
 else
  VAR_2->dobj.dump = VAR_3->include_everything ?
   VAR_0 : VAR_1;
}
