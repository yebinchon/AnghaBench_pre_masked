
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LLVMModuleRef ;
typedef int LLVMMemoryBufferRef ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 scalar_t__ FUNC_0 (char*,int *,char**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int **) ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 int VAR_27 ;
 void* VAR_28 ;
 void* VAR_29 ;
 int FUNC_6 (int ,char*,char*,...) ;
 void* VAR_30 ;
 void* VAR_31 ;
 int FUNC_7 (int *,char*) ;
 void* FUNC_8 (int *,char*) ;
 char* VAR_32 ;
 void* FUNC_9 (int ) ;
 int FUNC_10 (char*,int,char*,char*,char*) ;

__attribute__((used)) static void
FUNC_11(void)
{
 char VAR_33[VAR_11];
 LLVMMemoryBufferRef VAR_34;
 char *VAR_35;
 LLVMModuleRef VAR_36 = ((void*)0);

 FUNC_10(VAR_33, VAR_11, "%s/%s", VAR_32, "llvmjit_types.bc");


 if (FUNC_0(VAR_33, &VAR_34, &VAR_35))
 {
  FUNC_6(VAR_1, "LLVMCreateMemoryBufferWithContentsOfFile(%s) failed: %s",
    VAR_33, VAR_35);
 }


 if (FUNC_5(VAR_34, &VAR_36))
 {
  FUNC_6(VAR_1, "LLVMParseBitcode2 of %s failed", VAR_33);
 }
 FUNC_1(VAR_34);





 VAR_31 = FUNC_9(FUNC_4(VAR_36));
 VAR_30 = FUNC_9(FUNC_2(VAR_36));

 VAR_28 = FUNC_8(VAR_36, "TypeSizeT");
 VAR_27 = FUNC_7(VAR_36, "FunctionReturningBool");
 VAR_29 = FUNC_8(VAR_36, "TypeStorageBool");
 VAR_26 = FUNC_8(VAR_36, "TypePGFunction");
 VAR_23 = FUNC_8(VAR_36, "StructNullableDatum");
 VAR_15 = FUNC_8(VAR_36, "StructExprContext");
 VAR_16 = FUNC_8(VAR_36, "StructExprEvalStep");
 VAR_17 = FUNC_8(VAR_36, "StructExprState");
 VAR_18 = FUNC_8(VAR_36, "StructFunctionCallInfoData");
 VAR_21 = FUNC_8(VAR_36, "StructMemoryContextData");
 VAR_25 = FUNC_8(VAR_36, "StructTupleTableSlot");
 VAR_20 = FUNC_8(VAR_36, "StructHeapTupleTableSlot");
 VAR_22 = FUNC_8(VAR_36, "StructMinimalTupleTableSlot");
 VAR_19 = FUNC_8(VAR_36, "StructHeapTupleData");
 VAR_24 = FUNC_8(VAR_36, "StructTupleDescData");
 VAR_12 = FUNC_8(VAR_36, "StructAggState");
 VAR_13 = FUNC_8(VAR_36, "StructAggStatePerGroupData");
 VAR_14 = FUNC_8(VAR_36, "StructAggStatePerTransData");

 VAR_0 = FUNC_3(VAR_36, "AttributeTemplate");
 VAR_9 = FUNC_3(VAR_36, "strlen");
 VAR_10 = FUNC_3(VAR_36, "varsize_any");
 VAR_8 = FUNC_3(VAR_36, "slot_getsomeattrs_int");
 VAR_7 = FUNC_3(VAR_36, "slot_getmissingattrs");
 VAR_6 = FUNC_3(VAR_36, "MakeExpandedObjectReadOnlyInternal");
 VAR_4 = FUNC_3(VAR_36, "ExecEvalSubscriptingRef");
 VAR_5 = FUNC_3(VAR_36, "ExecEvalSysVar");
 VAR_3 = FUNC_3(VAR_36, "ExecAggTransReparent");
 VAR_2 = FUNC_3(VAR_36, "ExecAggInitGroup");






 return;
}
