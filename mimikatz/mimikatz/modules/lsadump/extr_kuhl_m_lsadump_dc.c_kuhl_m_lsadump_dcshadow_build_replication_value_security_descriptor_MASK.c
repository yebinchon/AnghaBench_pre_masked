
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {int * pVal; int valLen; } ;
typedef int PWSTR ;
typedef int * PSECURITY_DESCRIPTOR ;
typedef int * PBYTE ;
typedef int BOOL ;
typedef TYPE_1__ ATTRVAL ;


 scalar_t__ FUNC_0 (int ,int ,int **,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int *,int ) ;
 int VAR_0 ;

BOOL FUNC_5(ATTRVAL* VAR_1, PWSTR VAR_2)
{
 ULONG VAR_3 = 0;
 PSECURITY_DESCRIPTOR VAR_4 = ((void*)0);

 if(FUNC_0(VAR_2, VAR_0, &VAR_4, &VAR_3))
 {
  VAR_1->valLen = VAR_3;
  VAR_1->pVal = (PBYTE) FUNC_2(VAR_1->valLen);
  if(VAR_1->pVal)
   FUNC_4(VAR_1->pVal, VAR_4, VAR_1->valLen);
  FUNC_1(VAR_4);
 }
 else FUNC_3(L"ConvertStringSecurityDescriptorToSecurityDescriptor");
 return VAR_1->pVal != ((void*)0);
}
