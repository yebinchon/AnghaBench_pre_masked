
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_14__ {size_t children; TYPE_3__** child; } ;
typedef TYPE_1__ zend_ast_list ;
struct TYPE_15__ {TYPE_3__** child; } ;
typedef TYPE_2__ zend_ast_decl ;
struct TYPE_16__ {scalar_t__ kind; struct TYPE_16__** child; } ;
typedef TYPE_3__ zend_ast ;
typedef size_t uint32_t ;
struct TYPE_17__ {int varvars_used; int uses; } ;
typedef TYPE_4__ closure_info ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_3__*) ;
 size_t FUNC_2 (TYPE_3__*) ;
 int * FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,char*) ;

__attribute__((used)) static void FUNC_10(closure_info *VAR_5, zend_ast *VAR_6) {
 if (!VAR_6) {
  return;
 }

 if (VAR_6->kind == VAR_3) {
  zend_ast *VAR_7 = VAR_6->child[0];
  if (VAR_7->kind == VAR_4 && FUNC_0(FUNC_4(VAR_7)) == VAR_0) {
   zend_string *VAR_8 = FUNC_3(VAR_7);
   if (FUNC_8(VAR_8)) {

    return;
   }

   if (FUNC_9(VAR_8, "this")) {

    return;
   }

   FUNC_7(&VAR_5->uses, VAR_8);
  } else {
   VAR_5->varvars_used = 1;
   FUNC_10(VAR_5, VAR_7);
  }
 } else if (FUNC_5(VAR_6)) {
  zend_ast_list *VAR_9 = FUNC_1(VAR_6);
  uint32_t VAR_10;
  for (VAR_10 = 0; VAR_10 < VAR_9->children; VAR_10++) {
   FUNC_10(VAR_5, VAR_9->child[VAR_10]);
  }
 } else if (VAR_6->kind == VAR_2) {

  zend_ast_decl *VAR_11 = (zend_ast_decl *) VAR_6;
  zend_ast *VAR_12 = VAR_11->child[1];
  if (VAR_12) {
   zend_ast_list *VAR_13 = FUNC_1(VAR_12);
   uint32_t VAR_14;
   for (VAR_14 = 0; VAR_14 < VAR_13->children; VAR_14++) {
    FUNC_7(&VAR_5->uses, FUNC_3(VAR_13->child[VAR_14]));
   }
  }
 } else if (VAR_6->kind == VAR_1) {

  zend_ast_decl *VAR_15 = (zend_ast_decl *) VAR_6;
  FUNC_10(VAR_5, VAR_15->child[2]);
 } else if (!FUNC_6(VAR_6)) {
  uint32_t VAR_16, VAR_17 = FUNC_2(VAR_6);
  for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++) {
   FUNC_10(VAR_5, VAR_6->child[VAR_16]);
  }
 }
}
