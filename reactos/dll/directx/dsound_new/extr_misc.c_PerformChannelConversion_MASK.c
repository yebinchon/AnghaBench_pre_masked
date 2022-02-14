
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int ULONG ;
typedef int* PULONG ;
typedef int * PUCHAR ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

VOID
FUNC_2(
    PUCHAR VAR_2,
    ULONG VAR_3,
    PULONG VAR_4,
    ULONG VAR_5,
    ULONG VAR_6,
    ULONG VAR_7,
    PUCHAR VAR_8,
    ULONG VAR_9,
    PULONG VAR_10)
{
    DWORD VAR_11, VAR_12;
    DWORD VAR_13, VAR_14;

    if (VAR_6 > VAR_5)
    {
        VAR_1;
        FUNC_0(0);
    }


    VAR_11 = 0;
    VAR_12 = 0;


    VAR_13 = VAR_6 * (VAR_7/8);
    VAR_14 = VAR_5 * (VAR_7/8);

    do
    {
        if (VAR_11 + VAR_13>= VAR_9)
        {
            VAR_11 = VAR_9;
            break;
        }

        if (VAR_12 + VAR_14 >= VAR_3)
        {
            VAR_12 = VAR_3;
            break;
        }


        FUNC_1(&VAR_8[VAR_11], &VAR_2[VAR_12], VAR_13);


        VAR_12 += VAR_14;


        VAR_11 += VAR_13;

    }while(VAR_0);

    *VAR_4 = VAR_12;
    *VAR_10 = VAR_11;
}
