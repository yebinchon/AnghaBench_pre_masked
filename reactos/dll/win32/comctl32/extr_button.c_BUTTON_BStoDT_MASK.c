
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int DWORD ;




 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static UINT FUNC_1( DWORD VAR_14, DWORD VAR_15 )
{
    UINT VAR_16 = VAR_8;


    if (VAR_14 & VAR_3)
        VAR_14 &= ~VAR_4;

    if (!(VAR_14 & VAR_2))
        VAR_16 |= VAR_10;
    else
        VAR_16 |= VAR_12;

    switch (VAR_14 & 132)
    {
        case 131: break;
        case 130: VAR_16 |= VAR_9; break;
        case 132: VAR_16 |= VAR_6; break;
        default:

            if (FUNC_0(VAR_14) <= VAR_0) VAR_16 |= VAR_6;

    }

    if (VAR_15 & VAR_13) VAR_16 = VAR_9 | (VAR_16 & ~(VAR_7 | VAR_6));




    if (FUNC_0(VAR_14) != VAR_1)
    {
        switch (VAR_14 & 128)
        {
            case 129: break;
            case 133: VAR_16 |= VAR_5; break;
            case 128:
            default: VAR_16 |= VAR_11; break;
        }
    }
    else

        VAR_16 |= VAR_10;

    return VAR_16;
}
