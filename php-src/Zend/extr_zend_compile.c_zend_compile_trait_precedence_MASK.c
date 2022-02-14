
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_13__ {int num_excludes; int * exclude_class_names; int trait_method; } ;
typedef TYPE_1__ zend_trait_precedence ;
typedef int zend_string ;
struct TYPE_14__ {int children; TYPE_3__** child; } ;
typedef TYPE_2__ zend_ast_list ;
struct TYPE_15__ {struct TYPE_15__** child; } ;
typedef TYPE_3__ zend_ast ;
typedef size_t uint32_t ;
struct TYPE_12__ {int trait_precedences; } ;


 TYPE_11__* FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 TYPE_2__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_6(zend_ast *VAR_1)
{
 zend_ast *VAR_2 = VAR_1->child[0];
 zend_ast *VAR_3 = VAR_1->child[1];
 zend_ast_list *VAR_4 = FUNC_3(VAR_3);
 uint32_t VAR_5;

 zend_trait_precedence *VAR_6 = FUNC_1(sizeof(zend_trait_precedence) + (VAR_4->children - 1) * sizeof(zend_string*));
 FUNC_4(VAR_2, &VAR_6->trait_method);
 VAR_6->num_excludes = VAR_4->children;

 for (VAR_5 = 0; VAR_5 < VAR_4->children; ++VAR_5) {
  zend_ast *VAR_7 = VAR_4->child[VAR_5];
  VAR_6->exclude_class_names[VAR_5] = FUNC_5(VAR_7);
 }

 FUNC_2(&FUNC_0(VAR_0)->trait_precedences, VAR_6);
}
