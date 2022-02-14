
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int WINE_MCIMIDI ;
typedef scalar_t__* LPWORD ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,scalar_t__*) ;

__attribute__((used)) static DWORD FUNC_1(WINE_MCIMIDI* VAR_1, LPWORD VAR_2)
{
    BYTE VAR_3, VAR_4;
    DWORD VAR_5 = VAR_0;

    if (FUNC_0(VAR_1, &VAR_3) == 0 &&
 FUNC_0(VAR_1, &VAR_4) == 0) {
 *VAR_2 = ((WORD)VAR_3 << 8) + VAR_4;
 VAR_5 = 0;
    }
    return VAR_5;
}
