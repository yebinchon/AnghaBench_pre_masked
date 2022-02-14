
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef scalar_t__ PCHAR ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,char,int) ;

PCHAR
FUNC_2(PCHAR VAR_2, ULONG VAR_3, PCHAR VAR_4)
{
    PCHAR VAR_5;

    ULONG VAR_6 = VAR_1 * VAR_0;
    PCHAR VAR_7 = VAR_4 - VAR_6;
    PCHAR VAR_8 = VAR_7, VAR_9;
    ULONG VAR_10;

    if (VAR_4 < VAR_2)
        VAR_4 = VAR_2;
    FUNC_0(VAR_4 <= VAR_2 + VAR_3);

    VAR_5 = FUNC_1(VAR_7, '\n', VAR_6);
    if (((void*)0) == VAR_5)
        VAR_5 = VAR_7;
    for (VAR_10 = VAR_1; VAR_10--; )
    {
        int VAR_11;
        VAR_9 = FUNC_1(VAR_7, '\n', VAR_5-VAR_7);
        VAR_8 = VAR_5;
        VAR_5 = VAR_9;
        if (((void*)0) == VAR_5)
        {
            VAR_5 = VAR_8;
            if (((void*)0) == VAR_5)
                VAR_5 = VAR_7;
            break;
        }
        VAR_11 = (VAR_0+VAR_8-VAR_5-2) / VAR_0;
        if (VAR_11 > 1)
            VAR_10 -= VAR_11-1;
    }

    FUNC_0(VAR_5 != 0);
    ++VAR_5;
    return VAR_5;
}
