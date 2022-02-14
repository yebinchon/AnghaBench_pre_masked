
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int __int64 ;
struct TYPE_3__ {int valLen; int * pVal; } ;
typedef int PWSTR ;
typedef int * PBYTE ;
typedef int BOOL ;
typedef TYPE_1__ ATTRVAL ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int) ;

BOOL FUNC_2(ATTRVAL* VAR_0, PWSTR VAR_1)
{

 VAR_0->valLen = sizeof(__int64);
 VAR_0->pVal = (PBYTE) FUNC_0(VAR_0->valLen);
 if(VAR_0->pVal)
  *(__int64*) VAR_0->pVal = FUNC_1(VAR_1, ((void*)0), 10);
 return VAR_0->pVal != ((void*)0);
}
