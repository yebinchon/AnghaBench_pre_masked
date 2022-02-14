
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int val; } ;
typedef TYPE_1__ zend_ast_zval ;
struct TYPE_10__ {int children; TYPE_3__** child; } ;
typedef TYPE_2__ zend_ast_list ;
struct TYPE_11__ {scalar_t__ kind; struct TYPE_11__** child; } ;
typedef TYPE_3__ zend_ast ;
typedef size_t uint32_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_1 (TYPE_3__*) ;
 size_t FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(zend_ast *VAR_2)
{
 uint32_t VAR_3;

 if (VAR_2->kind == VAR_1 || VAR_2->kind == VAR_0) {
  FUNC_0(sizeof(zend_ast_zval));
  FUNC_4(&((zend_ast_zval*)(VAR_2))->val);
 } else if (FUNC_3(VAR_2)) {
  zend_ast_list *VAR_4 = FUNC_1(VAR_2);
  FUNC_0(sizeof(zend_ast_list) - sizeof(zend_ast *) + sizeof(zend_ast *) * VAR_4->children);
  for (VAR_3 = 0; VAR_3 < VAR_4->children; VAR_3++) {
   if (VAR_4->child[VAR_3]) {
    FUNC_5(VAR_4->child[VAR_3]);
   }
  }
 } else {
  uint32_t VAR_5 = FUNC_2(VAR_2);
  FUNC_0(sizeof(zend_ast) - sizeof(zend_ast *) + sizeof(zend_ast *) * VAR_5);
  for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {
   if (VAR_2->child[VAR_3]) {
    FUNC_5(VAR_2->child[VAR_3]);
   }
  }
 }
}
