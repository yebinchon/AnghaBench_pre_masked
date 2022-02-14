
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPJ_UINT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_0(OPJ_UINT32 VAR_9, OPJ_UINT32 VAR_10)
{
    int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    VAR_14 = 0;
    VAR_11 = ((VAR_9 & VAR_4) != 0) + ((VAR_9 & VAR_5) != 0);
    VAR_12 = ((VAR_9 & VAR_2) != 0) + ((VAR_9 & VAR_7) != 0);
    VAR_13 = ((VAR_9 & VAR_1) != 0) + ((VAR_9 & VAR_3) != 0) + ((
                VAR_9 & VAR_8) != 0) + ((VAR_9 & VAR_6) != 0);

    switch (VAR_10) {
    case 2:
        VAR_15 = VAR_11;
        VAR_11 = VAR_12;
        VAR_12 = VAR_15;
    case 0:
    case 1:
        if (!VAR_11) {
            if (!VAR_12) {
                if (!VAR_13) {
                    VAR_14 = 0;
                } else if (VAR_13 == 1) {
                    VAR_14 = 1;
                } else {
                    VAR_14 = 2;
                }
            } else if (VAR_12 == 1) {
                VAR_14 = 3;
            } else {
                VAR_14 = 4;
            }
        } else if (VAR_11 == 1) {
            if (!VAR_12) {
                if (!VAR_13) {
                    VAR_14 = 5;
                } else {
                    VAR_14 = 6;
                }
            } else {
                VAR_14 = 7;
            }
        } else {
            VAR_14 = 8;
        }
        break;
    case 3:
        VAR_16 = VAR_11 + VAR_12;
        if (!VAR_13) {
            if (!VAR_16) {
                VAR_14 = 0;
            } else if (VAR_16 == 1) {
                VAR_14 = 1;
            } else {
                VAR_14 = 2;
            }
        } else if (VAR_13 == 1) {
            if (!VAR_16) {
                VAR_14 = 3;
            } else if (VAR_16 == 1) {
                VAR_14 = 4;
            } else {
                VAR_14 = 5;
            }
        } else if (VAR_13 == 2) {
            if (!VAR_16) {
                VAR_14 = 6;
            } else {
                VAR_14 = 7;
            }
        } else {
            VAR_14 = 8;
        }
        break;
    }

    return (VAR_0 + VAR_14);
}
