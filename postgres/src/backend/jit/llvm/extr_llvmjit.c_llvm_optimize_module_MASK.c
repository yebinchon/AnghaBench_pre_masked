
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {int module; TYPE_1__ base; } ;
typedef int * LLVMValueRef ;
typedef int LLVMPassManagerRef ;
typedef int LLVMPassManagerBuilderRef ;
typedef int LLVMModuleRef ;
typedef TYPE_2__ LLVMJitContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int ) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_18(LLVMJitContext *VAR_2, LLVMModuleRef VAR_3)
{
 LLVMPassManagerBuilderRef VAR_4;
 LLVMPassManagerRef VAR_5;
 LLVMPassManagerRef VAR_6;
 LLVMValueRef VAR_7;
 int VAR_8;

 if (VAR_2->base.flags & VAR_1)
  VAR_8 = 3;
 else
  VAR_8 = 0;






 VAR_4 = FUNC_10();
 FUNC_14(VAR_4, VAR_8);
 VAR_6 = FUNC_3(VAR_3);

 if (VAR_2->base.flags & VAR_1)
 {

  FUNC_15(VAR_4, 512);
 }
 else
 {

  FUNC_2(VAR_6);
 }

 FUNC_12(VAR_4, VAR_6);





 FUNC_9(VAR_6);
 for (VAR_7 = FUNC_7(VAR_2->module);
   VAR_7 != ((void*)0);
   VAR_7 = FUNC_8(VAR_7))
  FUNC_16(VAR_6, VAR_7);
 FUNC_6(VAR_6);
 FUNC_5(VAR_6);





 VAR_5 = FUNC_4();
 FUNC_13(VAR_4,
             VAR_5);

 if (!(VAR_2->base.flags & VAR_1))
  FUNC_0(VAR_5);

 if (VAR_2->base.flags & VAR_0
  && !(VAR_2->base.flags & VAR_1))
  FUNC_1(VAR_5);
 FUNC_17(VAR_5, VAR_2->module);
 FUNC_5(VAR_5);

 FUNC_11(VAR_4);
}
