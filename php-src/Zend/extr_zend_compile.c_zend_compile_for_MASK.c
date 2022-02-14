
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
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ) ;

void FUNC_10(zend_ast *VAR_2)
{
 zend_ast *VAR_3 = VAR_2->child[0];
 zend_ast *VAR_4 = VAR_2->child[1];
 zend_ast *VAR_5 = VAR_2->child[2];
 zend_ast *VAR_6 = VAR_2->child[3];

 znode VAR_7;
 uint32_t VAR_8, VAR_9, VAR_10;

 FUNC_2(&VAR_7, VAR_3);
 FUNC_5(&VAR_7);

 VAR_9 = FUNC_7(0);

 FUNC_1(VAR_1, ((void*)0), 0);

 VAR_8 = FUNC_0();
 FUNC_3(VAR_6);

 VAR_10 = FUNC_0();
 FUNC_2(&VAR_7, VAR_5);
 FUNC_5(&VAR_7);

 FUNC_9(VAR_9);
 FUNC_2(&VAR_7, VAR_4);
 FUNC_4();

 FUNC_6(VAR_0, &VAR_7, VAR_8);

 FUNC_8(VAR_10, ((void*)0));
}
