
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int znode ;
struct TYPE_5__ {struct TYPE_5__** child; } ;
typedef TYPE_1__ zend_ast ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(zend_ast *VAR_2)
{
 zend_ast *VAR_3 = VAR_2->child[0];
 zend_ast *VAR_4 = VAR_2->child[1];

 znode VAR_5;
 uint32_t VAR_6, VAR_7;

 FUNC_1(VAR_1, ((void*)0), 0);

 VAR_6 = FUNC_0();
 FUNC_3(VAR_3);

 VAR_7 = FUNC_0();
 FUNC_2(&VAR_5, VAR_4);

 FUNC_4(VAR_0, &VAR_5, VAR_6);

 FUNC_5(VAR_7, ((void*)0));
}
