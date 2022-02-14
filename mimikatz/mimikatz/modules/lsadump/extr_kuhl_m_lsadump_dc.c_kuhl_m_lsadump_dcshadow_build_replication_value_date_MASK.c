
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_6__ {int valLen; int * pVal; } ;
struct TYPE_5__ {scalar_t__ dwHighDateTime; scalar_t__ dwLowDateTime; } ;
typedef int PWSTR ;
typedef int * PBYTE ;
typedef int LONGLONG ;
typedef TYPE_1__ FILETIME ;
typedef int DSTIME ;
typedef int BOOL ;
typedef TYPE_2__ ATTRVAL ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int*,int) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*) ;

BOOL FUNC_4(ATTRVAL* VAR_0, PWSTR VAR_1)
{
 ULONG VAR_2 = 0;
 FILETIME VAR_3;
 DSTIME VAR_4;

 if(FUNC_3(VAR_1, &VAR_3))
 {
  VAR_0->valLen = sizeof(DSTIME);
  VAR_0->pVal = (PBYTE) FUNC_0(VAR_0->valLen);
  VAR_4 = ((LONGLONG)(VAR_3.dwLowDateTime + ((LONGLONG)VAR_3.dwHighDateTime << 32))) / 10000000;
  if(VAR_0->pVal)
   FUNC_2(VAR_0->pVal, &VAR_4, sizeof(DSTIME));
 }
 else FUNC_1(L"kull_m_string_stringToFileTime");
 return VAR_0->pVal != ((void*)0);
}
