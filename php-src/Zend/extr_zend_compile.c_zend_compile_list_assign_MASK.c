
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_22__ {int constant; } ;
struct TYPE_23__ {scalar_t__ op_type; TYPE_1__ u; } ;
typedef TYPE_2__ znode ;
typedef int zend_op ;
typedef int zend_bool ;
struct TYPE_24__ {scalar_t__ children; TYPE_4__** child; } ;
typedef TYPE_3__ zend_ast_list ;
struct TYPE_25__ {scalar_t__ kind; int attr; struct TYPE_25__** child; } ;
typedef TYPE_4__ zend_ast ;
typedef size_t uint32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,size_t) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_2__*) ;
 int * FUNC_8 (TYPE_2__*,int ,TYPE_2__*,TYPE_2__*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int *,TYPE_2__*) ;
 int FUNC_12 (TYPE_4__*,int) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(
  znode *VAR_10, zend_ast *VAR_11, znode *VAR_12, zend_bool VAR_13)
{
 zend_ast_list *VAR_14 = FUNC_3(VAR_11);
 uint32_t VAR_15;
 zend_bool VAR_16 = 0;
 zend_bool VAR_17 =
  VAR_14->children > 0 && VAR_14->child[0] != ((void*)0) && VAR_14->child[0]->child[1] != ((void*)0);

 if (VAR_14->children && VAR_12->op_type == VAR_1 && FUNC_2(VAR_12->u.constant) == VAR_3) {
  FUNC_13(&VAR_12->u.constant);
 }

 for (VAR_15 = 0; VAR_15 < VAR_14->children; ++VAR_15) {
  zend_ast *VAR_18 = VAR_14->child[VAR_15];
  zend_ast *VAR_19, *VAR_20;
  znode VAR_21, VAR_22;
  zend_op *VAR_23;

  if (VAR_18 == ((void*)0)) {
   if (VAR_17) {
    FUNC_9(VAR_0,
     "Cannot use empty array entries in keyed array assignment");
   } else {
    continue;
   }
  }

  if (VAR_18->kind == VAR_5) {
   FUNC_9(VAR_0,
     "Spread operator is not supported in assignments");
  }

  VAR_19 = VAR_18->child[0];
  VAR_20 = VAR_18->child[1];
  VAR_16 = 1;

  if (VAR_17) {
   if (VAR_20 == ((void*)0)) {
    FUNC_9(VAR_0,
     "Cannot mix keyed and unkeyed array entries in assignments");
   }

   FUNC_4(&VAR_22, VAR_20);
  } else {
   if (VAR_20 != ((void*)0)) {
    FUNC_9(VAR_0,
     "Cannot mix keyed and unkeyed array entries in assignments");
   }

   VAR_22.op_type = VAR_1;
   FUNC_0(&VAR_22.u.constant, VAR_15);
  }

  if (VAR_12->op_type == VAR_1) {
   FUNC_1(VAR_12->u.constant);
  }

  FUNC_12(VAR_19, VAR_13);

  VAR_23 = FUNC_8(&VAR_21,
   VAR_18->attr ? (VAR_12->op_type == VAR_2 ? VAR_6 : VAR_8) : VAR_7, VAR_12, &VAR_22);

  if (VAR_22.op_type == VAR_1) {
   FUNC_11(VAR_23, &VAR_22);
  }

  if (VAR_19->kind == VAR_4) {
   if (VAR_18->attr) {
    FUNC_8(&VAR_21, VAR_9, &VAR_21, ((void*)0));
   }
   FUNC_14(((void*)0), VAR_19, &VAR_21, VAR_19->attr);
  } else if (VAR_18->attr) {
   FUNC_6(VAR_19, &VAR_21);
  } else {
   FUNC_7(VAR_19, &VAR_21);
  }
 }

 if (VAR_16 == 0) {
  FUNC_10(VAR_0, "Cannot use empty list");
 }

 if (VAR_10) {
  *VAR_10 = *VAR_12;
 } else {
  FUNC_5(VAR_12);
 }
}
