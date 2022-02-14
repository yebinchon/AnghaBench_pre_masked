
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int valLen; scalar_t__ pVal; } ;
typedef int PWSTR ;
typedef scalar_t__ PBYTE ;
typedef int BOOL ;
typedef TYPE_1__ ATTRVAL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

BOOL FUNC_3(ATTRVAL* VAR_2, PWSTR VAR_3)
{

 VAR_2->valLen = (FUNC_2(VAR_3) + 1) * sizeof(WCHAR);
 VAR_2->pVal = (PBYTE) FUNC_0( VAR_2->valLen);
 if(!VAR_2->pVal)
  return VAR_0;
 FUNC_1(VAR_2->pVal, VAR_3, VAR_2->valLen);
 return VAR_1;
}
