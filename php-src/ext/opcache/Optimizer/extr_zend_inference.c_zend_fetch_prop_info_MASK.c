
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {TYPE_2__* ops; TYPE_1__* var_info; } ;
typedef TYPE_3__ zend_ssa ;
struct TYPE_15__ {int flags; } ;
typedef TYPE_4__ zend_property_info ;
struct TYPE_16__ {int * scope; } ;
typedef TYPE_5__ zend_op_array ;
struct TYPE_17__ {scalar_t__ op2_type; scalar_t__ op1_type; int op2; } ;
typedef TYPE_6__ zend_op ;
typedef int zend_class_entry ;
struct TYPE_13__ {size_t op1_use; } ;
struct TYPE_12__ {int * ce; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 TYPE_4__* FUNC_2 (int *,int ,int *) ;

__attribute__((used)) static zend_property_info *FUNC_3(const zend_op_array *VAR_3, zend_ssa *VAR_4, zend_op *VAR_5, int VAR_6)
{
 zend_property_info *VAR_7 = ((void*)0);
 if (VAR_5->op2_type == VAR_0) {
  zend_class_entry *VAR_8 = ((void*)0);

  if (VAR_5->op1_type == VAR_1) {
   VAR_8 = VAR_3->scope;
  } else if (VAR_4->ops[VAR_6].op1_use >= 0) {
   VAR_8 = VAR_4->var_info[VAR_4->ops[VAR_6].op1_use].ce;
  }
  if (VAR_8) {
   VAR_7 = FUNC_2(VAR_8,
    FUNC_1(FUNC_0(VAR_5->op2)),
    VAR_3->scope);
   if (VAR_7 && (VAR_7->flags & VAR_2)) {
    VAR_7 = ((void*)0);
   }
  }
 }
 return VAR_7;
}
