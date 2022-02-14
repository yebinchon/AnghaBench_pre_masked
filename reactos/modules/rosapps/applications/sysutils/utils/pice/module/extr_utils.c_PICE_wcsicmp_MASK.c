
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef int ULONG ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

ULONG FUNC_2(WCHAR* VAR_0, WCHAR* VAR_1)
{
    ULONG VAR_2=1;

    while(FUNC_0((ULONG)VAR_0) && *VAR_0 &&
          FUNC_0((ULONG)VAR_1) && *VAR_1 &&
          FUNC_1(*VAR_0)==FUNC_1(*VAR_1) )
    {
        VAR_0++;
        VAR_1++;
    }

    if(*VAR_0==0 && *VAR_1==0)
        VAR_2=0;

    return VAR_2;
}
