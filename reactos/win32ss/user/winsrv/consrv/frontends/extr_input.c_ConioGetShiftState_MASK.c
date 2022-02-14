
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* PBYTE ;
typedef int LPARAM ;
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
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;

__attribute__((used)) static DWORD
FUNC_0(PBYTE VAR_17, LPARAM VAR_18)
{
    DWORD VAR_19 = 0;

    if (VAR_17[VAR_9] & 0x01)
        VAR_19 |= VAR_0;

    if (VAR_17[VAR_12] & 0x01)
        VAR_19 |= VAR_4;

    if (VAR_17[VAR_15] & 0x01)
        VAR_19 |= VAR_7;

    if (VAR_17[VAR_16] & 0x80)
        VAR_19 |= VAR_8;

    if (VAR_17[VAR_10] & 0x80)
        VAR_19 |= VAR_3;
    if (VAR_17[VAR_13] & 0x80)
        VAR_19 |= VAR_6;

    if (VAR_17[VAR_11] & 0x80)
        VAR_19 |= VAR_2;
    if (VAR_17[VAR_14] & 0x80)
        VAR_19 |= VAR_5;


    if (VAR_18 & 0x01000000)
        VAR_19 |= VAR_1;

    return VAR_19;
}
