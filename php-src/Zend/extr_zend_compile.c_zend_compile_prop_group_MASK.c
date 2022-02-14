
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int attr; struct TYPE_5__** child; } ;
typedef TYPE_1__ zend_ast ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int ) ;

void FUNC_1(zend_ast *VAR_0)
{
 zend_ast *VAR_1 = VAR_0->child[0];
 zend_ast *VAR_2 = VAR_0->child[1];

 FUNC_0(VAR_2, VAR_1, VAR_0->attr);
}
