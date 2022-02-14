
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type_str_len; scalar_t__ type_str; } ;
typedef TYPE_1__ STypeCodeStr ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(STypeCodeStr *VAR_0) {
 if (VAR_0->type_str) {
  FUNC_0 (VAR_0->type_str);
 }
 VAR_0->type_str_len = 0;
}
