
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nDivision; scalar_t__ dwTempo; } ;
typedef TYPE_1__ WINE_MCIMIDI ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static DWORD FUNC_3(WINE_MCIMIDI* VAR_0, DWORD VAR_1)
{
    DWORD VAR_2 = 0;




    if (VAR_0->nDivision == 0) {
 FUNC_0("Shouldn't happen. wmm->nDivision = 0\n");
    } else if (VAR_0->nDivision > 0x8000) {
 int VAR_3 = -(char)FUNC_1(VAR_0->nDivision);
 int VAR_4 = FUNC_2(VAR_0->nDivision);
 VAR_2 = (VAR_1 * 1000) / (VAR_3 * VAR_4);
    } else {
 VAR_2 = (DWORD)((double)VAR_1 * ((double)VAR_0->dwTempo / 1000) /
        (double)VAR_0->nDivision);
    }






    return VAR_2;
}
