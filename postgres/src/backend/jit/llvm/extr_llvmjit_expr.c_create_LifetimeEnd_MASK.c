
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LLVMValueRef ;
typedef int LLVMTypeRef ;
typedef int LLVMModuleRef ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char const*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *,int ,int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,char const*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static LLVMValueRef
FUNC_11(LLVMModuleRef VAR_1)
{
 LLVMTypeRef VAR_2;
 LLVMValueRef VAR_3;
 LLVMTypeRef VAR_4[2];



 const char *VAR_5 = "llvm.lifetime.end";




 VAR_3 = FUNC_4(VAR_1, VAR_5);
 if (VAR_3)
  return VAR_3;

 VAR_4[0] = FUNC_5();
 VAR_4[1] = FUNC_9(FUNC_6());

 VAR_2 = FUNC_2(FUNC_8(),
         VAR_4, FUNC_10(VAR_4),
         0);
 VAR_3 = FUNC_1(VAR_1, VAR_5, VAR_2);

 FUNC_7(VAR_3, VAR_0);

 FUNC_0(FUNC_3(VAR_3));

 return VAR_3;
}
