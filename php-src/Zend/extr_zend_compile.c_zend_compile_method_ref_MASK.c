
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * class_name; int method_name; } ;
typedef TYPE_1__ zend_trait_method_reference ;
struct TYPE_8__ {struct TYPE_8__** child; } ;
typedef TYPE_2__ zend_ast ;


 int FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(zend_ast *VAR_0, zend_trait_method_reference *VAR_1)
{
 zend_ast *VAR_2 = VAR_0->child[0];
 zend_ast *VAR_3 = VAR_0->child[1];

 VAR_1->method_name = FUNC_2(FUNC_0(VAR_3));

 if (VAR_2) {
  VAR_1->class_name = FUNC_1(VAR_2);
 } else {
  VAR_1->class_name = ((void*)0);
 }
}
