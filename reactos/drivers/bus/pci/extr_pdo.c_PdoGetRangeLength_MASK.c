
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONGLONG ;
typedef int ULONG ;
typedef int UCHAR ;
typedef int* PULONGLONG ;
typedef int* PULONG ;
typedef int* PUCHAR ;
typedef int PPDO_DEVICE_EXTENSION ;
typedef int BOOLEAN ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int,int*,int*) ;
 int VAR_8 ;

__attribute__((used)) static BOOLEAN
FUNC_2(PPDO_DEVICE_EXTENSION VAR_9,
                  UCHAR VAR_10,
                  PULONGLONG VAR_11,
                  PULONGLONG VAR_12,
                  PULONG VAR_13,
                  PUCHAR VAR_14,
                  PULONGLONG VAR_15)
{
    union {
        struct {
            ULONG Bar0;
            ULONG Bar1;
        } Bars;
        ULONGLONG Bar;
    } VAR_16;
    union {
        struct {
            ULONG Bar0;
            ULONG Bar1;
        } Bars;
        ULONGLONG Bar;
    } VAR_17;
    ULONG VAR_18;


    VAR_18 = 0x10 + VAR_10 * 4;


    *VAR_14 = VAR_10 + 1;


    VAR_16.Bar = 0ULL;
    VAR_17.Bar = 0ULL;


    if (!FUNC_1(VAR_9, VAR_18,
                       &VAR_16.Bars.Bar0,
                       &VAR_17.Bars.Bar0))
    {
        return VAR_0;
    }


    if (!(VAR_16.Bars.Bar0 & VAR_2))
    {

        if (VAR_15 != ((void*)0))
        {
            if ((VAR_16.Bars.Bar0 & VAR_4) == VAR_6)
            {
                *VAR_15 = 0x00000000FFFFFFFFULL;
            }
            else if ((VAR_16.Bars.Bar0 & VAR_4) == VAR_5)
            {
                *VAR_15 = 0x00000000000FFFFFULL;
            }
            else if ((VAR_16.Bars.Bar0 & VAR_4) == VAR_7)
            {
                *VAR_15 = 0xFFFFFFFFFFFFFFFFULL;
            }
        }


        if ((VAR_16.Bars.Bar0 & VAR_4) == VAR_7)
        {

            *VAR_14 = VAR_10 + 2;


            if (!FUNC_1(VAR_9, VAR_18 + 4,
                               &VAR_16.Bars.Bar1,
                               &VAR_17.Bars.Bar1))
            {
                return VAR_0;
            }
        }
    }
    else
    {

        if (VAR_15 != ((void*)0))
        {
            *VAR_15 = 0x00000000FFFFFFFFULL;
        }
    }

    if (VAR_17.Bar == 0)
    {
        FUNC_0("Unused address register\n");
        *VAR_11 = 0;
        *VAR_12 = 0;
        *VAR_13 = 0;
        return VAR_8;
    }

    *VAR_11 = ((VAR_16.Bar & VAR_2)
             ? (VAR_16.Bar & VAR_1)
             : (VAR_16.Bar & VAR_3));

    *VAR_12 = ~((VAR_17.Bar & VAR_2)
                ? (VAR_17.Bar & VAR_1)
                : (VAR_17.Bar & VAR_3)) + 1;

    *VAR_13 = (VAR_17.Bar & VAR_2)
             ? (VAR_17.Bar & ~VAR_1)
             : (VAR_17.Bar & ~VAR_3);

    return VAR_8;
}
