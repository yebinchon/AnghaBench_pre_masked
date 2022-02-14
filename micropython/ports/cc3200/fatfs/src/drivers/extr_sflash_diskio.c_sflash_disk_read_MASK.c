
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef scalar_t__ UINT ;
typedef int DWORD ;
typedef scalar_t__ DRESULT ;
typedef int BYTE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,int *,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int * VAR_8 ;
 scalar_t__ FUNC_3 () ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

DRESULT FUNC_4(BYTE *VAR_13, DWORD VAR_14, UINT VAR_15) {
    uint32_t VAR_16;

    if (!VAR_9) {
        return VAR_7;
    }

    if ((VAR_14 + VAR_15 > VAR_5) || (VAR_15 == 0)) {
        return VAR_3;
    }

    for (int VAR_17 = 0; VAR_17 < VAR_15; VAR_17++) {
        VAR_16 = (VAR_14 + VAR_17) % VAR_4;
        VAR_11 = (VAR_14 + VAR_17) / VAR_4;

        if (VAR_10 != VAR_11) {
            if (FUNC_3() != VAR_2) {
                return VAR_1;
            }
            VAR_10 = VAR_11;
            FUNC_1 (VAR_11);
            if (!FUNC_2(VAR_0, VAR_12)) {
                return VAR_1;
            }
        }

        FUNC_0 (VAR_13, &VAR_8[(VAR_16 * VAR_6)], VAR_6);
        VAR_13 += VAR_6;
    }
    return VAR_2;
}
