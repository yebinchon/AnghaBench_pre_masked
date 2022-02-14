
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int zval ;
struct TYPE_12__ {void* object; int called_scope; TYPE_2__* function_handler; } ;
typedef TYPE_3__ zend_fcall_info_cache ;
struct TYPE_13__ {int size; int no_separation; int * params; scalar_t__ param_count; int * retval; void* object; int function_name; } ;
typedef TYPE_4__ zend_fcall_info ;
struct php_user_stream_wrapper {TYPE_9__* ce; } ;
struct TYPE_14__ {int res; } ;
typedef TYPE_5__ php_stream_context ;
typedef int fci ;
struct TYPE_15__ {int ce_flags; TYPE_2__* constructor; int name; } ;
struct TYPE_10__ {int function_name; } ;
struct TYPE_11__ {TYPE_1__ common; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,int ) ;
 scalar_t__ FUNC_7 (int *,TYPE_9__*) ;
 int FUNC_8 (int *,int ,char*,int ,int ) ;
 scalar_t__ FUNC_9 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct php_user_stream_wrapper *VAR_6, php_stream_context *VAR_7, zval *VAR_8)
{
 if (VAR_6->ce->ce_flags & (VAR_4|VAR_5|VAR_3|VAR_2)) {
  FUNC_2(VAR_8);
  return;
 }


 if (FUNC_7(VAR_8, VAR_6->ce) == VAR_1) {
  FUNC_2(VAR_8);
  return;
 }

 if (VAR_7) {
  FUNC_6(VAR_8, "context", VAR_7->res);
  FUNC_0(VAR_7->res);
 } else {
  FUNC_5(VAR_8, "context");
 }

 if (VAR_6->ce->constructor) {
  zend_fcall_info VAR_9;
  zend_fcall_info_cache VAR_10;
  zval VAR_11;

  VAR_9.size = sizeof(VAR_9);
  FUNC_2(&VAR_9.function_name);
  VAR_9.object = FUNC_4(VAR_8);
  VAR_9.retval = &VAR_11;
  VAR_9.param_count = 0;
  VAR_9.params = ((void*)0);
  VAR_9.no_separation = 1;

  VAR_10.function_handler = VAR_6->ce->constructor;
  VAR_10.called_scope = FUNC_3(VAR_8);
  VAR_10.object = FUNC_4(VAR_8);

  if (FUNC_9(&VAR_9, &VAR_10) == VAR_1) {
   FUNC_8(((void*)0), VAR_0, "Could not execute %s::%s()", FUNC_1(VAR_6->ce->name), FUNC_1(VAR_6->ce->constructor->common.function_name));
   FUNC_10(VAR_8);
   FUNC_2(VAR_8);
  } else {
   FUNC_10(&VAR_11);
  }
 }
}
