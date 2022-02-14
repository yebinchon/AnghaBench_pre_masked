
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int zval ;
struct TYPE_12__ {int constant; } ;
struct TYPE_13__ {TYPE_1__ u; void* op_type; } ;
typedef TYPE_2__ znode ;
typedef int zend_string ;
struct TYPE_14__ {size_t children; TYPE_4__** child; } ;
typedef TYPE_3__ zend_ast_list ;
struct TYPE_15__ {struct TYPE_15__** child; } ;
typedef TYPE_4__ zend_ast ;
typedef size_t uint32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int VAR_4 ;
 TYPE_3__* FUNC_4 (TYPE_4__*) ;
 int * FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int *,TYPE_4__*) ;
 int FUNC_7 (int *,int ,TYPE_2__*,TYPE_2__*) ;
 int FUNC_8 (int ,char*,int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int * FUNC_10 (scalar_t__,int *) ;
 int * FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int *) ;

void FUNC_15(zend_ast *VAR_5)
{
 zend_ast_list *VAR_6 = FUNC_4(VAR_5);
 uint32_t VAR_7;
 for (VAR_7 = 0; VAR_7 < VAR_6->children; ++VAR_7) {
  zend_ast *VAR_8 = VAR_6->child[VAR_7];
  zend_ast *VAR_9 = VAR_8->child[0];
  zend_ast *VAR_10 = VAR_8->child[1];
  zend_string *VAR_11 = FUNC_5(VAR_9);

  zend_string *VAR_12;
  znode VAR_13, VAR_14;
  zval *VAR_15 = &VAR_14.u.constant;

  VAR_14.op_type = VAR_1;
  FUNC_6(VAR_15, VAR_10);

  if (FUNC_9(FUNC_2(VAR_11), FUNC_1(VAR_11))) {
   FUNC_8(VAR_0,
    "Cannot redeclare constant '%s'", FUNC_2(VAR_11));
  }

  VAR_12 = FUNC_12(VAR_11);
  VAR_12 = FUNC_11(VAR_12);

  if (FUNC_0(VAR_4)) {
   zend_string *VAR_16 = FUNC_10(FUNC_0(VAR_4), VAR_11);
   if (VAR_16 && !FUNC_14(VAR_16, VAR_12)) {
    FUNC_8(VAR_0, "Cannot declare const %s because "
     "the name is already in use", FUNC_2(VAR_12));
   }
  }

  VAR_13.op_type = VAR_1;
  FUNC_3(&VAR_13.u.constant, VAR_12);

  FUNC_7(((void*)0), VAR_2, &VAR_13, &VAR_14);

  FUNC_13(VAR_12, VAR_3);
 }
}
