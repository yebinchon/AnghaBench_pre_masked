
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* flinfo; } ;
struct TYPE_4__ {char* fn_oid; int fn_addr; } ;
typedef scalar_t__ LLVMValueRef ;
typedef int LLVMModuleRef ;
typedef int LLVMJitContext ;
typedef int LLVMBuilderRef ;
typedef TYPE_2__* FunctionCallInfo ;


 scalar_t__ FUNC_0 (int ,char*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,char*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_8 (char*,char**,char**) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 char* FUNC_10 (char*,char*,...) ;

LLVMValueRef
FUNC_11(LLVMJitContext *VAR_1,
      LLVMBuilderRef VAR_2,
      LLVMModuleRef VAR_3,
      FunctionCallInfo VAR_4)
{
 char *VAR_5;
 char *VAR_6;
 char *VAR_7;

 LLVMValueRef VAR_8;

 FUNC_8(VAR_4->flinfo->fn_oid, &VAR_5, &VAR_6);

 if (VAR_5 != ((void*)0) && VAR_6 != ((void*)0))
 {

  VAR_7 = FUNC_10("pgextern.%s.%s", VAR_5, VAR_6);
 }
 else if (VAR_6 != ((void*)0))
 {

  VAR_7 = FUNC_10("%s", VAR_6);
 }
 else
 {





  LLVMValueRef VAR_9;

  VAR_7 = FUNC_10("pgoidextern.%u",
       VAR_4->flinfo->fn_oid);
  VAR_8 = FUNC_5(VAR_3, VAR_7);
  if (VAR_8 != 0)
   return FUNC_2(VAR_2, VAR_8, "");

  VAR_9 = FUNC_9(VAR_4->flinfo->fn_addr, VAR_0);

  VAR_8 = FUNC_1(VAR_3, VAR_0, VAR_7);
  FUNC_7(VAR_8, VAR_9);
  FUNC_6(VAR_8, 1);

  return FUNC_2(VAR_2, VAR_8, "");
 }


 VAR_8 = FUNC_4(VAR_3, VAR_7);
 if (VAR_8 != 0)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_3, VAR_7, FUNC_3(VAR_0));

 return VAR_8;
}
