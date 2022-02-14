
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pVal; int valLen; } ;
typedef scalar_t__ PWSTR ;
typedef int PSID ;
typedef int PCWSTR ;
typedef int * PBYTE ;
typedef int BOOL ;
typedef TYPE_1__ ATTRVAL ;


 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int ,int ) ;

BOOL FUNC_6(ATTRVAL* VAR_0, PWSTR VAR_1)
{
 PSID VAR_2;
 VAR_0->pVal = ((void*)0);
 if(FUNC_0((PCWSTR) VAR_1, &VAR_2))
 {
  VAR_0->valLen = FUNC_1(VAR_2);
  if((VAR_0->pVal = (PBYTE) FUNC_3(VAR_0->valLen)))
   FUNC_5(VAR_0->pVal, VAR_2, VAR_0->valLen);
  else FUNC_4(L"LocalAlloc");
  FUNC_2(VAR_2);
 }
 else FUNC_4(L"ConvertStringSidToSid");
 return VAR_0->pVal != ((void*)0);
}
