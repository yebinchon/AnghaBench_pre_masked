
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_12__ {int ce_flags; } ;
typedef TYPE_1__ zend_class_entry ;
struct TYPE_13__ {size_t children; TYPE_3__** child; } ;
typedef TYPE_2__ zend_ast_list ;
struct TYPE_14__ {int attr; struct TYPE_14__** child; } ;
typedef TYPE_3__ zend_ast ;
typedef size_t uint32_t ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int *,TYPE_3__*) ;
 int FUNC_7 (TYPE_1__*,int *,int *,int,int *) ;
 int FUNC_8 (int ,char*) ;
 int * FUNC_9 (int ) ;
 int * FUNC_10 (int ) ;

void FUNC_11(zend_ast *VAR_6)
{
 zend_ast_list *VAR_7 = FUNC_2(VAR_6);
 zend_class_entry *VAR_8 = FUNC_0(VAR_5);
 uint32_t VAR_9;

 if ((VAR_8->ce_flags & VAR_4) != 0) {
  FUNC_8(VAR_0, "Traits cannot have constants");
  return;
 }

 for (VAR_9 = 0; VAR_9 < VAR_7->children; ++VAR_9) {
  zend_ast *VAR_10 = VAR_7->child[VAR_9];
  zend_ast *VAR_11 = VAR_10->child[0];
  zend_ast *VAR_12 = VAR_10->child[1];
  zend_ast *VAR_13 = VAR_10->child[2];
  zend_string *VAR_14 = FUNC_10(FUNC_4(VAR_11));
  zend_string *VAR_15 = VAR_13 ? FUNC_9(FUNC_3(VAR_13)) : ((void*)0);
  zval VAR_16;

  if (FUNC_1(VAR_6->attr & (VAR_3|VAR_1|VAR_2))) {
   FUNC_5(VAR_6->attr, "constant");
  }

  FUNC_6(&VAR_16, VAR_12);
  FUNC_7(VAR_8, VAR_14, &VAR_16, VAR_6->attr, VAR_15);
 }
}
