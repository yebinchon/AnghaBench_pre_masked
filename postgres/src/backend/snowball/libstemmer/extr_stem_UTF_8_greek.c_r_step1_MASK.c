
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {scalar_t__* B; int c; int bra; int ket; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
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
 int FUNC_1 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct SN_env * VAR_12) {
    int VAR_13;
    VAR_12->ket = VAR_12->c;
    VAR_13 = FUNC_0(VAR_12, VAR_0, 40);
    if (!(VAR_13)) return 0;
    VAR_12->bra = VAR_12->c;
    switch (VAR_13) {
        case 1:
            { int VAR_14 = FUNC_1(VAR_12, 4, VAR_1);
                if (VAR_14 < 0) return VAR_14;
            }
            break;
        case 2:
            { int VAR_15 = FUNC_1(VAR_12, 6, VAR_2);
                if (VAR_15 < 0) return VAR_15;
            }
            break;
        case 3:
            { int VAR_16 = FUNC_1(VAR_12, 6, VAR_3);
                if (VAR_16 < 0) return VAR_16;
            }
            break;
        case 4:
            { int VAR_17 = FUNC_1(VAR_12, 4, VAR_4);
                if (VAR_17 < 0) return VAR_17;
            }
            break;
        case 5:
            { int VAR_18 = FUNC_1(VAR_12, 8, VAR_5);
                if (VAR_18 < 0) return VAR_18;
            }
            break;
        case 6:
            { int VAR_19 = FUNC_1(VAR_12, 6, VAR_6);
                if (VAR_19 < 0) return VAR_19;
            }
            break;
        case 7:
            { int VAR_20 = FUNC_1(VAR_12, 6, VAR_7);
                if (VAR_20 < 0) return VAR_20;
            }
            break;
        case 8:
            { int VAR_21 = FUNC_1(VAR_12, 6, VAR_8);
                if (VAR_21 < 0) return VAR_21;
            }
            break;
        case 9:
            { int VAR_22 = FUNC_1(VAR_12, 4, VAR_9);
                if (VAR_22 < 0) return VAR_22;
            }
            break;
        case 10:
            { int VAR_23 = FUNC_1(VAR_12, 12, VAR_10);
                if (VAR_23 < 0) return VAR_23;
            }
            break;
        case 11:
            { int VAR_24 = FUNC_1(VAR_12, 10, VAR_11);
                if (VAR_24 < 0) return VAR_24;
            }
            break;
    }
    VAR_12->B[0] = 0;
    return 1;
}
