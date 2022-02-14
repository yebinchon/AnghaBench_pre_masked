
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int created_functions; } ;
struct TYPE_4__ {TYPE_1__ instr; } ;
struct LLVMJitContext {int counter; int module_generation; TYPE_2__ base; int * module; } ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (char*,char const*,int ,int ) ;

char *
FUNC_2(struct LLVMJitContext *VAR_0, const char *VAR_1)
{
 FUNC_0(VAR_0->module != ((void*)0));

 VAR_0->base.instr.created_functions++;





 return FUNC_1("%s_%zu_%d",
     VAR_1,
     VAR_0->module_generation,
     VAR_0->counter++);
}
