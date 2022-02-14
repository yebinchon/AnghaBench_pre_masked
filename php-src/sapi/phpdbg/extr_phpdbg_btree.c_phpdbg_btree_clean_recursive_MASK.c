
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_ulong ;
typedef size_t zend_bool ;
struct TYPE_4__ {struct TYPE_4__** branches; } ;
typedef TYPE_1__ phpdbg_btree_branch ;


 int FUNC_0 (TYPE_1__*,size_t) ;

void FUNC_1(phpdbg_btree_branch *VAR_0, zend_ulong VAR_1, zend_bool VAR_2) {
 phpdbg_btree_branch *VAR_3 = VAR_0;
 while (VAR_1--) {
  zend_bool VAR_4 = VAR_0 + 1 == VAR_0->branches[0];
  if (VAR_0->branches[VAR_4]) {
   FUNC_1(VAR_0->branches[VAR_4], VAR_1, VAR_2);
  }
 }

 FUNC_0(VAR_3, VAR_2);
}
