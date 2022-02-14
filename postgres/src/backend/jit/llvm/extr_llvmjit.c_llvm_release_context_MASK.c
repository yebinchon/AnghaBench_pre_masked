
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ handles; int * module; } ;
struct TYPE_4__ {int orc_handle; int stack; } ;
typedef TYPE_1__ LLVMJitHandle ;
typedef TYPE_2__ LLVMJitContext ;
typedef int JitContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_6(JitContext *VAR_2)
{
 LLVMJitContext *VAR_3 = (LLVMJitContext *) VAR_2;

 FUNC_4();






 if (!VAR_1)
 {
  if (VAR_3->module)
  {
   FUNC_0(VAR_3->module);
   VAR_3->module = ((void*)0);
  }

  while (VAR_3->handles != VAR_0)
  {
   LLVMJitHandle *VAR_4;

   VAR_4 = (LLVMJitHandle *) FUNC_2(VAR_3->handles);
   VAR_3->handles = FUNC_3(VAR_3->handles);

   FUNC_1(VAR_4->stack, VAR_4->orc_handle);
   FUNC_5(VAR_4);
  }
 }
}
