
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int ket; int c; int bra; int l; int* p; int lb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct SN_env*,int,int ) ;
 int FUNC_1 (struct SN_env*,int ,int) ;
 int FUNC_2 (struct SN_env*) ;
 int FUNC_3 (struct SN_env*) ;
 int FUNC_4 (struct SN_env*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct SN_env*) ;
 int FUNC_6 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct SN_env * VAR_10) {
    int VAR_11;
    VAR_10->ket = VAR_10->c;
    VAR_11 = FUNC_1(VAR_10, VAR_2, 51);
    if (!(VAR_11)) return 0;
    VAR_10->bra = VAR_10->c;
    switch (VAR_11) {
        case 1:
            { int VAR_12 = FUNC_3(VAR_10);
                if (VAR_12 <= 0) return VAR_12;
            }
            { int VAR_13 = FUNC_5(VAR_10);
                if (VAR_13 < 0) return VAR_13;
            }
            break;
        case 2:
            { int VAR_14 = FUNC_3(VAR_10);
                if (VAR_14 <= 0) return VAR_14;
            }
            { int VAR_15 = FUNC_5(VAR_10);
                if (VAR_15 < 0) return VAR_15;
            }
            { int VAR_16 = VAR_10->l - VAR_10->c; (void)VAR_16;
                VAR_10->ket = VAR_10->c;
                if (!(FUNC_0(VAR_10, 2, VAR_3))) { VAR_10->c = VAR_10->l - VAR_16; goto lab0; }
                VAR_10->bra = VAR_10->c;
                { int VAR_17 = FUNC_3(VAR_10);
                    if (VAR_17 == 0) { VAR_10->c = VAR_10->l - VAR_16; goto lab0; }
                    if (VAR_17 < 0) return VAR_17;
                }
                { int VAR_18 = FUNC_5(VAR_10);
                    if (VAR_18 < 0) return VAR_18;
                }
            lab0:
                ;
            }
            break;
        case 3:
            { int VAR_19 = FUNC_3(VAR_10);
                if (VAR_19 <= 0) return VAR_19;
            }
            { int VAR_20 = FUNC_6(VAR_10, 3, VAR_4);
                if (VAR_20 < 0) return VAR_20;
            }
            break;
        case 4:
            { int VAR_21 = FUNC_3(VAR_10);
                if (VAR_21 <= 0) return VAR_21;
            }
            { int VAR_22 = FUNC_6(VAR_10, 1, VAR_5);
                if (VAR_22 < 0) return VAR_22;
            }
            break;
        case 5:
            { int VAR_23 = FUNC_3(VAR_10);
                if (VAR_23 <= 0) return VAR_23;
            }
            { int VAR_24 = FUNC_6(VAR_10, 4, VAR_6);
                if (VAR_24 < 0) return VAR_24;
            }
            break;
        case 6:
            { int VAR_25 = FUNC_4(VAR_10);
                if (VAR_25 <= 0) return VAR_25;
            }
            { int VAR_26 = FUNC_5(VAR_10);
                if (VAR_26 < 0) return VAR_26;
            }
            break;
        case 7:
            { int VAR_27 = FUNC_2(VAR_10);
                if (VAR_27 <= 0) return VAR_27;
            }
            { int VAR_28 = FUNC_5(VAR_10);
                if (VAR_28 < 0) return VAR_28;
            }
            { int VAR_29 = VAR_10->l - VAR_10->c; (void)VAR_29;
                VAR_10->ket = VAR_10->c;
                if (VAR_10->c - 1 <= VAR_10->lb || VAR_10->p[VAR_10->c - 1] >> 5 != 3 || !((4722696 >> (VAR_10->p[VAR_10->c - 1] & 0x1f)) & 1)) { VAR_10->c = VAR_10->l - VAR_29; goto lab1; }
                VAR_11 = FUNC_1(VAR_10, VAR_0, 4);
                if (!(VAR_11)) { VAR_10->c = VAR_10->l - VAR_29; goto lab1; }
                VAR_10->bra = VAR_10->c;
                { int VAR_30 = FUNC_3(VAR_10);
                    if (VAR_30 == 0) { VAR_10->c = VAR_10->l - VAR_29; goto lab1; }
                    if (VAR_30 < 0) return VAR_30;
                }
                { int VAR_31 = FUNC_5(VAR_10);
                    if (VAR_31 < 0) return VAR_31;
                }
                switch (VAR_11) {
                    case 1:
                        VAR_10->ket = VAR_10->c;
                        if (!(FUNC_0(VAR_10, 2, VAR_7))) { VAR_10->c = VAR_10->l - VAR_29; goto lab1; }
                        VAR_10->bra = VAR_10->c;
                        { int VAR_32 = FUNC_3(VAR_10);
                            if (VAR_32 == 0) { VAR_10->c = VAR_10->l - VAR_29; goto lab1; }
                            if (VAR_32 < 0) return VAR_32;
                        }
                        { int VAR_33 = FUNC_5(VAR_10);
                            if (VAR_33 < 0) return VAR_33;
                        }
                        break;
                }
            lab1:
                ;
            }
            break;
        case 8:
            { int VAR_34 = FUNC_3(VAR_10);
                if (VAR_34 <= 0) return VAR_34;
            }
            { int VAR_35 = FUNC_5(VAR_10);
                if (VAR_35 < 0) return VAR_35;
            }
            { int VAR_36 = VAR_10->l - VAR_10->c; (void)VAR_36;
                VAR_10->ket = VAR_10->c;
                if (VAR_10->c - 1 <= VAR_10->lb || VAR_10->p[VAR_10->c - 1] >> 5 != 3 || !((4198408 >> (VAR_10->p[VAR_10->c - 1] & 0x1f)) & 1)) { VAR_10->c = VAR_10->l - VAR_36; goto lab2; }
                if (!(FUNC_1(VAR_10, VAR_1, 3))) { VAR_10->c = VAR_10->l - VAR_36; goto lab2; }
                VAR_10->bra = VAR_10->c;
                { int VAR_37 = FUNC_3(VAR_10);
                    if (VAR_37 == 0) { VAR_10->c = VAR_10->l - VAR_36; goto lab2; }
                    if (VAR_37 < 0) return VAR_37;
                }
                { int VAR_38 = FUNC_5(VAR_10);
                    if (VAR_38 < 0) return VAR_38;
                }
            lab2:
                ;
            }
            break;
        case 9:
            { int VAR_39 = FUNC_3(VAR_10);
                if (VAR_39 <= 0) return VAR_39;
            }
            { int VAR_40 = FUNC_5(VAR_10);
                if (VAR_40 < 0) return VAR_40;
            }
            { int VAR_41 = VAR_10->l - VAR_10->c; (void)VAR_41;
                VAR_10->ket = VAR_10->c;
                if (!(FUNC_0(VAR_10, 2, VAR_8))) { VAR_10->c = VAR_10->l - VAR_41; goto lab3; }
                VAR_10->bra = VAR_10->c;
                { int VAR_42 = FUNC_3(VAR_10);
                    if (VAR_42 == 0) { VAR_10->c = VAR_10->l - VAR_41; goto lab3; }
                    if (VAR_42 < 0) return VAR_42;
                }
                { int VAR_43 = FUNC_5(VAR_10);
                    if (VAR_43 < 0) return VAR_43;
                }
                VAR_10->ket = VAR_10->c;
                if (!(FUNC_0(VAR_10, 2, VAR_9))) { VAR_10->c = VAR_10->l - VAR_41; goto lab3; }
                VAR_10->bra = VAR_10->c;
                { int VAR_44 = FUNC_3(VAR_10);
                    if (VAR_44 == 0) { VAR_10->c = VAR_10->l - VAR_41; goto lab3; }
                    if (VAR_44 < 0) return VAR_44;
                }
                { int VAR_45 = FUNC_5(VAR_10);
                    if (VAR_45 < 0) return VAR_45;
                }
            lab3:
                ;
            }
            break;
    }
    return 1;
}
