
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int per_tuple; int startup; } ;
struct TYPE_4__ {int * sortgrouprefs; int exprs; } ;
typedef int StringInfo ;
typedef TYPE_1__ PathTarget ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ,char*) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_7(StringInfo VAR_3, const PathTarget *VAR_4)
{
 FUNC_3("PATHTARGET");

 FUNC_2(VAR_1);
 if (VAR_4->sortgrouprefs)
 {
  int VAR_5;

  FUNC_5(VAR_3, " :sortgrouprefs");
  for (VAR_5 = 0; VAR_5 < FUNC_6(VAR_4->exprs); VAR_5++)
   FUNC_4(VAR_3, " %u", VAR_4->sortgrouprefs[VAR_5]);
 }
 FUNC_0(VAR_0.startup, "%.2f");
 FUNC_0(VAR_0.per_tuple, "%.2f");
 FUNC_1(VAR_2);
}
