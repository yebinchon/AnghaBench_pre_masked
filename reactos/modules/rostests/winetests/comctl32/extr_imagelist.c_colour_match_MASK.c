
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef scalar_t__ INT32 ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static BOOL FUNC_1(UINT32 VAR_0, UINT32 VAR_1)
{
    const INT32 VAR_2 = 8;

    const INT32 VAR_3 = FUNC_0((INT32)(VAR_0 & 0x000000FF) - (INT32)(VAR_1 & 0x000000FF));
    const INT32 VAR_4 = FUNC_0((INT32)((VAR_0 & 0x0000FF00) >> 8) - (INT32)((VAR_1 & 0x0000FF00) >> 8));
    const INT32 VAR_5 = FUNC_0((INT32)((VAR_0 & 0x00FF0000) >> 16) - (INT32)((VAR_1 & 0x00FF0000) >> 16));

    return (VAR_3 <= VAR_2 && VAR_4 <= VAR_2 && VAR_5 <= VAR_2);
}
