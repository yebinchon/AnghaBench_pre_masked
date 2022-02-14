
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zend_bool ;
struct TYPE_6__ {size_t children; TYPE_2__** child; } ;
typedef TYPE_1__ zend_ast_list ;
struct TYPE_7__ {scalar_t__ kind; int attr; struct TYPE_7__** child; } ;
typedef TYPE_2__ zend_ast ;
typedef size_t uint32_t ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static zend_bool FUNC_1(zend_ast *VAR_1) {
 zend_ast_list *VAR_2 = FUNC_0(VAR_1);
 zend_bool VAR_3 = 0;
 uint32_t VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->children; ++VAR_4) {
  zend_ast *VAR_5 = VAR_2->child[VAR_4];

  if (VAR_5) {
   zend_ast *VAR_6 = VAR_5->child[0];
   if (VAR_6->kind == VAR_0) {
    VAR_5->attr = FUNC_1(VAR_6);
   }
   VAR_3 |= VAR_5->attr;
  }
 }

 return VAR_3;
}
