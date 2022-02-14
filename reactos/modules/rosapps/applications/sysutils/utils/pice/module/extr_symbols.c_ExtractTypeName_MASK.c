
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ULONG ;
typedef char* LPSTR ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (size_t) ;

LPSTR FUNC_2(LPSTR VAR_0)
{
    static char VAR_1[1024];
    ULONG VAR_2;

    FUNC_0((1,"ExtractTypeName(%s)\n",VAR_0));

    for(VAR_2=0;FUNC_1((ULONG)VAR_0) && *VAR_0!=0 && *VAR_0!=':';VAR_2++,VAR_0++)
        VAR_1[VAR_2] = *VAR_0;

    if(!FUNC_1((ULONG)VAR_0) )
    {
        FUNC_0((1,"hit invalid page %x!\n",(ULONG)VAR_0));
    }

    VAR_1[VAR_2]=0;

    return VAR_1;
}
