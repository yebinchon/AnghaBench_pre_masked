
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int val; } ;
typedef TYPE_1__ zend_ast_zval ;
struct TYPE_12__ {int children; TYPE_3__** child; } ;
typedef TYPE_2__ zend_ast_list ;
struct TYPE_13__ {scalar_t__ kind; struct TYPE_13__** child; } ;
typedef TYPE_3__ zend_ast ;
typedef size_t uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_3__*) ;
 size_t FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (TYPE_3__*,int) ;

__attribute__((used)) static zend_ast *FUNC_5(zend_ast *VAR_2)
{
 uint32_t VAR_3;
 zend_ast *VAR_4;

 if (VAR_2->kind == VAR_1 || VAR_2->kind == VAR_0) {
  zend_ast_zval *VAR_5 = FUNC_4(VAR_2, sizeof(zend_ast_zval));
  FUNC_3(&VAR_5->val);
  VAR_4 = (zend_ast *) VAR_5;
 } else if (FUNC_2(VAR_2)) {
  zend_ast_list *VAR_6 = FUNC_0(VAR_2);
  zend_ast_list *VAR_7 = FUNC_4(VAR_2,
   sizeof(zend_ast_list) - sizeof(zend_ast *) + sizeof(zend_ast *) * VAR_6->children);
  for (VAR_3 = 0; VAR_3 < VAR_6->children; VAR_3++) {
   if (VAR_7->child[VAR_3]) {
    VAR_7->child[VAR_3] = FUNC_5(VAR_7->child[VAR_3]);
   }
  }
  VAR_4 = (zend_ast *) VAR_7;
 } else {
  uint32_t VAR_8 = FUNC_1(VAR_2);
  VAR_4 = FUNC_4(VAR_2, sizeof(zend_ast) - sizeof(zend_ast *) + sizeof(zend_ast *) * VAR_8);
  for (VAR_3 = 0; VAR_3 < VAR_8; VAR_3++) {
   if (VAR_4->child[VAR_3]) {
    VAR_4->child[VAR_3] = FUNC_5(VAR_4->child[VAR_3]);
   }
  }
 }

 return VAR_4;
}
