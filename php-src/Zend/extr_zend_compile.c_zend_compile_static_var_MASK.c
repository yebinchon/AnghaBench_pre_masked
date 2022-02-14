
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
struct TYPE_5__ {struct TYPE_5__** child; } ;
typedef TYPE_1__ zend_ast ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *,TYPE_1__*) ;

void FUNC_4(zend_ast *VAR_1)
{
 zend_ast *VAR_2 = VAR_1->child[0];
 zend_ast *VAR_3 = VAR_1->child[1];
 zval VAR_4;

 if (VAR_3) {
  FUNC_3(&VAR_4, VAR_3);
 } else {
  FUNC_0(&VAR_4);
 }

 FUNC_2(FUNC_1(VAR_2), &VAR_4, VAR_0);
}
