
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__** child; } ;
typedef TYPE_1__ zend_sym_node ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(zend_sym_node *VAR_0) {
 if (VAR_0) {
  if (VAR_0->child[0]) {
   FUNC_1(VAR_0->child[0]);
  } else if (VAR_0->child[1]) {
   FUNC_1(VAR_0->child[1]);
  }
  FUNC_0(VAR_0);
 }
}
