
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WORD ;
typedef int WINE_MCIMIDI ;
typedef int* LPDWORD ;
typedef int DWORD ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (int *,int*) ;

__attribute__((used)) static WORD FUNC_1(WINE_MCIMIDI* VAR_0, LPDWORD VAR_1)
{
    BYTE VAR_2;
    DWORD VAR_3 = 0;
    WORD VAR_4 = 0;

    do {
 if (FUNC_0(VAR_0, &VAR_2) != 0) {
     return 0;
 }
 VAR_3 = (VAR_3 << 7) + (VAR_2 & 0x7F);
 VAR_4++;
    } while (VAR_2 & 0x80);
    *VAR_1 = VAR_3;
    return VAR_4;
}
