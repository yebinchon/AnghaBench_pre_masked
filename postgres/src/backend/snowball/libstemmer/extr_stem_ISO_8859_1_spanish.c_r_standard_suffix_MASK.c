
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int ket; int c; int lb; int* p; int bra; int l; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct SN_env*,int,int ) ;
 int FUNC_1 (struct SN_env*,int ,int) ;
 int FUNC_2 (struct SN_env*) ;
 int FUNC_3 (struct SN_env*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct SN_env*) ;
 int FUNC_5 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_6(struct SN_env * VAR_10) {
    int VAR_11;
    VAR_10->ket = VAR_10->c;
    if (VAR_10->c - 2 <= VAR_10->lb || VAR_10->p[VAR_10->c - 1] >> 5 != 3 || !((835634 >> (VAR_10->p[VAR_10->c - 1] & 0x1f)) & 1)) return 0;
    VAR_11 = FUNC_1(VAR_10, VAR_3, 46);
    if (!(VAR_11)) return 0;
    VAR_10->bra = VAR_10->c;
    switch (VAR_11) {
        case 1:
            { int VAR_12 = FUNC_3(VAR_10);
                if (VAR_12 <= 0) return VAR_12;
            }
            { int VAR_13 = FUNC_4(VAR_10);
                if (VAR_13 < 0) return VAR_13;
            }
            break;
        case 2:
            { int VAR_14 = FUNC_3(VAR_10);
                if (VAR_14 <= 0) return VAR_14;
            }
            { int VAR_15 = FUNC_4(VAR_10);
                if (VAR_15 < 0) return VAR_15;
            }
            { int VAR_16 = VAR_10->l - VAR_10->c; (void)VAR_16;
                VAR_10->ket = VAR_10->c;
                if (!(FUNC_0(VAR_10, 2, VAR_4))) { VAR_10->c = VAR_10->l - VAR_16; goto lab0; }
                VAR_10->bra = VAR_10->c;
                { int VAR_17 = FUNC_3(VAR_10);
                    if (VAR_17 == 0) { VAR_10->c = VAR_10->l - VAR_16; goto lab0; }
                    if (VAR_17 < 0) return VAR_17;
                }
                { int VAR_18 = FUNC_4(VAR_10);
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
            { int VAR_20 = FUNC_5(VAR_10, 3, VAR_5);
                if (VAR_20 < 0) return VAR_20;
            }
            break;
        case 4:
            { int VAR_21 = FUNC_3(VAR_10);
                if (VAR_21 <= 0) return VAR_21;
            }
            { int VAR_22 = FUNC_5(VAR_10, 1, VAR_6);
                if (VAR_22 < 0) return VAR_22;
            }
            break;
        case 5:
            { int VAR_23 = FUNC_3(VAR_10);
                if (VAR_23 <= 0) return VAR_23;
            }
            { int VAR_24 = FUNC_5(VAR_10, 4, VAR_7);
                if (VAR_24 < 0) return VAR_24;
            }
            break;
        case 6:
            { int VAR_25 = FUNC_2(VAR_10);
                if (VAR_25 <= 0) return VAR_25;
            }
            { int VAR_26 = FUNC_4(VAR_10);
                if (VAR_26 < 0) return VAR_26;
            }
            { int VAR_27 = VAR_10->l - VAR_10->c; (void)VAR_27;
                VAR_10->ket = VAR_10->c;
                if (VAR_10->c - 1 <= VAR_10->lb || VAR_10->p[VAR_10->c - 1] >> 5 != 3 || !((4718616 >> (VAR_10->p[VAR_10->c - 1] & 0x1f)) & 1)) { VAR_10->c = VAR_10->l - VAR_27; goto lab1; }
                VAR_11 = FUNC_1(VAR_10, VAR_0, 4);
                if (!(VAR_11)) { VAR_10->c = VAR_10->l - VAR_27; goto lab1; }
                VAR_10->bra = VAR_10->c;
                { int VAR_28 = FUNC_3(VAR_10);
                    if (VAR_28 == 0) { VAR_10->c = VAR_10->l - VAR_27; goto lab1; }
                    if (VAR_28 < 0) return VAR_28;
                }
                { int VAR_29 = FUNC_4(VAR_10);
                    if (VAR_29 < 0) return VAR_29;
                }
                switch (VAR_11) {
                    case 1:
                        VAR_10->ket = VAR_10->c;
                        if (!(FUNC_0(VAR_10, 2, VAR_8))) { VAR_10->c = VAR_10->l - VAR_27; goto lab1; }
                        VAR_10->bra = VAR_10->c;
                        { int VAR_30 = FUNC_3(VAR_10);
                            if (VAR_30 == 0) { VAR_10->c = VAR_10->l - VAR_27; goto lab1; }
                            if (VAR_30 < 0) return VAR_30;
                        }
                        { int VAR_31 = FUNC_4(VAR_10);
                            if (VAR_31 < 0) return VAR_31;
                        }
                        break;
                }
            lab1:
                ;
            }
            break;
        case 7:
            { int VAR_32 = FUNC_3(VAR_10);
                if (VAR_32 <= 0) return VAR_32;
            }
            { int VAR_33 = FUNC_4(VAR_10);
                if (VAR_33 < 0) return VAR_33;
            }
            { int VAR_34 = VAR_10->l - VAR_10->c; (void)VAR_34;
                VAR_10->ket = VAR_10->c;
                if (VAR_10->c - 3 <= VAR_10->lb || VAR_10->p[VAR_10->c - 1] != 101) { VAR_10->c = VAR_10->l - VAR_34; goto lab2; }
                if (!(FUNC_1(VAR_10, VAR_1, 3))) { VAR_10->c = VAR_10->l - VAR_34; goto lab2; }
                VAR_10->bra = VAR_10->c;
                { int VAR_35 = FUNC_3(VAR_10);
                    if (VAR_35 == 0) { VAR_10->c = VAR_10->l - VAR_34; goto lab2; }
                    if (VAR_35 < 0) return VAR_35;
                }
                { int VAR_36 = FUNC_4(VAR_10);
                    if (VAR_36 < 0) return VAR_36;
                }
            lab2:
                ;
            }
            break;
        case 8:
            { int VAR_37 = FUNC_3(VAR_10);
                if (VAR_37 <= 0) return VAR_37;
            }
            { int VAR_38 = FUNC_4(VAR_10);
                if (VAR_38 < 0) return VAR_38;
            }
            { int VAR_39 = VAR_10->l - VAR_10->c; (void)VAR_39;
                VAR_10->ket = VAR_10->c;
                if (VAR_10->c - 1 <= VAR_10->lb || VAR_10->p[VAR_10->c - 1] >> 5 != 3 || !((4198408 >> (VAR_10->p[VAR_10->c - 1] & 0x1f)) & 1)) { VAR_10->c = VAR_10->l - VAR_39; goto lab3; }
                if (!(FUNC_1(VAR_10, VAR_2, 3))) { VAR_10->c = VAR_10->l - VAR_39; goto lab3; }
                VAR_10->bra = VAR_10->c;
                { int VAR_40 = FUNC_3(VAR_10);
                    if (VAR_40 == 0) { VAR_10->c = VAR_10->l - VAR_39; goto lab3; }
                    if (VAR_40 < 0) return VAR_40;
                }
                { int VAR_41 = FUNC_4(VAR_10);
                    if (VAR_41 < 0) return VAR_41;
                }
            lab3:
                ;
            }
            break;
        case 9:
            { int VAR_42 = FUNC_3(VAR_10);
                if (VAR_42 <= 0) return VAR_42;
            }
            { int VAR_43 = FUNC_4(VAR_10);
                if (VAR_43 < 0) return VAR_43;
            }
            { int VAR_44 = VAR_10->l - VAR_10->c; (void)VAR_44;
                VAR_10->ket = VAR_10->c;
                if (!(FUNC_0(VAR_10, 2, VAR_9))) { VAR_10->c = VAR_10->l - VAR_44; goto lab4; }
                VAR_10->bra = VAR_10->c;
                { int VAR_45 = FUNC_3(VAR_10);
                    if (VAR_45 == 0) { VAR_10->c = VAR_10->l - VAR_44; goto lab4; }
                    if (VAR_45 < 0) return VAR_45;
                }
                { int VAR_46 = FUNC_4(VAR_10);
                    if (VAR_46 < 0) return VAR_46;
                }
            lab4:
                ;
            }
            break;
    }
    return 1;
}
