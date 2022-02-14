
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int zval ;
struct TYPE_14__ {int fn_flags; TYPE_8__* scope; int function_name; int handler; int type; } ;
typedef TYPE_2__ zend_internal_function ;
struct TYPE_13__ {int fn_flags; TYPE_8__* scope; int function_name; } ;
struct TYPE_15__ {TYPE_1__ common; } ;
typedef TYPE_3__ zend_function ;
struct TYPE_16__ {int called_scope; TYPE_10__* object; TYPE_3__* function_handler; } ;
typedef TYPE_4__ zend_fcall_info_cache ;
struct TYPE_17__ {int __call; int __callstatic; } ;
struct TYPE_12__ {scalar_t__ ce; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_10__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,TYPE_10__*) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,TYPE_3__*,TYPE_8__*,int ,int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,int *,int ,int *,TYPE_4__*,char**) ;
 scalar_t__ FUNC_6 (int ,char*) ;

__attribute__((used)) static int FUNC_7(zval *VAR_7, zval *VAR_8, char **VAR_9) {
 zend_fcall_info_cache VAR_10;
 zend_function *VAR_11;
 zval VAR_12;
 zend_internal_function VAR_13;

 if (!FUNC_5(VAR_8, ((void*)0), 0, ((void*)0), &VAR_10, VAR_9)) {
  return VAR_0;
 }

 VAR_11 = VAR_10.function_handler;
 if (VAR_11->common.fn_flags & VAR_2) {

  if (VAR_10.object && VAR_10.object->ce == VAR_5
    && FUNC_6(VAR_11->common.function_name, "__invoke")) {
   FUNC_1(VAR_7, VAR_10.object);
   FUNC_0(VAR_10.object);
   FUNC_4(VAR_11);
   return VAR_1;
  }

  if (!VAR_11->common.scope) {
   return VAR_0;
  }
  if (VAR_11->common.fn_flags & VAR_3) {
   if (!VAR_11->common.scope->__callstatic) {
    return VAR_0;
   }
  } else {
   if (!VAR_11->common.scope->__call) {
    return VAR_0;
   }
  }

  FUNC_2(&VAR_13, 0, sizeof(zend_internal_function));
  VAR_13.type = VAR_4;
  VAR_13.fn_flags = VAR_11->common.fn_flags & VAR_3;
  VAR_13.handler = VAR_6;
  VAR_13.function_name = VAR_11->common.function_name;
  VAR_13.scope = VAR_11->common.scope;

  FUNC_4(VAR_11);
  VAR_11 = (zend_function *) &VAR_13;
 }

 if (VAR_10.object) {
  FUNC_1(&VAR_12, VAR_10.object);
  FUNC_3(VAR_7, VAR_11, VAR_11->common.scope, VAR_10.called_scope, &VAR_12);
 } else {
  FUNC_3(VAR_7, VAR_11, VAR_11->common.scope, VAR_10.called_scope, ((void*)0));
 }

 return VAR_1;
}
