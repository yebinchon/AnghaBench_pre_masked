
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_19__ ;


struct TYPE_22__ {int var; } ;
struct TYPE_24__ {int constant; TYPE_1__ op; } ;
struct TYPE_26__ {scalar_t__ op_type; TYPE_3__ u; } ;
typedef TYPE_5__ znode ;
struct TYPE_21__ {int constant; } ;
struct TYPE_25__ {int num; } ;
struct TYPE_23__ {int var; } ;
struct TYPE_27__ {scalar_t__ result_type; TYPE_19__ op1; TYPE_4__ op2; scalar_t__ op1_type; TYPE_2__ result; } ;
typedef TYPE_6__ zend_op ;
struct TYPE_28__ {scalar_t__ kind; struct TYPE_28__** child; } ;
typedef TYPE_7__ zend_ast ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_19__,TYPE_5__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_5__*,TYPE_7__*,int *) ;
 TYPE_6__* FUNC_5 (TYPE_7__*,int ) ;
 int FUNC_6 (TYPE_5__*,TYPE_7__*,int ) ;
 int FUNC_7 (TYPE_5__*) ;
 TYPE_6__* FUNC_8 (TYPE_5__*,int ,int *,int *) ;

void FUNC_9(znode *VAR_4, zend_ast *VAR_5)
{
 zend_ast *VAR_6 = VAR_5->child[0];
 zend_ast *VAR_7 = VAR_5->child[1];

 znode VAR_8, VAR_9;
 zend_op *VAR_10;

 if (VAR_6->kind == VAR_1) {

  VAR_10 = FUNC_5(VAR_6, 0);
  VAR_8.op_type = VAR_10->result_type;
  VAR_8.u.op.var = VAR_10->result.var;
 } else {
  FUNC_6(&VAR_8, VAR_6, VAR_2);
 }

 VAR_10 = FUNC_8(VAR_4, VAR_3, ((void*)0), ((void*)0));

 if (VAR_8.op_type == VAR_0) {
  VAR_10->op1_type = VAR_0;
  VAR_10->op1.constant = FUNC_2(
   FUNC_1(VAR_8.u.constant));
  VAR_10->op2.num = FUNC_3();
 } else {
  FUNC_0(VAR_10->op1, &VAR_8);
 }

 FUNC_4(&VAR_9, VAR_7, ((void*)0));
 FUNC_7(&VAR_9);
}
