
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int ULONG ;
typedef int * PUCHAR ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

VOID FUNC_1(ULONG VAR_5, ULONG VAR_6, ULONG VAR_7, ULONG VAR_8)
{
    PUCHAR VAR_9 = (PUCHAR)VAR_2;
    ULONG VAR_10;


    if (VAR_8 < (VAR_3 - 1))
    {
        if (VAR_3 < 34)
        {
            VAR_10=VAR_5 + 2;
        }
        else
        {
            VAR_10=VAR_5 + 1;
        }

        for (; VAR_10<=VAR_7; VAR_10++)
        {
            VAR_9[(((VAR_8+1)*2)*VAR_4)+(VAR_10*2)+1] = FUNC_0(VAR_1, VAR_0);
        }
    }


    if (VAR_7 < (VAR_4 - 1))
    {
        for (VAR_10=VAR_6+1; VAR_10<=VAR_8; VAR_10++)
        {
            VAR_9[((VAR_10*2)*VAR_4)+((VAR_7+1)*2)+1] = FUNC_0(VAR_1, VAR_0);
        }
    }
    if (VAR_3 < 34)
    {
        if ((VAR_7 + 1) < (VAR_4 - 1))
        {
            for (VAR_10=VAR_6+1; VAR_10<=VAR_8; VAR_10++)
            {
                VAR_9[((VAR_10*2)*VAR_4)+((VAR_7+2)*2)+1] = FUNC_0(VAR_1, VAR_0);
            }
        }
    }


    if ((VAR_7 < (VAR_4 - 1)) && (VAR_8 < (VAR_3 - 1)))
    {
        VAR_9[(((VAR_8+1)*2)*VAR_4)+((VAR_7+1)*2)+1] = FUNC_0(VAR_1, VAR_0);
    }
    if (VAR_3 < 34)
    {
        if (((VAR_7 + 1) < (VAR_4 - 1)) && (VAR_8 < (VAR_3 - 1)))
        {
            VAR_9[(((VAR_8+1)*2)*VAR_4)+((VAR_7+2)*2)+1] = FUNC_0(VAR_1, VAR_0);
        }
    }
}
