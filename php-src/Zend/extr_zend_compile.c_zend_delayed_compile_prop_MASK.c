
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_22__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_23__ {int op_type; } ;
typedef TYPE_1__ znode ;
struct TYPE_25__ {scalar_t__ op2_type; int extended_value; int op2; } ;
typedef TYPE_2__ zend_op ;
struct TYPE_26__ {struct TYPE_26__** child; } ;
typedef TYPE_3__ zend_ast ;
typedef int uint32_t ;
struct TYPE_24__ {int fn_flags; } ;


 TYPE_22__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*,TYPE_3__*) ;
 TYPE_2__* FUNC_8 (TYPE_1__*,TYPE_3__*,int ,int ) ;
 TYPE_2__* FUNC_9 (TYPE_1__*,int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int ,int *,int *) ;
 int FUNC_11 (TYPE_1__*,TYPE_3__*,int ) ;

__attribute__((used)) static zend_op *FUNC_12(znode *VAR_6, zend_ast *VAR_7, uint32_t VAR_8)
{
 zend_ast *VAR_9 = VAR_7->child[0];
 zend_ast *VAR_10 = VAR_7->child[1];

 znode VAR_11, VAR_12;
 zend_op *VAR_13;

 if (FUNC_3(VAR_9)) {
  if (FUNC_4()) {
   VAR_11.op_type = VAR_1;
  } else {
   FUNC_10(&VAR_11, VAR_4, ((void*)0), ((void*)0));
  }
  FUNC_0(VAR_5)->fn_flags |= VAR_2;
 } else {
  VAR_13 = FUNC_8(&VAR_11, VAR_9, VAR_8, 0);
  FUNC_11(&VAR_11, VAR_9, VAR_8);
 }
 FUNC_7(&VAR_12, VAR_10);

 VAR_13 = FUNC_9(VAR_6, VAR_3, &VAR_11, &VAR_12);
 if (VAR_13->op2_type == VAR_0) {
  FUNC_2(FUNC_1(VAR_13->op2));
  VAR_13->extended_value = FUNC_6(3);
 }

 FUNC_5(VAR_13, VAR_6, VAR_8);
 return VAR_13;
}
