
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int ket; int c; int lb; int* p; int bra; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int FUNC_1 (struct SN_env*) ;
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
 int FUNC_2 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct SN_env * VAR_14) {
    int VAR_15;
    VAR_14->ket = VAR_14->c;
    if (VAR_14->c - 2 <= VAR_14->lb || VAR_14->p[VAR_14->c - 1] >> 5 != 3 || !((815616 >> (VAR_14->p[VAR_14->c - 1] & 0x1f)) & 1)) return 0;
    VAR_15 = FUNC_0(VAR_14, VAR_0, 20);
    if (!(VAR_15)) return 0;
    VAR_14->bra = VAR_14->c;
    { int VAR_16 = FUNC_1(VAR_14);
        if (VAR_16 <= 0) return VAR_16;
    }
    switch (VAR_15) {
        case 1:
            { int VAR_17 = FUNC_2(VAR_14, 4, VAR_10);
                if (VAR_17 < 0) return VAR_17;
            }
            break;
        case 2:
            { int VAR_18 = FUNC_2(VAR_14, 4, VAR_11);
                if (VAR_18 < 0) return VAR_18;
            }
            break;
        case 3:
            { int VAR_19 = FUNC_2(VAR_14, 4, VAR_12);
                if (VAR_19 < 0) return VAR_19;
            }
            break;
        case 4:
            { int VAR_20 = FUNC_2(VAR_14, 4, VAR_13);
                if (VAR_20 < 0) return VAR_20;
            }
            break;
        case 5:
            { int VAR_21 = FUNC_2(VAR_14, 3, VAR_1);
                if (VAR_21 < 0) return VAR_21;
            }
            break;
        case 6:
            { int VAR_22 = FUNC_2(VAR_14, 1, VAR_2);
                if (VAR_22 < 0) return VAR_22;
            }
            break;
        case 7:
            { int VAR_23 = FUNC_2(VAR_14, 3, VAR_3);
                if (VAR_23 < 0) return VAR_23;
            }
            break;
        case 8:
            { int VAR_24 = FUNC_2(VAR_14, 3, VAR_4);
                if (VAR_24 < 0) return VAR_24;
            }
            break;
        case 9:
            { int VAR_25 = FUNC_2(VAR_14, 2, VAR_5);
                if (VAR_25 < 0) return VAR_25;
            }
            break;
        case 10:
            { int VAR_26 = FUNC_2(VAR_14, 3, VAR_6);
                if (VAR_26 < 0) return VAR_26;
            }
            break;
        case 11:
            { int VAR_27 = FUNC_2(VAR_14, 3, VAR_7);
                if (VAR_27 < 0) return VAR_27;
            }
            break;
        case 12:
            { int VAR_28 = FUNC_2(VAR_14, 3, VAR_8);
                if (VAR_28 < 0) return VAR_28;
            }
            break;
        case 13:
            { int VAR_29 = FUNC_2(VAR_14, 3, VAR_9);
                if (VAR_29 < 0) return VAR_29;
            }
            break;
    }
    return 1;
}
