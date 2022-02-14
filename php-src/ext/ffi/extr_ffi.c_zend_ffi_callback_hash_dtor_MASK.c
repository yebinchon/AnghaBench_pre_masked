
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zval ;
struct TYPE_8__ {TYPE_6__* function_handler; } ;
struct TYPE_9__ {TYPE_2__ fcc; int callback; } ;
typedef TYPE_3__ zend_ffi_callback_data ;
struct TYPE_7__ {int fn_flags; } ;
struct TYPE_10__ {TYPE_1__ common; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_6__*) ;
 TYPE_3__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(zval *VAR_1)
{
 zend_ffi_callback_data *VAR_2 = FUNC_2(VAR_1);

 FUNC_4(VAR_2->callback);
 if (VAR_2->fcc.function_handler->common.fn_flags & VAR_0) {
  FUNC_0(FUNC_1(VAR_2->fcc.function_handler));
 }
 FUNC_3(VAR_2);
}
