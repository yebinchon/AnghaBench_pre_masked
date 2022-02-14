
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_8__ {size_t children; TYPE_2__** child; } ;
typedef TYPE_1__ zend_ast_list ;
struct TYPE_9__ {scalar_t__ attr; int * child; } ;
typedef TYPE_2__ zend_ast ;
typedef size_t uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int,int ,TYPE_2__*) ;
 TYPE_1__* FUNC_5 (int ) ;
 int * FUNC_6 (int ) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int * FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (int *,int ) ;

void FUNC_11(zend_ast *VAR_1)
{
 uint32_t VAR_2;
 zend_string *VAR_3 = FUNC_6(VAR_1->child[0]);
 zend_ast_list *VAR_4 = FUNC_5(VAR_1->child[1]);

 for (VAR_2 = 0; VAR_2 < VAR_4->children; VAR_2++) {
  zend_ast *VAR_5, *VAR_6 = VAR_4->child[VAR_2];
  zval *VAR_7 = FUNC_7(VAR_6->child[0]);
  zend_string *VAR_8 = FUNC_3(VAR_7);
  zend_string *VAR_9 = FUNC_9(FUNC_1(VAR_3), FUNC_0(VAR_3), FUNC_1(VAR_8), FUNC_0(VAR_8));
  FUNC_10(VAR_8, 0);
  FUNC_2(VAR_7, VAR_9);
  VAR_5 = FUNC_4(1, VAR_0, VAR_6);
  VAR_5->attr = VAR_1->attr ? VAR_1->attr : VAR_6->attr;
  FUNC_8(VAR_5);
 }
}
