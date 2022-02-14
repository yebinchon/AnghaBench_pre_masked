
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int znode ;
struct TYPE_6__ {scalar_t__ extended_value; } ;
typedef TYPE_1__ zend_op ;
struct TYPE_7__ {struct TYPE_7__** child; } ;
typedef TYPE_2__ zend_ast ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 TYPE_1__* FUNC_1 (int *,int ,int *,int *) ;

void FUNC_2(zend_ast *VAR_1)
{
 zend_op *VAR_2;
 zend_ast *VAR_3 = VAR_1->child[0];

 znode VAR_4;
 FUNC_0(&VAR_4, VAR_3);

 VAR_2 = FUNC_1(((void*)0), VAR_0, &VAR_4, ((void*)0));
 VAR_2->extended_value = 0;
}
