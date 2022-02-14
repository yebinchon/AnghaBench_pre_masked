
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
typedef scalar_t__ zend_uchar ;
struct TYPE_6__ {size_t children; TYPE_2__** child; } ;
typedef TYPE_1__ zend_ast_list ;
struct TYPE_7__ {scalar_t__ kind; struct TYPE_7__** child; } ;
typedef TYPE_2__ zend_ast ;
typedef size_t uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ,int *,int *,int ) ;
 int * FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__**) ;

__attribute__((used)) static zend_uchar FUNC_6(zend_ast_list *VAR_4) {
 uint32_t VAR_5;
 zend_uchar VAR_6 = VAR_2;
 for (VAR_5 = 0; VAR_5 < VAR_4->children; VAR_5++) {
  zend_ast *VAR_7 = VAR_4->child[VAR_5];
  zend_ast **VAR_8 = &VAR_7->child[0];
  zval *VAR_9;
  if (!VAR_7->child[0]) {

   continue;
  }

  FUNC_5(VAR_8);
  if ((*VAR_8)->kind != VAR_3) {

   return VAR_2;
  }

  VAR_9 = FUNC_4(VAR_7->child[0]);
  if (FUNC_2(VAR_9) != VAR_0 && FUNC_2(VAR_9) != VAR_1) {

   return VAR_2;
  }

  if (VAR_6 == VAR_2) {
   VAR_6 = FUNC_2(VAR_9);
  } else if (VAR_6 != FUNC_2(VAR_9)) {

   return VAR_2;
  }

  if (FUNC_2(VAR_9) == VAR_1
    && FUNC_3(FUNC_1(VAR_9), FUNC_0(VAR_9), ((void*)0), ((void*)0), 0)) {

   return VAR_2;
  }
 }

 return VAR_6;
}
