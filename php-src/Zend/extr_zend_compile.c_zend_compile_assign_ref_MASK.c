
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ op_type; } ;
typedef TYPE_1__ znode ;
struct TYPE_20__ {scalar_t__ opcode; int extended_value; } ;
typedef TYPE_2__ zend_op ;
struct TYPE_21__ {scalar_t__ kind; struct TYPE_21__** child; } ;
typedef TYPE_3__ zend_ast ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*,int ,int) ;
 int FUNC_2 () ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_3__*,int ,int) ;
 TYPE_2__* FUNC_5 (TYPE_1__*,int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ,char*) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;

void FUNC_10(znode *VAR_14, zend_ast *VAR_15)
{
 zend_ast *VAR_16 = VAR_15->child[0];
 zend_ast *VAR_17 = VAR_15->child[1];

 znode VAR_18, VAR_19;
 zend_op *VAR_20;
 uint32_t VAR_21, VAR_22;

 if (FUNC_0(VAR_16)) {
  FUNC_8(VAR_1, "Cannot re-assign $this");
 }
 FUNC_7(VAR_16);

 VAR_21 = FUNC_2();
 FUNC_4(&VAR_18, VAR_16, VAR_0, 1);
 FUNC_1(&VAR_19, VAR_17, VAR_0, 1);

 if ((VAR_16->kind != VAR_7
   || VAR_16->child[0]->kind != VAR_8)
  && VAR_19.op_type != VAR_2) {






  FUNC_5(&VAR_19, VAR_12, &VAR_19, ((void*)0));
 }

 VAR_20 = FUNC_3(VAR_21);

 if (VAR_19.op_type != VAR_3 && FUNC_9(VAR_17)) {
  FUNC_8(VAR_1, "Cannot use result of built-in function in write context");
 }

 VAR_22 = FUNC_9(VAR_17) ? VAR_13 : 0;

 if (VAR_20 && VAR_20->opcode == VAR_9) {
  VAR_20->opcode = VAR_4;
  VAR_20->extended_value &= ~VAR_10;
  VAR_20->extended_value |= VAR_22;
  FUNC_6(&VAR_19);
  if (VAR_14 != ((void*)0)) {
   *VAR_14 = VAR_18;
  }
 } else if (VAR_20 && VAR_20->opcode == VAR_11) {
  VAR_20->opcode = VAR_6;
  VAR_20->extended_value &= ~VAR_10;
  VAR_20->extended_value |= VAR_22;
  FUNC_6(&VAR_19);
  if (VAR_14 != ((void*)0)) {
   *VAR_14 = VAR_18;
  }
 } else {
  VAR_20 = FUNC_5(VAR_14, VAR_5, &VAR_18, &VAR_19);
  VAR_20->extended_value = VAR_22;
 }
}
