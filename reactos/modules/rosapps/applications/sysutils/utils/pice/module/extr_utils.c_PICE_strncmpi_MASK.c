
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char) ;

ULONG FUNC_2(char* VAR_0,char* VAR_1,ULONG VAR_2)
{
ULONG VAR_3=1;

    while(VAR_2 &&
    FUNC_0((ULONG)VAR_0) && *VAR_0 &&
          FUNC_0((ULONG)VAR_1) && *VAR_1 &&
          FUNC_1(*VAR_0)==FUNC_1(*VAR_1) )
    {
        VAR_0++;
        VAR_1++;
  VAR_2--;
    }

    if(VAR_2==0)
        VAR_3=0;

    return VAR_3;
}
