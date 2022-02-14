
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int zend_string ;
typedef int zend_bool ;
struct TYPE_6__ {scalar_t__ kind; struct TYPE_6__** child; } ;
typedef TYPE_1__ zend_ast ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int ) ;

zend_bool FUNC_5(zend_ast *VAR_2, zend_ast *VAR_3)
{
 if (VAR_3->kind != VAR_0 || VAR_3->child[0]->kind != VAR_1) {
  return 0;
 }

 while (FUNC_1(VAR_2) && VAR_2->kind != VAR_0) {
  VAR_2 = VAR_2->child[0];
 }

 if (VAR_2->kind != VAR_0 || VAR_2->child[0]->kind != VAR_1) {
  return 0;
 }

 {
  zend_string *VAR_4 = FUNC_4(FUNC_0(VAR_2->child[0]));
  zend_string *VAR_5 = FUNC_4(FUNC_0(VAR_3->child[0]));
  zend_bool VAR_6 = FUNC_2(VAR_4, VAR_5);
  FUNC_3(VAR_4, 0);
  FUNC_3(VAR_5, 0);
  return VAR_6;
 }
}
