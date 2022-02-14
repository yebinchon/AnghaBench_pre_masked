
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int iCoef1; int iCoef2; } ;
typedef TYPE_1__ ADPCMCOEFSET ;


 int* VAR_0 ;
 int FUNC_0 (int*) ;

__attribute__((used)) static inline void FUNC_1(unsigned VAR_1, int* VAR_2,
                                  int* VAR_3, int* VAR_4,
                                  const ADPCMCOEFSET* VAR_5)
{
    int VAR_6;
    int VAR_7;


    VAR_7 = (VAR_1 & 0x08) ? (VAR_1 - 16) : VAR_1;
    VAR_6 = ((*VAR_3 * VAR_5->iCoef1) + (*VAR_4 * VAR_5->iCoef2)) / 256 +
        VAR_7 * *VAR_2;
    FUNC_0(&VAR_6);

    *VAR_4 = *VAR_3;
    *VAR_3 = VAR_6;
    *VAR_2 = ((VAR_0[VAR_1] * *VAR_2) / 256);
    if (*VAR_2 < 16) *VAR_2 = 16;
}
