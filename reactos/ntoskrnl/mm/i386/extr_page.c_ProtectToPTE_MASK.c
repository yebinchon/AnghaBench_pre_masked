
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
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

__attribute__((used)) static ULONG
FUNC_2(ULONG VAR_14)
{
    ULONG VAR_15 = 0;

    if (VAR_14 & (VAR_5|VAR_1))
    {
        VAR_15 = 0;
    }
    else if (VAR_14 & VAR_4)
    {
        VAR_15 = VAR_10 | VAR_11;
    }
    else if (VAR_14 & (VAR_3 | VAR_2))
    {
        VAR_15 = VAR_10;
    }
    else
    {
        FUNC_0("Unknown main protection type.\n");
        FUNC_1(VAR_0);
    }

    if (VAR_14 & VAR_7)
    {
    }
    else
    {
        VAR_15 = VAR_15 | VAR_12;
    }
    if (VAR_14 & VAR_6)
    {
        VAR_15 = VAR_15 | VAR_9;
    }
    if (VAR_14 & VAR_8)
    {
        VAR_15 = VAR_15 | VAR_13;
    }
    return(VAR_15);
}
