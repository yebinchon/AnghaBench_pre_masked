
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int ket; int c; int lb; int* p; int bra; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (struct SN_env*,int ,int,int,int ) ;
 int FUNC_2 (struct SN_env*) ;
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
 int FUNC_3 (struct SN_env*) ;
 int FUNC_4 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct SN_env * VAR_16) {
    int VAR_17;
    VAR_16->ket = VAR_16->c;
    if (VAR_16->c - 1 <= VAR_16->lb || VAR_16->p[VAR_16->c - 1] >> 5 != 3 || !((815616 >> (VAR_16->p[VAR_16->c - 1] & 0x1f)) & 1)) return 0;
    VAR_17 = FUNC_0(VAR_16, VAR_0, 24);
    if (!(VAR_17)) return 0;
    VAR_16->bra = VAR_16->c;
    { int VAR_18 = FUNC_2(VAR_16);
        if (VAR_18 <= 0) return VAR_18;
    }
    switch (VAR_17) {
        case 1:
            { int VAR_19 = FUNC_4(VAR_16, 4, VAR_15);
                if (VAR_19 < 0) return VAR_19;
            }
            break;
        case 2:
            { int VAR_20 = FUNC_4(VAR_16, 4, VAR_2);
                if (VAR_20 < 0) return VAR_20;
            }
            break;
        case 3:
            { int VAR_21 = FUNC_4(VAR_16, 4, VAR_3);
                if (VAR_21 < 0) return VAR_21;
            }
            break;
        case 4:
            { int VAR_22 = FUNC_4(VAR_16, 4, VAR_4);
                if (VAR_22 < 0) return VAR_22;
            }
            break;
        case 5:
            { int VAR_23 = FUNC_4(VAR_16, 3, VAR_5);
                if (VAR_23 < 0) return VAR_23;
            }
            break;
        case 6:
            { int VAR_24 = FUNC_4(VAR_16, 3, VAR_6);
                if (VAR_24 < 0) return VAR_24;
            }
            break;
        case 7:
            { int VAR_25 = FUNC_4(VAR_16, 3, VAR_7);
                if (VAR_25 < 0) return VAR_25;
            }
            break;
        case 8:
            { int VAR_26 = FUNC_4(VAR_16, 2, VAR_8);
                if (VAR_26 < 0) return VAR_26;
            }
            break;
        case 9:
            { int VAR_27 = FUNC_4(VAR_16, 3, VAR_9);
                if (VAR_27 < 0) return VAR_27;
            }
            break;
        case 10:
            { int VAR_28 = FUNC_4(VAR_16, 3, VAR_10);
                if (VAR_28 < 0) return VAR_28;
            }
            break;
        case 11:
            { int VAR_29 = FUNC_4(VAR_16, 3, VAR_11);
                if (VAR_29 < 0) return VAR_29;
            }
            break;
        case 12:
            { int VAR_30 = FUNC_4(VAR_16, 3, VAR_12);
                if (VAR_30 < 0) return VAR_30;
            }
            break;
        case 13:
            if (VAR_16->c <= VAR_16->lb || VAR_16->p[VAR_16->c - 1] != 'l') return 0;
            VAR_16->c--;
            { int VAR_31 = FUNC_4(VAR_16, 2, VAR_13);
                if (VAR_31 < 0) return VAR_31;
            }
            break;
        case 14:
            { int VAR_32 = FUNC_4(VAR_16, 4, VAR_14);
                if (VAR_32 < 0) return VAR_32;
            }
            break;
        case 15:
            if (FUNC_1(VAR_16, VAR_1, 99, 116, 0)) return 0;
            { int VAR_33 = FUNC_3(VAR_16);
                if (VAR_33 < 0) return VAR_33;
            }
            break;
    }
    return 1;
}
