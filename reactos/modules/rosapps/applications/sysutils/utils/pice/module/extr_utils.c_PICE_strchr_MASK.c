
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

char* FUNC_2(char* VAR_0,char VAR_1)
{
    while(FUNC_1((ULONG)VAR_0) && *VAR_0)
    {
        if(*VAR_0 == VAR_1)
            return VAR_0;
        VAR_0++;
    }
    return ((void*)0);
}
