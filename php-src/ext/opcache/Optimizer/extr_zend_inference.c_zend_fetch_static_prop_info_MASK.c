
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef int zval ;
typedef int zend_ssa ;
typedef int zend_script ;
struct TYPE_14__ {int flags; } ;
typedef TYPE_1__ zend_property_info ;
struct TYPE_15__ {TYPE_4__* scope; } ;
typedef TYPE_2__ zend_op_array ;
struct TYPE_13__ {int num; } ;
struct TYPE_16__ {scalar_t__ op1_type; scalar_t__ op2_type; TYPE_12__ op1; TYPE_12__ op2; } ;
typedef TYPE_3__ zend_op ;
struct TYPE_17__ {int ce_flags; struct TYPE_17__* parent; } ;
typedef TYPE_4__ zend_class_entry ;


 int * FUNC_0 (TYPE_12__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_1 (int *) ;
 TYPE_4__* FUNC_2 (int const*,int ) ;
 TYPE_1__* FUNC_3 (TYPE_4__*,int ,TYPE_4__*) ;

__attribute__((used)) static zend_property_info *FUNC_4(const zend_script *VAR_5, const zend_op_array *VAR_6, zend_ssa *VAR_7, zend_op *VAR_8)
{
 zend_property_info *VAR_9 = ((void*)0);
 if (VAR_8->op1_type == VAR_0) {
  zend_class_entry *VAR_10 = ((void*)0);
  if (VAR_8->op2_type == VAR_1) {
   int VAR_11 = VAR_8->op2.num & VAR_4;
   switch (VAR_11) {
    case 129:
    case 128:


     VAR_10 = VAR_6->scope;
     break;
    case 130:
     if (VAR_6->scope && (VAR_6->scope->ce_flags & VAR_2)) {
      VAR_10 = VAR_6->scope->parent;
     }
     break;
   }
  } else if (VAR_8->op2_type == VAR_0) {
   zval *VAR_12 = FUNC_0(VAR_8->op2);
   VAR_10 = FUNC_2(VAR_5, FUNC_1(VAR_12 + 1));
  }

  if (VAR_10) {
   zval *VAR_13 = FUNC_0(VAR_8->op1);
   VAR_9 = FUNC_3(VAR_10, FUNC_1(VAR_13), VAR_6->scope);
   if (VAR_9 && !(VAR_9->flags & VAR_3)) {
    VAR_9 = ((void*)0);
   }
  }
 }
 return VAR_9;
}
