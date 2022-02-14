
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef size_t ULONG ;
typedef int UCHAR ;
typedef size_t SIZE_T ;
typedef char* PCSTR ;
typedef char CHAR ;


 int FUNC_0 (size_t,size_t,char*,int ) ;
 size_t FUNC_1 (char*) ;

VOID FUNC_2(ULONG VAR_0, ULONG VAR_1, ULONG VAR_2, ULONG VAR_3, PCSTR VAR_4, UCHAR VAR_5)
{
    SIZE_T VAR_6;
    ULONG VAR_7;
    ULONG VAR_8;
    ULONG VAR_9;
    SIZE_T VAR_10;
    SIZE_T VAR_11;
    ULONG VAR_12;
    ULONG VAR_13;
    ULONG VAR_14;
    ULONG VAR_15;
    CHAR VAR_16[2];

    VAR_6 = FUNC_1(VAR_4);


    VAR_9 = 0;
    VAR_7 = 0;
    VAR_11 = 0;
    for (VAR_10=0; VAR_10<VAR_6; VAR_10++)
    {
        if (VAR_4[VAR_10] == '\n')
        {
            VAR_11 = VAR_10;
            VAR_9++;
        }
        else
        {
            if ((VAR_10 - VAR_11) > VAR_7)
            {
                VAR_7 = (ULONG)(VAR_10 - VAR_11);
            }
        }
    }

    VAR_8 = VAR_9 + 1;

    VAR_12 = (((VAR_2 - VAR_0) - VAR_7) / 2) + VAR_0;
    VAR_13 = (((VAR_3 - VAR_1) - VAR_8) / 2) + VAR_1;

    VAR_11 = 0;
    for (VAR_10=0; VAR_10<VAR_6; VAR_10++)
    {
        if (VAR_4[VAR_10] == '\n')
        {
            VAR_13++;
            VAR_11 = 0;
        }
        else
        {
            VAR_14 = (ULONG)(VAR_12 + VAR_11);
            VAR_15 = VAR_13;
            VAR_11++;
            VAR_16[0] = VAR_4[VAR_10];
            VAR_16[1] = 0;
            FUNC_0(VAR_14, VAR_15, VAR_16, VAR_5);
        }
    }
}
