
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int constant; } ;
struct TYPE_9__ {TYPE_1__ u; int op_type; } ;
typedef TYPE_2__ znode ;
struct TYPE_10__ {size_t children; int ** child; } ;
typedef TYPE_3__ zend_ast_list ;
typedef int zend_ast ;
typedef size_t uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*) ;

void FUNC_4(znode *VAR_1, zend_ast *VAR_2)
{
 zend_ast_list *VAR_3;
 uint32_t VAR_4;

 VAR_1->op_type = VAR_0;
 FUNC_0(&VAR_1->u.constant);

 if (!VAR_2) {
  return;
 }

 VAR_3 = FUNC_1(VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_3->children; ++VAR_4) {
  zend_ast *VAR_5 = VAR_3->child[VAR_4];

  FUNC_3(VAR_1);
  FUNC_2(VAR_1, VAR_5);
 }
}
