
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int dummy_view; } ;
typedef TYPE_1__ TableInfo ;
struct TYPE_10__ {int dumpId; } ;
struct TYPE_9__ {int separate; } ;
typedef TYPE_2__ RuleInfo ;
typedef TYPE_3__ DumpableObject ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,int ) ;

__attribute__((used)) static void
FUNC_2(DumpableObject *VAR_1,
      DumpableObject *VAR_2)
{
 TableInfo *VAR_3 = (TableInfo *) VAR_1;
 RuleInfo *VAR_4 = (RuleInfo *) VAR_2;


 FUNC_1(VAR_1, VAR_2->dumpId);

 VAR_3->dummy_view = 1;

 VAR_4->separate = 1;

 FUNC_0(VAR_2, VAR_1->dumpId);

 FUNC_0(VAR_2, VAR_0);
}
