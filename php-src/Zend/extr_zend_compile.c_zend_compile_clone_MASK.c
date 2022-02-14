
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int znode ;
struct TYPE_4__ {struct TYPE_4__** child; } ;
typedef TYPE_1__ zend_ast ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,int ,int *,int *) ;

void FUNC_2(znode *VAR_1, zend_ast *VAR_2)
{
 zend_ast *VAR_3 = VAR_2->child[0];

 znode VAR_4;
 FUNC_0(&VAR_4, VAR_3);

 FUNC_1(VAR_1, VAR_0, &VAR_4, ((void*)0));
}
