
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int compiled; scalar_t__ module; scalar_t__ module_generation; } ;
typedef scalar_t__ LLVMModuleRef ;
typedef TYPE_1__ LLVMJitContext ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

LLVMModuleRef
FUNC_4(LLVMJitContext *VAR_3)
{
 FUNC_3();




 if (!VAR_3->module)
 {
  VAR_3->compiled = 0;
  VAR_3->module_generation = VAR_0++;
  VAR_3->module = FUNC_0("pg");
  FUNC_2(VAR_3->module, VAR_2);
  FUNC_1(VAR_3->module, VAR_1);
 }

 return VAR_3->module;
}
