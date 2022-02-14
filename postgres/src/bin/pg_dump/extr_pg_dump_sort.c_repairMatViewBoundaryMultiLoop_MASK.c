
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ relkind; int postponed_def; } ;
typedef TYPE_1__ TableInfo ;
struct TYPE_7__ {scalar_t__ objType; int dumpId; } ;
typedef TYPE_2__ DumpableObject ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_1(DumpableObject *VAR_2,
          DumpableObject *VAR_3)
{

 FUNC_0(VAR_2, VAR_3->dumpId);

 if (VAR_3->objType == VAR_0)
 {
  TableInfo *VAR_4 = (TableInfo *) VAR_3;

  if (VAR_4->relkind == VAR_1)
   VAR_4->postponed_def = 1;
 }
}
