
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int zval ;
struct TYPE_14__ {int function_name; } ;
struct TYPE_15__ {TYPE_3__ common; } ;
typedef TYPE_4__ zend_function ;
struct TYPE_16__ {int * object; int * called_scope; TYPE_4__* function_handler; } ;
typedef TYPE_5__ zend_fcall_info_cache ;
struct TYPE_17__ {int size; int param_count; int no_separation; int function_name; int * params; int * retval; int * object; } ;
typedef TYPE_6__ zend_fcall_info ;
struct TYPE_12__ {int zresource; } ;
struct TYPE_13__ {TYPE_1__ file; } ;
struct TYPE_18__ {TYPE_2__ u; } ;
typedef TYPE_7__ spl_filesystem_object ;
typedef int fci ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int,int,int ) ;
 int FUNC_7 (TYPE_6__*,TYPE_5__*) ;
 scalar_t__ FUNC_8 (int,int *) ;

__attribute__((used)) static int FUNC_9(spl_filesystem_object *VAR_3, zend_function *VAR_4, int VAR_5, zval *VAR_6, zval *VAR_7)
{
 zend_fcall_info VAR_8;
 zend_fcall_info_cache VAR_9;
 zval *VAR_10 = &VAR_3->u.file.zresource, VAR_11;
 int VAR_12;
 int VAR_13 = VAR_5 + (VAR_7 ? 2 : 1);

 zval *VAR_14 = (zval*)FUNC_6(VAR_13, sizeof(zval), 0);

 VAR_14[0] = *VAR_10;

 if (VAR_7) {
  VAR_14[1] = *VAR_7;
 }

 if (FUNC_8(VAR_5, VAR_14 + (VAR_7 ? 2 : 1)) != VAR_2) {
  FUNC_5(VAR_14);
  FUNC_0(VAR_0);
 }

 FUNC_2(&VAR_11);

 VAR_8.size = sizeof(VAR_8);
 VAR_8.object = ((void*)0);
 VAR_8.retval = &VAR_11;
 VAR_8.param_count = VAR_13;
 VAR_8.params = VAR_14;
 VAR_8.no_separation = 1;
 FUNC_1(&VAR_8.function_name, VAR_4->common.function_name);

 VAR_9.function_handler = VAR_4;
 VAR_9.called_scope = ((void*)0);
 VAR_9.object = ((void*)0);

 VAR_12 = FUNC_7(&VAR_8, &VAR_9);

 if (VAR_12 == VAR_0 || FUNC_4(VAR_11)) {
  VAR_1;
 } else {
  FUNC_3(VAR_6, &VAR_11, 0, 0);
 }

 FUNC_5(VAR_14);
 return VAR_12;
}
