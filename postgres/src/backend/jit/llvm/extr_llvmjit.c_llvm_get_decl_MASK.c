
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LLVMValueRef ;
typedef int LLVMModuleRef ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;

LLVMValueRef
FUNC_6(LLVMModuleRef VAR_0, LLVMValueRef VAR_1)
{
 LLVMValueRef VAR_2;


 VAR_2 = FUNC_2(VAR_0, FUNC_3(VAR_1));
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_0,
         FUNC_3(VAR_1),
         FUNC_1(FUNC_4(VAR_1)));
 FUNC_5(VAR_1, VAR_2);

 return VAR_2;
}
