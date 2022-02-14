
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_op_array ;
struct TYPE_5__ {int size; int out; int in; int use; int def; } ;
typedef TYPE_1__ zend_dfg ;
struct TYPE_6__ {int blocks_count; } ;
typedef TYPE_2__ zend_cfg ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*,char*,int ) ;

void FUNC_4(const zend_op_array *VAR_1, const zend_cfg *VAR_2, const zend_dfg *VAR_3)
{
 int VAR_4;
 FUNC_1(VAR_0, "\nVariable Liveness for \"");
 FUNC_2(VAR_1);
 FUNC_1(VAR_0, "\"\n");

 for (VAR_4 = 0; VAR_4 < VAR_2->blocks_count; VAR_4++) {
  FUNC_1(VAR_0, "  BB%d:\n", VAR_4);
  FUNC_3(VAR_1, "def", FUNC_0(VAR_3->def, VAR_3->size, VAR_4));
  FUNC_3(VAR_1, "use", FUNC_0(VAR_3->use, VAR_3->size, VAR_4));
  FUNC_3(VAR_1, "in ", FUNC_0(VAR_3->in, VAR_3->size, VAR_4));
  FUNC_3(VAR_1, "out", FUNC_0(VAR_3->out, VAR_3->size, VAR_4));
 }
}
