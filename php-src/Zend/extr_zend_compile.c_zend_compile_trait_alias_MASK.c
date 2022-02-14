
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * alias; int modifiers; int trait_method; } ;
typedef TYPE_1__ zend_trait_alias ;
struct TYPE_10__ {int attr; struct TYPE_10__** child; } ;
typedef TYPE_2__ zend_ast ;
typedef int uint32_t ;
struct TYPE_11__ {int trait_aliases; } ;


 TYPE_8__* FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int * FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(zend_ast *VAR_1)
{
 zend_ast *VAR_2 = VAR_1->child[0];
 zend_ast *VAR_3 = VAR_1->child[1];
 uint32_t VAR_4 = VAR_1->attr;

 zend_trait_alias *VAR_5;

 FUNC_4(VAR_4, "method");

 VAR_5 = FUNC_1(sizeof(zend_trait_alias));
 FUNC_5(VAR_2, &VAR_5->trait_method);
 VAR_5->modifiers = VAR_4;

 if (VAR_3) {
  VAR_5->alias = FUNC_6(FUNC_3(VAR_3));
 } else {
  VAR_5->alias = ((void*)0);
 }

 FUNC_2(&FUNC_0(VAR_0)->trait_aliases, VAR_5);
}
