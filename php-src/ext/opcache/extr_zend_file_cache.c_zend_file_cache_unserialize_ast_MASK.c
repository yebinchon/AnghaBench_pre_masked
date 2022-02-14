
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int zend_persistent_script ;
struct TYPE_11__ {int val; } ;
typedef TYPE_1__ zend_ast_zval ;
struct TYPE_12__ {size_t children; TYPE_3__** child; } ;
typedef TYPE_2__ zend_ast_list ;
struct TYPE_13__ {scalar_t__ kind; struct TYPE_13__** child; } ;
typedef TYPE_3__ zend_ast ;
typedef size_t uint32_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_2 (TYPE_3__*) ;
 size_t FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,int *,void*) ;

__attribute__((used)) static void FUNC_6(zend_ast *VAR_2,
                                            zend_persistent_script *VAR_3,
                                            void *VAR_4)
{
 uint32_t VAR_5;

 if (VAR_2->kind == VAR_1 || VAR_2->kind == VAR_0) {
  FUNC_5(&((zend_ast_zval*)VAR_2)->val, VAR_3, VAR_4);
 } else if (FUNC_4(VAR_2)) {
  zend_ast_list *VAR_6 = FUNC_2(VAR_2);
  for (VAR_5 = 0; VAR_5 < VAR_6->children; VAR_5++) {
   if (VAR_6->child[VAR_5] && !FUNC_0(VAR_6->child[VAR_5])) {
    FUNC_1(VAR_6->child[VAR_5]);
    FUNC_6(VAR_6->child[VAR_5], VAR_3, VAR_4);
   }
  }
 } else {
  uint32_t VAR_7 = FUNC_3(VAR_2);
  for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {
   if (VAR_2->child[VAR_5] && !FUNC_0(VAR_2->child[VAR_5])) {
    FUNC_1(VAR_2->child[VAR_5]);
    FUNC_6(VAR_2->child[VAR_5], VAR_3, VAR_4);
   }
  }
 }
}
