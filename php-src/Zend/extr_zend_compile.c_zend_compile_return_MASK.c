
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_19__ ;


struct TYPE_21__ {int constant; } ;
struct TYPE_22__ {int op_type; TYPE_1__ u; } ;
typedef TYPE_2__ znode ;
struct TYPE_23__ {int extended_value; } ;
typedef TYPE_3__ zend_op ;
typedef int zend_bool ;
struct TYPE_24__ {struct TYPE_24__** child; } ;
typedef TYPE_4__ zend_ast ;
struct TYPE_20__ {int fn_flags; scalar_t__ arg_info; } ;


 int VAR_0 ;
 TYPE_19__* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int *) ;
 int VAR_15 ;
 int FUNC_2 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_4__*,int ,int) ;
 TYPE_3__* FUNC_4 (TYPE_2__*,int ,TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*,int ,TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 (TYPE_4__*) ;
 scalar_t__ FUNC_10 (TYPE_4__*) ;

void FUNC_11(zend_ast *VAR_16)
{
 zend_ast *VAR_17 = VAR_16->child[0];
 zend_bool VAR_18 = (FUNC_0(VAR_15)->fn_flags & VAR_5) != 0;
 zend_bool VAR_19 = (FUNC_0(VAR_15)->fn_flags & VAR_8) != 0;

 znode VAR_20;
 zend_op *VAR_21;

 if (VAR_18) {

  VAR_19 = 0;
 }

 if (!VAR_17) {
  VAR_20.op_type = VAR_1;
  FUNC_1(&VAR_20.u.constant);
 } else if (VAR_19 && FUNC_10(VAR_17)) {
  FUNC_3(&VAR_20, VAR_17, VAR_0, 1);
 } else {
  FUNC_2(&VAR_20, VAR_17);
 }

 if ((FUNC_0(VAR_15)->fn_flags & VAR_6)
  && (VAR_20.op_type == VAR_2 || (VAR_19 && VAR_20.op_type == VAR_4))
  && FUNC_8()) {

  if (VAR_19) {
   FUNC_4(&VAR_20, VAR_9, &VAR_20, ((void*)0));
  } else {
   FUNC_5(&VAR_20, VAR_10, &VAR_20, ((void*)0));
  }
 }


 if (!VAR_18 && FUNC_0(VAR_15)->fn_flags & VAR_7) {
  FUNC_6(
   VAR_17 ? &VAR_20 : ((void*)0), FUNC_0(VAR_15)->arg_info - 1, 0);
 }

 FUNC_7((VAR_20.op_type & (VAR_3 | VAR_4)) ? &VAR_20 : ((void*)0));

 VAR_21 = FUNC_4(((void*)0), VAR_19 ? VAR_14 : VAR_11,
  &VAR_20, ((void*)0));

 if (VAR_19 && VAR_17) {
  if (FUNC_9(VAR_17)) {
   VAR_21->extended_value = VAR_12;
  } else if (!FUNC_10(VAR_17)) {
   VAR_21->extended_value = VAR_13;
  }
 }
}
