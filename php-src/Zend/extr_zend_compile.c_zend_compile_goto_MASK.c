
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int znode ;
struct TYPE_8__ {scalar_t__ num; } ;
struct TYPE_9__ {int extended_value; TYPE_1__ op1; } ;
typedef TYPE_2__ zend_op ;
struct TYPE_10__ {struct TYPE_10__** child; } ;
typedef TYPE_3__ zend_ast ;
typedef scalar_t__ uint32_t ;
struct TYPE_11__ {int current_brk_cont; } ;


 TYPE_7__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,TYPE_3__*) ;
 TYPE_2__* FUNC_3 (int *,int ,int *,int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(zend_ast *VAR_2)
{
 zend_ast *VAR_3 = VAR_2->child[0];
 znode VAR_4;
 zend_op *VAR_5;
 uint32_t VAR_6 = FUNC_1();

 FUNC_2(&VAR_4, VAR_3);


 FUNC_4(((void*)0));
 VAR_5 = FUNC_3(((void*)0), VAR_0, ((void*)0), &VAR_4);
 VAR_5->op1.num = FUNC_1() - VAR_6 - 1;
 VAR_5->extended_value = FUNC_0(VAR_1).current_brk_cont;
}
