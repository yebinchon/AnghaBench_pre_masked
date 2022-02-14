
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


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

__attribute__((used)) static DWORD FUNC_0( DWORD VAR_14 )
{
    DWORD VAR_15 = 0;

    if (VAR_14 & VAR_2)
        VAR_15 |= VAR_10;
    if (VAR_14 & VAR_1)
        VAR_15 |= VAR_7;
    if (VAR_14 & VAR_5)
        VAR_15 |= VAR_13 | VAR_11 | VAR_10 | VAR_7;
    if (VAR_14 & VAR_4)
        VAR_15 |= VAR_12 | VAR_11 | VAR_10 | VAR_7;
    if (VAR_14 & VAR_0)
        VAR_15 |= VAR_6;
    if (VAR_14 & VAR_3)
        VAR_15 |= VAR_9 | VAR_8;
    return VAR_15;
}
