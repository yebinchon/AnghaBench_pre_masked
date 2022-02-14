
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* shellType; } ;
typedef TYPE_3__ TypeInfo ;
struct TYPE_12__ {int dump; int dumpId; } ;
struct TYPE_9__ {int dump; int dumpId; } ;
struct TYPE_10__ {TYPE_1__ dobj; } ;
typedef TYPE_4__ DumpableObject ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*,int ) ;

__attribute__((used)) static void
FUNC_2(DumpableObject *VAR_1, DumpableObject *VAR_2)
{
 TypeInfo *VAR_3 = (TypeInfo *) VAR_1;


 FUNC_1(VAR_2, VAR_1->dumpId);


 if (VAR_3->shellType)
 {
  FUNC_0(VAR_2, VAR_3->shellType->dobj.dumpId);






  if (VAR_2->dump)
   VAR_3->shellType->dobj.dump = VAR_2->dump |
    VAR_0;
 }
}
