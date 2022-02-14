
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ UINT ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ DRESULT ;
typedef int BYTE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,int const*,size_t) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int * VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 () ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;

DRESULT FUNC_4(const BYTE *VAR_14, DWORD VAR_15, UINT VAR_16) {
    uint32_t VAR_17;
    int32_t VAR_18 = 0;

    if (!VAR_10) {
        return VAR_7;
    }

    if ((VAR_15 + VAR_16 > VAR_5) || (VAR_16 == 0)) {
        FUNC_3();
        return VAR_3;
    }

    do {
        VAR_17 = (VAR_15 + VAR_18) % VAR_4;
        VAR_12 = (VAR_15 + VAR_18) / VAR_4;

        if (VAR_11 != VAR_12) {
            if (FUNC_3() != VAR_2) {
                return VAR_1;
            }
            VAR_11 = VAR_12;
            FUNC_1 (VAR_12);

            if (!FUNC_2(VAR_0, VAR_13)) {
                return VAR_1;
            }
        }

        FUNC_0 (&VAR_8[(VAR_17 * VAR_6)], VAR_14, VAR_6);
        VAR_14 += VAR_6;
        VAR_9 = 1;
    } while (++VAR_18 < VAR_16);

    return VAR_2;
}
