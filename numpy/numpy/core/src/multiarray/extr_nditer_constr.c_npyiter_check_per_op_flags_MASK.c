
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npyiter_opitflags ;
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
 int FUNC_0 (int ,char*) ;
 int VAR_13 ;

__attribute__((used)) static int
FUNC_1(npy_uint32 VAR_14, npyiter_opitflags *VAR_15)
{
    if ((VAR_14 & VAR_2) != 0) {
        FUNC_0(VAR_13,
                    "A global iterator flag was passed as a per-operand flag "
                    "to the iterator constructor");
        return 0;
    }


    if (VAR_14 & VAR_3) {

        if (VAR_14 & (VAR_4|VAR_8)) {
            FUNC_0(VAR_13,
                    "Only one of the iterator flags READWRITE, "
                    "READONLY, and WRITEONLY may be "
                    "specified for an operand");
            return 0;
        }

        *VAR_15 = VAR_9;
    }
    else if (VAR_14 & VAR_4) {

        if (VAR_14 & VAR_8) {
            FUNC_0(VAR_13,
                    "Only one of the iterator flags READWRITE, "
                    "READONLY, and WRITEONLY may be "
                    "specified for an operand");
            return 0;
        }

        *VAR_15 = VAR_9|VAR_11;
    }
    else if(VAR_14 & VAR_8) {
        *VAR_15 = VAR_11;
    }
    else {
        FUNC_0(VAR_13,
                "None of the iterator flags READWRITE, "
                "READONLY, or WRITEONLY were "
                "specified for an operand");
        return 0;
    }


    if (((*VAR_15) & VAR_11) &&
                (VAR_14 & (VAR_1 |
                           VAR_5)) == VAR_1) {
        FUNC_0(VAR_13,
                "If an iterator operand is writeable, must use "
                "the flag UPDATEIFCOPY instead of "
                "COPY");
        return 0;
    }


    if (VAR_14 & VAR_7) {
        if (!((*VAR_15) & VAR_11)) {
            FUNC_0(VAR_13,
                "The iterator flag WRITEMASKED may only "
                "be used with READWRITE or WRITEONLY");
            return 0;
        }
        if ((VAR_14 & VAR_0) != 0) {
            FUNC_0(VAR_13,
                "The iterator flag WRITEMASKED may not "
                "be used together with ARRAYMASK");
            return 0;
        }
        *VAR_15 |= VAR_12;
    }

    if ((VAR_14 & VAR_6) != 0) {
        if ((VAR_14 & VAR_4) == 0) {
            FUNC_0(VAR_13,
                "The iterator flag VIRTUAL should be "
                "be used together with READWRITE");
            return 0;
        }
        *VAR_15 |= VAR_10;
    }

    return 1;
}
