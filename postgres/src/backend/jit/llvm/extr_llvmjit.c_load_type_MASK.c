
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LLVMValueRef ;
typedef int * LLVMTypeRef ;
typedef int LLVMModuleRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int ,char const*) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,char const*) ;

__attribute__((used)) static LLVMTypeRef
FUNC_5(LLVMModuleRef VAR_1, const char *VAR_2)
{
 LLVMValueRef VAR_3;
 LLVMTypeRef VAR_4;


 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (!VAR_3)
  FUNC_4(VAR_0, "type %s is unknown", VAR_2);


 VAR_4 = FUNC_3(VAR_3);
 FUNC_0(VAR_4 != ((void*)0));
 VAR_4 = FUNC_1(VAR_4);
 FUNC_0(VAR_4 != ((void*)0));
 return VAR_4;
}
