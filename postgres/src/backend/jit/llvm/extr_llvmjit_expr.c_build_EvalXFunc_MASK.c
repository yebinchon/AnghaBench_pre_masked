
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LLVMValueRef ;
typedef scalar_t__ LLVMTypeRef ;
typedef int LLVMModuleRef ;
typedef int LLVMBuilderRef ;
typedef int ExprEvalStep ;


 scalar_t__ FUNC_0 (int ,char const*,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__*,int ,char*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__*,int ,int) ;
 scalar_t__ FUNC_3 (int ,char const*) ;
 int FUNC_4 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_8(LLVMBuilderRef VAR_3, LLVMModuleRef VAR_4, const char *VAR_5,
    LLVMValueRef VAR_6, LLVMValueRef VAR_7,
    ExprEvalStep *VAR_8)
{
 LLVMTypeRef VAR_9;
 LLVMValueRef VAR_10;
 LLVMTypeRef VAR_11[3];
 LLVMValueRef VAR_12[3];

 VAR_10 = FUNC_3(VAR_4, VAR_5);
 if (!VAR_10)
 {
  VAR_11[0] = FUNC_5(VAR_2);
  VAR_11[1] = FUNC_5(VAR_1);
  VAR_11[2] = FUNC_5(VAR_0);

  VAR_9 = FUNC_2(FUNC_4(),
          VAR_11, FUNC_7(VAR_11),
          0);
  VAR_10 = FUNC_0(VAR_4, VAR_5, VAR_9);
 }

 VAR_12[0] = VAR_6;
 VAR_12[1] = FUNC_6(VAR_8, FUNC_5(VAR_1));
 VAR_12[2] = VAR_7;

 FUNC_1(VAR_3,
      VAR_10,
      VAR_12, FUNC_7(VAR_12), "");
}
