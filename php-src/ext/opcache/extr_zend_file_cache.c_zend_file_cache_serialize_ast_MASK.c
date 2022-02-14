
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int zend_persistent_script ;
typedef int zend_file_cache_metainfo ;
struct TYPE_12__ {int val; } ;
typedef TYPE_1__ zend_ast_zval ;
struct TYPE_13__ {size_t children; TYPE_3__** child; } ;
typedef TYPE_2__ zend_ast_list ;
struct TYPE_14__ {scalar_t__ kind; struct TYPE_14__** child; } ;
typedef TYPE_3__ zend_ast ;
typedef size_t uint32_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_3 (TYPE_3__*) ;
 size_t FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *,int *,int *,void*) ;

__attribute__((used)) static void FUNC_7(zend_ast *VAR_2,
                                          zend_persistent_script *VAR_3,
                                          zend_file_cache_metainfo *VAR_4,
                                          void *VAR_5)
{
 uint32_t VAR_6;
 zend_ast *VAR_7;

 if (VAR_2->kind == VAR_1 || VAR_2->kind == VAR_0) {
  FUNC_6(&((zend_ast_zval*)VAR_2)->val, VAR_3, VAR_4, VAR_5);
 } else if (FUNC_5(VAR_2)) {
  zend_ast_list *VAR_8 = FUNC_3(VAR_2);
  for (VAR_6 = 0; VAR_6 < VAR_8->children; VAR_6++) {
   if (VAR_8->child[VAR_6] && !FUNC_0(VAR_8->child[VAR_6])) {
    FUNC_1(VAR_8->child[VAR_6]);
    VAR_7 = VAR_8->child[VAR_6];
    FUNC_2(VAR_7);
    FUNC_7(VAR_7, VAR_3, VAR_4, VAR_5);
   }
  }
 } else {
  uint32_t VAR_9 = FUNC_4(VAR_2);
  for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++) {
   if (VAR_2->child[VAR_6] && !FUNC_0(VAR_2->child[VAR_6])) {
    FUNC_1(VAR_2->child[VAR_6]);
    VAR_7 = VAR_2->child[VAR_6];
    FUNC_2(VAR_7);
    FUNC_7(VAR_7, VAR_3, VAR_4, VAR_5);
   }
  }
 }
}
