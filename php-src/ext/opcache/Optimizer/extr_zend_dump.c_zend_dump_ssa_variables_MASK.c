
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int vars_count; TYPE_1__* vars; } ;
typedef TYPE_2__ zend_ssa ;
typedef int zend_op_array ;
typedef int uint32_t ;
struct TYPE_5__ {scalar_t__ scc; scalar_t__ scc_entry; int var; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*,TYPE_2__ const*,int,int ,int ,int ) ;

void FUNC_3(const zend_op_array *VAR_2, const zend_ssa *VAR_3, uint32_t VAR_4)
{
 int VAR_5;

 if (VAR_3->vars) {
  FUNC_0(VAR_1, "\nSSA Variable for \"");
  FUNC_1(VAR_2);
  FUNC_0(VAR_1, "\"\n");

  for (VAR_5 = 0; VAR_5 < VAR_3->vars_count; VAR_5++) {
   FUNC_0(VAR_1, "    ");
   FUNC_2(VAR_2, VAR_3, VAR_5, VAR_0, VAR_3->vars[VAR_5].var, VAR_4);
   if (VAR_3->vars[VAR_5].scc >= 0) {
    if (VAR_3->vars[VAR_5].scc_entry) {
     FUNC_0(VAR_1, " *");
    } else {
     FUNC_0(VAR_1, "  ");
    }
    FUNC_0(VAR_1, "SCC=%ld", VAR_3->vars[VAR_5].scc);
   }
   FUNC_0(VAR_1, "\n");
  }
 }
}
