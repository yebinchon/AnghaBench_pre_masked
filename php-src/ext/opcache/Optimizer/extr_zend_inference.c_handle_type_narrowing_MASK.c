
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* vars; } ;
typedef TYPE_2__ zend_ssa ;
struct TYPE_11__ {TYPE_4__* opcodes; } ;
typedef TYPE_3__ zend_op_array ;
struct TYPE_12__ {int opcode; } ;
typedef TYPE_4__ zend_op ;
typedef int zend_bitset ;
typedef int uint32_t ;
struct TYPE_9__ {int definition; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__ const*,TYPE_2__*,int ,int) ;
 int FUNC_1 (int ,char*,char const*) ;
 char* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(const zend_op_array *VAR_1, zend_ssa *VAR_2, zend_bitset VAR_3, int VAR_4, uint32_t VAR_5, uint32_t VAR_6)
{
 if (1) {

  int VAR_7 = VAR_2->vars[VAR_4].definition;
  const zend_op *VAR_8 = VAR_7 >= 0 ? &VAR_1->opcodes[VAR_7] : ((void*)0);
  const char *VAR_9 = VAR_8 ? FUNC_2(VAR_8->opcode) : "PHI";
  FUNC_1(VAR_0, "Narrowing occurred during type inference of %s. Please file a bug report on bugs.php.net", VAR_9);
 } else {





  FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 }
}
