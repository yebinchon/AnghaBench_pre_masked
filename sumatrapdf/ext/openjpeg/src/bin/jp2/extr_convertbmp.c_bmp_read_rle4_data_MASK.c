
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPJ_UINT8 ;
typedef int OPJ_UINT32 ;
typedef scalar_t__ OPJ_SIZE_T ;
typedef int OPJ_BOOL ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static OPJ_BOOL FUNC_1(FILE* VAR_2, OPJ_UINT8* VAR_3,
                                   OPJ_UINT32 VAR_4, OPJ_UINT32 VAR_5, OPJ_UINT32 VAR_6)
{
    OPJ_UINT32 VAR_7, VAR_8;
    OPJ_UINT8 *VAR_9;
    const OPJ_UINT8 *VAR_10;

    VAR_10 = VAR_3 + VAR_4 * VAR_6;
    VAR_9 = VAR_3;
    VAR_7 = VAR_8 = 0U;
    while (VAR_8 < VAR_6) {
        int VAR_11 = FUNC_0(VAR_2);
        if (VAR_11 == VAR_0) {
            break;
        }

        if (VAR_11) {
            int VAR_12;
            OPJ_UINT8 VAR_13 = (OPJ_UINT8)FUNC_0(VAR_2);

            for (VAR_12 = 0; (VAR_12 < VAR_11) && (VAR_7 < VAR_5) &&
                    ((OPJ_SIZE_T)VAR_9 < (OPJ_SIZE_T)VAR_10); VAR_12++, VAR_7++, VAR_9++) {
                *VAR_9 = (OPJ_UINT8)((VAR_12 & 1) ? (VAR_13 & 0x0fU) : ((VAR_13 >> 4) & 0x0fU));
            }
        } else {
            VAR_11 = FUNC_0(VAR_2);
            if (VAR_11 == VAR_0) {
                break;
            }

            if (VAR_11 == 0x00) {
                VAR_7 = 0;
                VAR_8++;
                VAR_9 = VAR_3 + VAR_8 * VAR_4;
            } else if (VAR_11 == 0x01) {
                break;
            } else if (VAR_11 == 0x02) {
                VAR_11 = FUNC_0(VAR_2);
                VAR_7 += (OPJ_UINT32)VAR_11;
                VAR_11 = FUNC_0(VAR_2);
                VAR_8 += (OPJ_UINT32)VAR_11;
                VAR_9 = VAR_3 + VAR_8 * VAR_4 + VAR_7;
            } else {
                int VAR_14;
                OPJ_UINT8 VAR_15 = 0U;

                for (VAR_14 = 0; (VAR_14 < VAR_11) && (VAR_7 < VAR_5) &&
                        ((OPJ_SIZE_T)VAR_9 < (OPJ_SIZE_T)VAR_10); VAR_14++, VAR_7++, VAR_9++) {
                    if ((VAR_14 & 1) == 0) {
                        VAR_15 = (OPJ_UINT8)FUNC_0(VAR_2);
                    }
                    *VAR_9 = (OPJ_UINT8)((VAR_14 & 1) ? (VAR_15 & 0x0fU) : ((VAR_15 >> 4) & 0x0fU));
                }
                if (((VAR_11 & 3) == 1) || ((VAR_11 & 3) == 2)) {
                    FUNC_0(VAR_2);
                }
            }
        }
    }
    return VAR_1;
}
