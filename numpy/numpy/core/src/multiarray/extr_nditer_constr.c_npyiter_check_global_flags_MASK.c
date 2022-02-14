
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,char*) ;
 int VAR_16 ;

__attribute__((used)) static int
FUNC_1(npy_uint32 VAR_17, npy_uint32* VAR_18)
{
    if ((VAR_17 & VAR_7) != 0) {
        FUNC_0(VAR_16,
                    "A per-operand flag was passed as a global flag "
                    "to the iterator constructor");
        return 0;
    }


    if (VAR_17 & (VAR_1 | VAR_4)) {
        if ((VAR_17 & (VAR_1 | VAR_4)) ==
                    (VAR_1 | VAR_4)) {
            FUNC_0(VAR_16,
                    "Iterator flags C_INDEX and "
                    "F_INDEX cannot both be specified");
            return 0;
        }
        (*VAR_18) |= VAR_13;
    }

    if (VAR_17 & VAR_6) {




        (*VAR_18) |= VAR_14;
    }

    if (VAR_17 & VAR_3) {
        if ((*VAR_18) & (VAR_13 | VAR_14)) {
            FUNC_0(VAR_16,
                    "Iterator flag EXTERNAL_LOOP cannot be used "
                    "if an index or multi-index is being tracked");
            return 0;
        }
        (*VAR_18) |= VAR_11;
    }

    if (VAR_17 & VAR_8) {
        (*VAR_18) |= VAR_15;
        if ((VAR_17 & VAR_3) &&
                                    !(VAR_17 & VAR_0)) {
            FUNC_0(VAR_16,
                    "Iterator flag RANGED cannot be used with "
                    "the flag EXTERNAL_LOOP unless "
                    "BUFFERED is also enabled");
            return 0;
        }
    }

    if (VAR_17 & VAR_0) {
        (*VAR_18) |= VAR_9;
        if (VAR_17 & VAR_5) {
            (*VAR_18) |= VAR_12;
        }
        if (VAR_17 & VAR_2) {
            (*VAR_18) |= VAR_10;
        }
    }

    return 1;
}
