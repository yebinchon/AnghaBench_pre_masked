
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef scalar_t__ INT ;
typedef scalar_t__ BYTE ;


 int FUNC_0 (void const**,int,scalar_t__*,int*,int) ;

__attribute__((used)) static void FUNC_1 (const void *VAR_0, void *VAR_1, UINT VAR_2,
        UINT VAR_3, INT VAR_4, UINT VAR_5, UINT VAR_6)
{
    while (VAR_4 > 0)
    {
        BYTE VAR_7 = *(const BYTE *)VAR_0;
        BYTE *VAR_8 = VAR_1;
        VAR_8[0] = VAR_7;
        VAR_8[1] = VAR_7;
        VAR_8[2] = VAR_7 - 0x80;

        VAR_1 = (char *)VAR_1 + VAR_3;
        FUNC_0(&VAR_0, VAR_2, &VAR_4, &VAR_5, VAR_6);
    }
}
