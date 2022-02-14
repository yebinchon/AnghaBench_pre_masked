
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ include_everything; } ;
struct TYPE_7__ {scalar_t__ oid; } ;
struct TYPE_8__ {int dump_contains; int dump; TYPE_1__ catId; } ;
struct TYPE_9__ {TYPE_2__ dobj; } ;
typedef scalar_t__ Oid ;
typedef TYPE_3__ ExtensionInfo ;
typedef TYPE_4__ DumpOptions ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_0(ExtensionInfo *VAR_4, DumpOptions *VAR_5)
{





 if (VAR_4->dobj.catId.oid <= (Oid) VAR_3)
  VAR_4->dobj.dump = VAR_4->dobj.dump_contains = VAR_0;
 else
  VAR_4->dobj.dump = VAR_4->dobj.dump_contains =
   VAR_5->include_everything ? VAR_1 :
   VAR_2;
}
