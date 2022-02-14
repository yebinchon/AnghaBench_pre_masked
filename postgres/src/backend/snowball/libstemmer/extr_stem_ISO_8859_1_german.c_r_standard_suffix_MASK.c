
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int l; int c; int ket; int lb; int* p; size_t bra; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct SN_env*,int,int ) ;
 int FUNC_1 (struct SN_env*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct SN_env*,int ,int,int,int ) ;
 int FUNC_3 (struct SN_env*) ;
 int FUNC_4 (struct SN_env*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct SN_env*) ;

__attribute__((used)) static int FUNC_6(struct SN_env * VAR_10) {
    int VAR_11;
    { int VAR_12 = VAR_10->l - VAR_10->c; (void)VAR_12;
        VAR_10->ket = VAR_10->c;
        if (VAR_10->c <= VAR_10->lb || VAR_10->p[VAR_10->c - 1] >> 5 != 3 || !((811040 >> (VAR_10->p[VAR_10->c - 1] & 0x1f)) & 1)) goto lab0;
        VAR_11 = FUNC_1(VAR_10, VAR_0, 7);
        if (!(VAR_11)) goto lab0;
        VAR_10->bra = VAR_10->c;
        { int VAR_13 = FUNC_3(VAR_10);
            if (VAR_13 == 0) goto lab0;
            if (VAR_13 < 0) return VAR_13;
        }
        switch (VAR_11) {
            case 1:
                { int VAR_14 = FUNC_5(VAR_10);
                    if (VAR_14 < 0) return VAR_14;
                }
                break;
            case 2:
                { int VAR_15 = FUNC_5(VAR_10);
                    if (VAR_15 < 0) return VAR_15;
                }
                { int VAR_16 = VAR_10->l - VAR_10->c; (void)VAR_16;
                    VAR_10->ket = VAR_10->c;
                    if (VAR_10->c <= VAR_10->lb || VAR_10->p[VAR_10->c - 1] != 's') { VAR_10->c = VAR_10->l - VAR_16; goto lab1; }
                    VAR_10->c--;
                    VAR_10->bra = VAR_10->c;
                    if (!(FUNC_0(VAR_10, 3, VAR_7))) { VAR_10->c = VAR_10->l - VAR_16; goto lab1; }
                    { int VAR_17 = FUNC_5(VAR_10);
                        if (VAR_17 < 0) return VAR_17;
                    }
                lab1:
                    ;
                }
                break;
            case 3:
                if (FUNC_2(VAR_10, VAR_4, 98, 116, 0)) goto lab0;
                { int VAR_18 = FUNC_5(VAR_10);
                    if (VAR_18 < 0) return VAR_18;
                }
                break;
        }
    lab0:
        VAR_10->c = VAR_10->l - VAR_12;
    }
    { int VAR_19 = VAR_10->l - VAR_10->c; (void)VAR_19;
        VAR_10->ket = VAR_10->c;
        if (VAR_10->c - 1 <= VAR_10->lb || VAR_10->p[VAR_10->c - 1] >> 5 != 3 || !((1327104 >> (VAR_10->p[VAR_10->c - 1] & 0x1f)) & 1)) goto lab2;
        VAR_11 = FUNC_1(VAR_10, VAR_1, 4);
        if (!(VAR_11)) goto lab2;
        VAR_10->bra = VAR_10->c;
        { int VAR_20 = FUNC_3(VAR_10);
            if (VAR_20 == 0) goto lab2;
            if (VAR_20 < 0) return VAR_20;
        }
        switch (VAR_11) {
            case 1:
                { int VAR_21 = FUNC_5(VAR_10);
                    if (VAR_21 < 0) return VAR_21;
                }
                break;
            case 2:
                if (FUNC_2(VAR_10, VAR_5, 98, 116, 0)) goto lab2;
                { int VAR_22 = VAR_10->c - 3;
                    if (VAR_10->lb > VAR_22 || VAR_22 > VAR_10->l) goto lab2;
                    VAR_10->c = VAR_22;
                }
                { int VAR_23 = FUNC_5(VAR_10);
                    if (VAR_23 < 0) return VAR_23;
                }
                break;
        }
    lab2:
        VAR_10->c = VAR_10->l - VAR_19;
    }
    { int VAR_24 = VAR_10->l - VAR_10->c; (void)VAR_24;
        VAR_10->ket = VAR_10->c;
        if (VAR_10->c - 1 <= VAR_10->lb || VAR_10->p[VAR_10->c - 1] >> 5 != 3 || !((1051024 >> (VAR_10->p[VAR_10->c - 1] & 0x1f)) & 1)) goto lab3;
        VAR_11 = FUNC_1(VAR_10, VAR_3, 8);
        if (!(VAR_11)) goto lab3;
        VAR_10->bra = VAR_10->c;
        { int VAR_25 = FUNC_4(VAR_10);
            if (VAR_25 == 0) goto lab3;
            if (VAR_25 < 0) return VAR_25;
        }
        switch (VAR_11) {
            case 1:
                { int VAR_26 = FUNC_5(VAR_10);
                    if (VAR_26 < 0) return VAR_26;
                }
                { int VAR_27 = VAR_10->l - VAR_10->c; (void)VAR_27;
                    VAR_10->ket = VAR_10->c;
                    if (!(FUNC_0(VAR_10, 2, VAR_8))) { VAR_10->c = VAR_10->l - VAR_27; goto lab4; }
                    VAR_10->bra = VAR_10->c;
                    { int VAR_28 = VAR_10->l - VAR_10->c; (void)VAR_28;
                        if (VAR_10->c <= VAR_10->lb || VAR_10->p[VAR_10->c - 1] != 'e') goto lab5;
                        VAR_10->c--;
                        { VAR_10->c = VAR_10->l - VAR_27; goto lab4; }
                    lab5:
                        VAR_10->c = VAR_10->l - VAR_28;
                    }
                    { int VAR_29 = FUNC_4(VAR_10);
                        if (VAR_29 == 0) { VAR_10->c = VAR_10->l - VAR_27; goto lab4; }
                        if (VAR_29 < 0) return VAR_29;
                    }
                    { int VAR_30 = FUNC_5(VAR_10);
                        if (VAR_30 < 0) return VAR_30;
                    }
                lab4:
                    ;
                }
                break;
            case 2:
                { int VAR_31 = VAR_10->l - VAR_10->c; (void)VAR_31;
                    if (VAR_10->c <= VAR_10->lb || VAR_10->p[VAR_10->c - 1] != 'e') goto lab6;
                    VAR_10->c--;
                    goto lab3;
                lab6:
                    VAR_10->c = VAR_10->l - VAR_31;
                }
                { int VAR_32 = FUNC_5(VAR_10);
                    if (VAR_32 < 0) return VAR_32;
                }
                break;
            case 3:
                { int VAR_33 = FUNC_5(VAR_10);
                    if (VAR_33 < 0) return VAR_33;
                }
                { int VAR_34 = VAR_10->l - VAR_10->c; (void)VAR_34;
                    VAR_10->ket = VAR_10->c;
                    { int VAR_35 = VAR_10->l - VAR_10->c; (void)VAR_35;
                        if (!(FUNC_0(VAR_10, 2, VAR_9))) goto lab9;
                        goto lab8;
                    lab9:
                        VAR_10->c = VAR_10->l - VAR_35;
                        if (!(FUNC_0(VAR_10, 2, VAR_6))) { VAR_10->c = VAR_10->l - VAR_34; goto lab7; }
                    }
                lab8:
                    VAR_10->bra = VAR_10->c;
                    { int VAR_36 = FUNC_3(VAR_10);
                        if (VAR_36 == 0) { VAR_10->c = VAR_10->l - VAR_34; goto lab7; }
                        if (VAR_36 < 0) return VAR_36;
                    }
                    { int VAR_37 = FUNC_5(VAR_10);
                        if (VAR_37 < 0) return VAR_37;
                    }
                lab7:
                    ;
                }
                break;
            case 4:
                { int VAR_38 = FUNC_5(VAR_10);
                    if (VAR_38 < 0) return VAR_38;
                }
                { int VAR_39 = VAR_10->l - VAR_10->c; (void)VAR_39;
                    VAR_10->ket = VAR_10->c;
                    if (VAR_10->c - 1 <= VAR_10->lb || (VAR_10->p[VAR_10->c - 1] != 103 && VAR_10->p[VAR_10->c - 1] != 104)) { VAR_10->c = VAR_10->l - VAR_39; goto lab10; }
                    if (!(FUNC_1(VAR_10, VAR_2, 2))) { VAR_10->c = VAR_10->l - VAR_39; goto lab10; }
                    VAR_10->bra = VAR_10->c;
                    { int VAR_40 = FUNC_4(VAR_10);
                        if (VAR_40 == 0) { VAR_10->c = VAR_10->l - VAR_39; goto lab10; }
                        if (VAR_40 < 0) return VAR_40;
                    }
                    { int VAR_41 = FUNC_5(VAR_10);
                        if (VAR_41 < 0) return VAR_41;
                    }
                lab10:
                    ;
                }
                break;
        }
    lab3:
        VAR_10->c = VAR_10->l - VAR_24;
    }
    return 1;
}
