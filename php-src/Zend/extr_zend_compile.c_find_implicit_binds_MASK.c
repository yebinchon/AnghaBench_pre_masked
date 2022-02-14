
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {size_t children; TYPE_2__** child; } ;
typedef TYPE_1__ zend_ast_list ;
struct TYPE_12__ {int * child; } ;
typedef TYPE_2__ zend_ast ;
typedef size_t uint32_t ;
struct TYPE_13__ {int uses; } ;
typedef TYPE_3__ closure_info ;


 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,size_t,int *,int *,int ) ;

__attribute__((used)) static void FUNC_5(closure_info *VAR_0, zend_ast *VAR_1, zend_ast *VAR_2)
{
 zend_ast_list *VAR_3 = FUNC_1(VAR_1);
 uint32_t VAR_4;

 FUNC_4(&VAR_0->uses, VAR_3->children, ((void*)0), ((void*)0), 0);

 FUNC_0(VAR_0, VAR_2);


 for (VAR_4 = 0; VAR_4 < VAR_3->children; VAR_4++) {
  zend_ast *VAR_5 = VAR_3->child[VAR_4];
  FUNC_3(&VAR_0->uses, FUNC_2(VAR_5->child[1]));
 }
}
