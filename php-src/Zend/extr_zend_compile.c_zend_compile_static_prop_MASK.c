
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_20__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_22__ {int constant; } ;
struct TYPE_24__ {scalar_t__ op_type; TYPE_1__ u; } ;
typedef TYPE_2__ znode ;
struct TYPE_23__ {int constant; } ;
struct TYPE_25__ {scalar_t__ op1_type; int extended_value; TYPE_20__ op2; scalar_t__ op2_type; int op1; } ;
typedef TYPE_3__ zend_op ;
struct TYPE_26__ {struct TYPE_26__** child; } ;
typedef TYPE_4__ zend_ast ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_20__,TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_2__*,TYPE_4__*,int ) ;
 int FUNC_9 (TYPE_2__*,TYPE_4__*) ;
 TYPE_3__* FUNC_10 (TYPE_2__*,int ,TYPE_2__*,int *) ;
 TYPE_3__* FUNC_11 (TYPE_2__*,int ,TYPE_2__*,int *) ;

zend_op *FUNC_12(znode *VAR_6, zend_ast *VAR_7, uint32_t VAR_8, int VAR_9, int VAR_10)
{
 zend_ast *VAR_11 = VAR_7->child[0];
 zend_ast *VAR_12 = VAR_7->child[1];

 znode VAR_13, VAR_14;
 zend_op *VAR_15;

 FUNC_8(&VAR_13, VAR_11, VAR_3);

 FUNC_9(&VAR_14, VAR_12);

 if (VAR_10) {
  VAR_15 = FUNC_10(VAR_6, VAR_5, &VAR_14, ((void*)0));
 } else {
  VAR_15 = FUNC_11(VAR_6, VAR_5, &VAR_14, ((void*)0));
 }
 if (VAR_15->op1_type == VAR_2) {
  FUNC_3(FUNC_0(VAR_15->op1));
  VAR_15->extended_value = FUNC_7(3);
 }
 if (VAR_13.op_type == VAR_2) {
  VAR_15->op2_type = VAR_2;
  VAR_15->op2.constant = FUNC_4(
   FUNC_2(VAR_13.u.constant));
  if (VAR_15->op1_type != VAR_2) {
   VAR_15->extended_value = FUNC_6();
  }
 } else {
  FUNC_1(VAR_15->op2, &VAR_13);
 }

 if (VAR_9 && (VAR_8 == VAR_1 || VAR_8 == VAR_0)) {
  VAR_15->extended_value |= VAR_4;
 }

 FUNC_5(VAR_15, VAR_6, VAR_8);
 return VAR_15;
}
