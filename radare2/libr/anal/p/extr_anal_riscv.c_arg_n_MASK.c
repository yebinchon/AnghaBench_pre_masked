
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num; char const** arg; } ;
typedef TYPE_1__ riscv_args_t ;


 int FUNC_0 (char const*,char*) ;

__attribute__((used)) static const char* FUNC_1(riscv_args_t* VAR_0, int VAR_1) {
 if (VAR_1 >= VAR_0->num || !FUNC_0 (VAR_0->arg[VAR_1], "zero")) {
  return "0";
 }
 return VAR_0->arg[VAR_1];
}
