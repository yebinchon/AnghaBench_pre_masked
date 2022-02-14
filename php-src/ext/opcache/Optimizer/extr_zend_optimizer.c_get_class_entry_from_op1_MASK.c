
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_16__ {int class_table; } ;
typedef TYPE_3__ zend_script ;
struct TYPE_17__ {scalar_t__ filename; TYPE_6__* scope; } ;
typedef TYPE_4__ zend_op_array ;
struct TYPE_13__ {int num; } ;
struct TYPE_18__ {scalar_t__ op1_type; TYPE_12__ op1; } ;
typedef TYPE_5__ zend_op ;
struct TYPE_14__ {scalar_t__ filename; } ;
struct TYPE_15__ {TYPE_1__ user; } ;
struct TYPE_19__ {scalar_t__ type; int ce_flags; TYPE_2__ info; } ;
typedef TYPE_6__ zend_class_entry ;


 int * FUNC_0 (TYPE_12__) ;
 int * FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_8 ;
 TYPE_6__* FUNC_4 (int *,int *) ;

__attribute__((used)) static zend_class_entry *FUNC_5(
  zend_script *VAR_9, zend_op_array *VAR_10, zend_op *VAR_11) {
 if (VAR_11->op1_type == VAR_0) {
  zval *VAR_12 = FUNC_0(VAR_11->op1);
  if (FUNC_3(VAR_12) == VAR_1) {
   zend_string *VAR_13 = FUNC_2(VAR_12 + 1);
   zend_class_entry *VAR_14;
   if (VAR_9 && (VAR_14 = FUNC_4(&VAR_9->class_table, VAR_13))) {
    return VAR_14;
   } else if ((VAR_14 = FUNC_4(FUNC_1(VAR_8), VAR_13))) {
    if (VAR_14->type == VAR_6) {
     return VAR_14;
    } else if (VAR_14->type == VAR_7 &&
         VAR_14->info.user.filename &&
         VAR_14->info.user.filename == VAR_10->filename) {
     return VAR_14;
    }
   }
  }
 } else if (VAR_11->op1_type == VAR_2 && VAR_10->scope
   && !(VAR_10->scope->ce_flags & VAR_3)
   && (VAR_11->op1.num & VAR_4) == VAR_5) {
  return VAR_10->scope;
 }
 return ((void*)0);
}
