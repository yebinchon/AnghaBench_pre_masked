
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ php_binary; scalar_t__ disable_classes; scalar_t__ disable_functions; scalar_t__ last_error_file; scalar_t__ last_error_message; } ;
typedef TYPE_1__ php_core_globals ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(php_core_globals *VAR_0)
{
 if (VAR_0->last_error_message) {
  FUNC_0(VAR_0->last_error_message);
 }
 if (VAR_0->last_error_file) {
  FUNC_0(VAR_0->last_error_file);
 }
 if (VAR_0->disable_functions) {
  FUNC_0(VAR_0->disable_functions);
 }
 if (VAR_0->disable_classes) {
  FUNC_0(VAR_0->disable_classes);
 }
 if (VAR_0->php_binary) {
  FUNC_0(VAR_0->php_binary);
 }

 FUNC_1();
}
