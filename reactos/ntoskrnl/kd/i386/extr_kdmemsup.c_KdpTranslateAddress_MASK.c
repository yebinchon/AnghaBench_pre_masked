
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG_PTR ;
typedef int ULONG ;
typedef int* PULONG_PTR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static
BOOLEAN
FUNC_3(ULONG_PTR VAR_9, PULONG_PTR VAR_10)
{
    ULONG_PTR VAR_11 = FUNC_1();
    ULONG_PTR VAR_12 = FUNC_2();
    ULONG_PTR VAR_13 = (VAR_11 & ~(VAR_4-1)) +
        ((VAR_9 >> 22) * sizeof(ULONG));
    ULONG_PTR VAR_14 = FUNC_0(VAR_13, sizeof(ULONG));


    if (!(VAR_14 & VAR_6))
    {
        return VAR_2;
    }


    if ((VAR_14 & VAR_7) && (VAR_12 & VAR_1))
    {
        *VAR_10 = (VAR_14 & ~(VAR_0-1)) +
            (VAR_9 & (VAR_0-1));
        return VAR_8;
    }
    else
    {
        ULONG_PTR VAR_15 =
            (VAR_14 & ~(VAR_4-1)) +
            ((VAR_9 >> VAR_3) & VAR_5) * sizeof(ULONG);
        ULONG_PTR VAR_16 = FUNC_0(VAR_15, sizeof(ULONG));
        if (VAR_16 & VAR_6)
        {
            *VAR_10 = (VAR_16 & ~(VAR_4-1)) +
                (VAR_9 & (VAR_4-1));
            return VAR_8;
        }
    }

    return VAR_2;
}
