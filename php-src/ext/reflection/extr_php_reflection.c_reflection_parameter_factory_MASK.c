
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zval ;
struct TYPE_9__ {int name; } ;
typedef TYPE_2__ zend_internal_arg_info ;
struct TYPE_8__ {int fn_flags; int scope; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_1__ common; } ;
typedef TYPE_3__ zend_function ;
typedef int zend_bool ;
typedef int uint32_t ;
struct _zend_arg_info {int name; } ;
struct TYPE_11__ {int obj; int ce; int ref_type; TYPE_5__* ptr; } ;
typedef TYPE_4__ reflection_object ;
struct TYPE_12__ {TYPE_3__* fptr; int required; int offset; struct _zend_arg_info* arg_info; } ;
typedef TYPE_5__ parameter_reference ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_4__* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ,int *) ;
 int VAR_3 ;
 int * FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(zend_function *VAR_4, zval *VAR_5, struct _zend_arg_info *VAR_6, uint32_t VAR_7, zend_bool VAR_8, zval *VAR_9)
{
 reflection_object *VAR_10;
 parameter_reference *VAR_11;
 zval *VAR_12;

 FUNC_8(VAR_3, VAR_9);
 VAR_10 = FUNC_6(VAR_9);
 VAR_11 = (parameter_reference*) FUNC_7(sizeof(parameter_reference));
 VAR_11->arg_info = VAR_6;
 VAR_11->offset = VAR_7;
 VAR_11->required = VAR_8;
 VAR_11->fptr = VAR_4;
 VAR_10->ptr = VAR_11;
 VAR_10->ref_type = VAR_0;
 VAR_10->ce = VAR_4->common.scope;
 if (VAR_5) {
  FUNC_4(VAR_5);
  FUNC_1(&VAR_10->obj, FUNC_5(VAR_5));
 }

 VAR_12 = FUNC_9(VAR_9);
 if (VAR_6->name) {
  if (VAR_4->type == VAR_2 &&
      !(VAR_4->common.fn_flags & VAR_1)) {
   FUNC_2(VAR_12, ((zend_internal_arg_info*)VAR_6)->name);
  } else {
   FUNC_3(VAR_12, VAR_6->name);
  }
 } else {
  FUNC_0(VAR_12);
 }
}
