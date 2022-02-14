
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t children; TYPE_2__** child; } ;
typedef TYPE_1__ zend_ast_list ;
struct TYPE_7__ {scalar_t__ kind; } ;
typedef TYPE_2__ zend_ast ;
typedef size_t uint32_t ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(zend_ast *VAR_3)
{
 uint32_t VAR_4 = 0;
 zend_ast_list *VAR_5 = FUNC_1(FUNC_0(VAR_3));


 while (VAR_4 < VAR_5->children) {
  if (VAR_5->child[VAR_4] == VAR_3) {
   return VAR_1;
  } else if (VAR_5->child[VAR_4] == ((void*)0)) {

   return VAR_0;
  } else if (VAR_5->child[VAR_4]->kind != VAR_2) {

   return VAR_0;
  }
  VAR_4++;
 }
 return VAR_0;
}
