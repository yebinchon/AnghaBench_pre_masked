
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef scalar_t__ BOOL ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static int FUNC_1(char *VAR_39, DWORD VAR_40, BOOL VAR_41, BOOL VAR_42)
{
    char *VAR_43 = VAR_39;
    DWORD VAR_44 = ((VAR_40 & VAR_11) >> VAR_13)
                   | ((VAR_40 & VAR_10) >> VAR_12);
    DWORD VAR_45 = VAR_40 & VAR_9;

    if (VAR_44 == VAR_4)
        VAR_43 += FUNC_0(VAR_43, "v%d", VAR_45);
    else if (VAR_44 == VAR_3)
        VAR_43 += FUNC_0(VAR_43, "c%d", VAR_45);
    else if (VAR_44 == VAR_7)
        VAR_43 += FUNC_0(VAR_43, "r%d", VAR_45);
    else if (VAR_44 == VAR_0)
        VAR_43 += FUNC_0(VAR_43, "%s%d", VAR_42 ? "t" : "a", VAR_45);
    else if (VAR_44 == VAR_6)
        VAR_43 += FUNC_0(VAR_43, "s%d", VAR_45);
    else if (VAR_44 == VAR_5)
        VAR_43 += FUNC_0(VAR_43, "oPos");
    else if (VAR_44 == VAR_2)
        VAR_43 += FUNC_0(VAR_43, "oC%d", VAR_45);
    else if (VAR_44 == VAR_8)
        VAR_43 += FUNC_0(VAR_43, "oT%d", VAR_45);
    else if (VAR_44 == VAR_1)
        VAR_43 += FUNC_0(VAR_43, "oD%d", VAR_45);
    else
        VAR_43 += FUNC_0(VAR_43, "? (%d)", VAR_44);

    if (VAR_41)
    {
        if ((VAR_40 & VAR_19) != VAR_19)
        {
            VAR_43 += FUNC_0(VAR_43, ".%s%s%s%s", VAR_40 & VAR_15 ? "x" : "",
                                             VAR_40 & VAR_16 ? "y" : "",
                                             VAR_40 & VAR_17 ? "z" : "",
                                             VAR_40 & VAR_18 ? "w" : "");
        }
    }
    else
    {
        if ((VAR_40 & VAR_21) != VAR_20)
        {
            if ( ((VAR_40 & VAR_14) == (VAR_28 | VAR_32 | VAR_36 | VAR_24)) ||
                 ((VAR_40 & VAR_14) == (VAR_29 | VAR_33 | VAR_37 | VAR_25)) ||
                 ((VAR_40 & VAR_14) == (VAR_30 | VAR_34 | VAR_38 | VAR_26)) ||
                 ((VAR_40 & VAR_14) == (VAR_27 | VAR_31 | VAR_35 | VAR_23)) )
                VAR_43 += FUNC_0(VAR_43, ".%c", 'w' + (((VAR_40 >> VAR_22) + 1) & 0x3));
            else
                VAR_43 += FUNC_0(VAR_43, ".%c%c%c%c", 'w' + (((VAR_40 >> (VAR_22+0)) + 1) & 0x3),
                                                 'w' + (((VAR_40 >> (VAR_22+2)) + 1) & 0x3),
                                                 'w' + (((VAR_40 >> (VAR_22+4)) + 1) & 0x3),
                                                 'w' + (((VAR_40 >> (VAR_22+6)) + 1) & 0x3));
        }
    }

    return VAR_43 - VAR_39;
}
