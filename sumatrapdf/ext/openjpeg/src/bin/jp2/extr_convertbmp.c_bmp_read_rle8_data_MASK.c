
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ OPJ_UINT8 ;
typedef int OPJ_UINT32 ;
typedef scalar_t__ OPJ_SIZE_T ;
typedef int OPJ_BOOL ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static OPJ_BOOL FUNC_1(FILE* VAR_3, OPJ_UINT8* VAR_4,
                                   OPJ_UINT32 VAR_5, OPJ_UINT32 VAR_6, OPJ_UINT32 VAR_7)
{
    OPJ_UINT32 VAR_8, VAR_9;
    OPJ_UINT8 *VAR_10;
    const OPJ_UINT8 *VAR_11;

    VAR_11 = VAR_4 + VAR_5 * VAR_7;
    VAR_10 = VAR_4;

    VAR_8 = VAR_9 = 0U;
    while (VAR_9 < VAR_7) {
        int VAR_12 = FUNC_0(VAR_3);
        if (VAR_12 == VAR_0) {
            return VAR_1;
        }

        if (VAR_12) {
            int VAR_13, VAR_14;
            OPJ_UINT8 VAR_15;

            VAR_14 = FUNC_0(VAR_3);
            if (VAR_14 == VAR_0) {
                return VAR_1;
            }
            VAR_15 = (OPJ_UINT8)VAR_14;

            for (VAR_13 = 0; (VAR_13 < VAR_12) && (VAR_8 < VAR_6) &&
                    ((OPJ_SIZE_T)VAR_10 < (OPJ_SIZE_T)VAR_11); VAR_13++, VAR_8++, VAR_10++) {
                *VAR_10 = VAR_15;
            }
        } else {
            VAR_12 = FUNC_0(VAR_3);
            if (VAR_12 == VAR_0) {
                return VAR_1;
            }

            if (VAR_12 == 0x00) {
                VAR_8 = 0;
                ++VAR_9;
                VAR_10 = VAR_4 + VAR_9 * VAR_5 + VAR_8;
            } else if (VAR_12 == 0x01) {
                break;
            } else if (VAR_12 == 0x02) {
                VAR_12 = FUNC_0(VAR_3);
                if (VAR_12 == VAR_0) {
                    return VAR_1;
                }
                VAR_8 += (OPJ_UINT32)VAR_12;
                VAR_12 = FUNC_0(VAR_3);
                if (VAR_12 == VAR_0) {
                    return VAR_1;
                }
                VAR_9 += (OPJ_UINT32)VAR_12;
                VAR_10 = VAR_4 + VAR_9 * VAR_5 + VAR_8;
            } else {
                int VAR_16;
                for (VAR_16 = 0; (VAR_16 < VAR_12) && (VAR_8 < VAR_6) &&
                        ((OPJ_SIZE_T)VAR_10 < (OPJ_SIZE_T)VAR_11); VAR_16++, VAR_8++, VAR_10++) {
                    int VAR_17;
                    OPJ_UINT8 VAR_18;
                    VAR_17 = FUNC_0(VAR_3);
                    if (VAR_17 == VAR_0) {
                        return VAR_1;
                    }
                    VAR_18 = (OPJ_UINT8)VAR_17;
                    *VAR_10 = VAR_18;
                }
                if ((OPJ_UINT32)VAR_12 & 1U) {
                    VAR_12 = FUNC_0(VAR_3);
                    if (VAR_12 == VAR_0) {
                        return VAR_1;
                    }
                }
            }
        }
    }
    return VAR_2;
}
