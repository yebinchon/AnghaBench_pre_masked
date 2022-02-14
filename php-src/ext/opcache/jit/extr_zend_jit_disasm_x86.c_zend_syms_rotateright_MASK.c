
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* parent; struct TYPE_4__** child; } ;
typedef TYPE_1__ zend_sym_node ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_0(zend_sym_node *VAR_1) {
 zend_sym_node *VAR_2 = VAR_1->child[0];
 VAR_1->child[0] = VAR_2->child[1];
 if (VAR_2->child[1]) {
  VAR_2->child[1]->parent = VAR_1;
 }
 VAR_2->parent = VAR_1->parent;
 if (VAR_1->parent == ((void*)0)) {
  VAR_0 = VAR_2;
 } else if (VAR_1->parent->child[1] == VAR_1) {
  VAR_1->parent->child[1] = VAR_2;
 } else {
  VAR_1->parent->child[0] = VAR_2;
 }
 VAR_2->child[1] = VAR_1;
 VAR_1->parent = VAR_2;
}
