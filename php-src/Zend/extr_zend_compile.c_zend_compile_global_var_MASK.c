
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int constant; } ;
struct TYPE_18__ {scalar_t__ op_type; TYPE_1__ u; } ;
typedef TYPE_2__ znode ;
struct TYPE_19__ {int extended_value; } ;
typedef TYPE_3__ zend_op ;
struct TYPE_20__ {struct TYPE_20__** child; } ;
typedef TYPE_4__ zend_ast ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_7 (int ,TYPE_2__*) ;
 TYPE_3__* FUNC_8 (TYPE_2__*,int ,TYPE_2__*,TYPE_2__*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (TYPE_2__*,TYPE_4__*) ;

void FUNC_12(zend_ast *VAR_7)
{
 zend_ast *VAR_8 = VAR_7->child[0];
 zend_ast *VAR_9 = VAR_8->child[0];

 znode VAR_10, VAR_11;

 FUNC_6(&VAR_10, VAR_9);
 if (VAR_10.op_type == VAR_1) {
  FUNC_1(&VAR_10.u.constant);
 }

 if (FUNC_2(VAR_8)) {
  FUNC_9(VAR_0, "Cannot use $this as global variable");
 } else if (FUNC_11(&VAR_11, VAR_8) == VAR_2) {
  zend_op *VAR_12 = FUNC_8(((void*)0), VAR_4, &VAR_11, &VAR_10);
  VAR_12->extended_value = FUNC_3();
 } else {



  zend_op *VAR_13 = FUNC_8(&VAR_11, VAR_6, &VAR_10, ((void*)0));
  VAR_13->extended_value = VAR_5;

  if (VAR_10.op_type == VAR_1) {
   FUNC_10(FUNC_0(VAR_10.u.constant));
  }

  FUNC_7(
   FUNC_4(VAR_3, FUNC_5(&VAR_10)),
   &VAR_11
  );
 }
}
