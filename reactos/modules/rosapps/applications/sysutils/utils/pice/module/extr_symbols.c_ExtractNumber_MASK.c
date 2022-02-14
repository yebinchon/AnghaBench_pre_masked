
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef char* LPSTR ;
typedef int LONG ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char) ;

LONG FUNC_3(LPSTR VAR_0)
{
    LONG VAR_1 = 1,VAR_2;
    ULONG VAR_3 = 0;

    FUNC_0((0,"ExtractNumber(): %s\n",VAR_0));

    if(!FUNC_1((ULONG)VAR_0) )
    {
        FUNC_0((1,"ExtractNumber(): [1] invalid page %x hit!\n",VAR_0));
        return 0;
    }

    if(*VAR_0 == '-')
    {
        VAR_1 = -1;
        VAR_0++;
    }

    if(!FUNC_1((ULONG)VAR_0) )
    {
        FUNC_0((1,"ExtractNumber(): [2] invalid page %x hit!\n",VAR_0));
        return 0;
    }

    if(*VAR_0 != '0')
        VAR_2 = 10;
    else
        VAR_2 = 8;

    if(!FUNC_1((ULONG)VAR_0) )
    {
        FUNC_0((1,"ExtractNumber(): [3] invalid page %x hit!\n",VAR_0));
        return 0;
    }

    while(FUNC_2(*VAR_0))
    {
        VAR_3 *= VAR_2;
        VAR_3 += *VAR_0-'0';
        VAR_0++;
        if(!FUNC_1((ULONG)VAR_0) )
        {
            FUNC_0((1,"ExtractNumber(): [4] invalid page %x hit!\n",VAR_0));
            return 0;
        }
    }

    return (VAR_3*VAR_1);
}
