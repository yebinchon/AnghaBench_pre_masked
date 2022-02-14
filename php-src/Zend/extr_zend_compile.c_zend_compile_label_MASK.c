
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_6__ {int opline_num; int brk_cont; } ;
typedef TYPE_1__ zend_label ;
struct TYPE_7__ {int * child; } ;
typedef TYPE_2__ zend_ast ;
struct TYPE_8__ {int labels; int current_brk_cont; } ;


 int FUNC_0 (int ) ;
 TYPE_5__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 () ;
 int VAR_2 ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ,int *,TYPE_1__*,int) ;
 int FUNC_7 (int ,int,int *,int ,int ) ;

void FUNC_8(zend_ast *VAR_3)
{
 zend_string *VAR_4 = FUNC_4(VAR_3->child[0]);
 zend_label VAR_5;

 if (!FUNC_1(VAR_1).labels) {
  FUNC_0(FUNC_1(VAR_1).labels);
  FUNC_7(FUNC_1(VAR_1).labels, 8, ((void*)0), VAR_2, 0);
 }

 VAR_5.brk_cont = FUNC_1(VAR_1).current_brk_cont;
 VAR_5.opline_num = FUNC_3();

 if (!FUNC_6(FUNC_1(VAR_1).labels, VAR_4, &VAR_5, sizeof(zend_label))) {
  FUNC_5(VAR_0, "Label '%s' already defined", FUNC_2(VAR_4));
 }
}
