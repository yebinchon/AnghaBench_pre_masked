
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LLVMValueRef ;
typedef int LLVMAttributeRef ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int * FUNC_3 (int) ;

void
FUNC_4(LLVMValueRef VAR_1, LLVMValueRef VAR_2)
{
 int VAR_3;
 int VAR_4;
 LLVMAttributeRef *VAR_5;

 VAR_3 =
  FUNC_1(VAR_1, VAR_0);

 VAR_5 = FUNC_3(sizeof(LLVMAttributeRef) * VAR_3);
 FUNC_2(VAR_1, VAR_0, VAR_5);

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
 {
  FUNC_0(VAR_2, VAR_0,
        VAR_5[VAR_4]);
 }
}
