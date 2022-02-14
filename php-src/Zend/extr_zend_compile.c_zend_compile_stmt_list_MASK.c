
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t children; int * child; } ;
typedef TYPE_1__ zend_ast_list ;
typedef int zend_ast ;
typedef size_t uint32_t ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

void FUNC_2(zend_ast *VAR_0)
{
 zend_ast_list *VAR_1 = FUNC_0(VAR_0);
 uint32_t VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1->children; ++VAR_2) {
  FUNC_1(VAR_1->child[VAR_2]);
 }
}
