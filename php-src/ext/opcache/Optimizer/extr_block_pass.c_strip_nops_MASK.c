
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_7__* opcodes; } ;
typedef TYPE_1__ zend_op_array ;
struct TYPE_9__ {size_t len; size_t start; } ;
typedef TYPE_2__ zend_basic_block ;
typedef size_t uint32_t ;
struct TYPE_10__ {scalar_t__ opcode; } ;


 int FUNC_0 (TYPE_7__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(zend_op_array *VAR_1, zend_basic_block *VAR_2)
{
 uint32_t VAR_3, VAR_4;

 if (VAR_2->len == 0) {
  return;
 }

 if (VAR_1->opcodes[VAR_2->start].opcode == VAR_0) {
  FUNC_1(VAR_1, VAR_2);
 }

 if (VAR_2->len == 0) {
  return;
 }


 VAR_3 = VAR_4 = VAR_2->start + 1;
 while (VAR_3 < VAR_2->start + VAR_2->len) {
  if (VAR_1->opcodes[VAR_3].opcode != VAR_0) {
   if (VAR_3 != VAR_4) {
    VAR_1->opcodes[VAR_4] = VAR_1->opcodes[VAR_3];
   }
   VAR_4++;
  }
  VAR_3++;
 }
 VAR_2->len = VAR_4 - VAR_2->start;
 while (VAR_4 < VAR_3) {
  FUNC_0(VAR_1->opcodes + VAR_4);
  VAR_4++;
 }
}
