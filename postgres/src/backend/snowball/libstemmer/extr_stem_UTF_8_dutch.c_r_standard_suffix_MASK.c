
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int l; int c; int ket; int lb; int* p; size_t bra; int * B; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct SN_env*,int,int ) ;
 int FUNC_1 (struct SN_env*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct SN_env*,int ,int,int,int ) ;
 int FUNC_3 (struct SN_env*) ;
 int FUNC_4 (struct SN_env*) ;
 int FUNC_5 (struct SN_env*) ;
 int FUNC_6 (struct SN_env*) ;
 int FUNC_7 (struct SN_env*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int*,int,int,int ,int) ;
 int FUNC_9 (struct SN_env*) ;
 int FUNC_10 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_11(struct SN_env * VAR_10) {
    int VAR_11;
    { int VAR_12 = VAR_10->l - VAR_10->c; (void)VAR_12;
        VAR_10->ket = VAR_10->c;
        if (VAR_10->c <= VAR_10->lb || VAR_10->p[VAR_10->c - 1] >> 5 != 3 || !((540704 >> (VAR_10->p[VAR_10->c - 1] & 0x1f)) & 1)) goto lab0;
        VAR_11 = FUNC_1(VAR_10, VAR_0, 5);
        if (!(VAR_11)) goto lab0;
        VAR_10->bra = VAR_10->c;
        switch (VAR_11) {
            case 1:
                { int VAR_13 = FUNC_3(VAR_10);
                    if (VAR_13 == 0) goto lab0;
                    if (VAR_13 < 0) return VAR_13;
                }
                { int VAR_14 = FUNC_10(VAR_10, 4, VAR_6);
                    if (VAR_14 < 0) return VAR_14;
                }
                break;
            case 2:
                { int VAR_15 = FUNC_6(VAR_10);
                    if (VAR_15 == 0) goto lab0;
                    if (VAR_15 < 0) return VAR_15;
                }
                break;
            case 3:
                { int VAR_16 = FUNC_3(VAR_10);
                    if (VAR_16 == 0) goto lab0;
                    if (VAR_16 < 0) return VAR_16;
                }
                if (FUNC_2(VAR_10, VAR_5, 97, 232, 0)) goto lab0;
                { int VAR_17 = FUNC_9(VAR_10);
                    if (VAR_17 < 0) return VAR_17;
                }
                break;
        }
    lab0:
        VAR_10->c = VAR_10->l - VAR_12;
    }
    { int VAR_18 = VAR_10->l - VAR_10->c; (void)VAR_18;
        { int VAR_19 = FUNC_5(VAR_10);
            if (VAR_19 == 0) goto lab1;
            if (VAR_19 < 0) return VAR_19;
        }
    lab1:
        VAR_10->c = VAR_10->l - VAR_18;
    }
    { int VAR_20 = VAR_10->l - VAR_10->c; (void)VAR_20;
        VAR_10->ket = VAR_10->c;
        if (!(FUNC_0(VAR_10, 4, VAR_7))) goto lab2;
        VAR_10->bra = VAR_10->c;
        { int VAR_21 = FUNC_4(VAR_10);
            if (VAR_21 == 0) goto lab2;
            if (VAR_21 < 0) return VAR_21;
        }
        { int VAR_22 = VAR_10->l - VAR_10->c; (void)VAR_22;
            if (VAR_10->c <= VAR_10->lb || VAR_10->p[VAR_10->c - 1] != 'c') goto lab3;
            VAR_10->c--;
            goto lab2;
        lab3:
            VAR_10->c = VAR_10->l - VAR_22;
        }
        { int VAR_23 = FUNC_9(VAR_10);
            if (VAR_23 < 0) return VAR_23;
        }
        VAR_10->ket = VAR_10->c;
        if (!(FUNC_0(VAR_10, 2, VAR_8))) goto lab2;
        VAR_10->bra = VAR_10->c;
        { int VAR_24 = FUNC_6(VAR_10);
            if (VAR_24 == 0) goto lab2;
            if (VAR_24 < 0) return VAR_24;
        }
    lab2:
        VAR_10->c = VAR_10->l - VAR_20;
    }
    { int VAR_25 = VAR_10->l - VAR_10->c; (void)VAR_25;
        VAR_10->ket = VAR_10->c;
        if (VAR_10->c - 1 <= VAR_10->lb || VAR_10->p[VAR_10->c - 1] >> 5 != 3 || !((264336 >> (VAR_10->p[VAR_10->c - 1] & 0x1f)) & 1)) goto lab4;
        VAR_11 = FUNC_1(VAR_10, VAR_1, 6);
        if (!(VAR_11)) goto lab4;
        VAR_10->bra = VAR_10->c;
        switch (VAR_11) {
            case 1:
                { int VAR_26 = FUNC_4(VAR_10);
                    if (VAR_26 == 0) goto lab4;
                    if (VAR_26 < 0) return VAR_26;
                }
                { int VAR_27 = FUNC_9(VAR_10);
                    if (VAR_27 < 0) return VAR_27;
                }
                { int VAR_28 = VAR_10->l - VAR_10->c; (void)VAR_28;
                    VAR_10->ket = VAR_10->c;
                    if (!(FUNC_0(VAR_10, 2, VAR_9))) goto lab6;
                    VAR_10->bra = VAR_10->c;
                    { int VAR_29 = FUNC_4(VAR_10);
                        if (VAR_29 == 0) goto lab6;
                        if (VAR_29 < 0) return VAR_29;
                    }
                    { int VAR_30 = VAR_10->l - VAR_10->c; (void)VAR_30;
                        if (VAR_10->c <= VAR_10->lb || VAR_10->p[VAR_10->c - 1] != 'e') goto lab7;
                        VAR_10->c--;
                        goto lab6;
                    lab7:
                        VAR_10->c = VAR_10->l - VAR_30;
                    }
                    { int VAR_31 = FUNC_9(VAR_10);
                        if (VAR_31 < 0) return VAR_31;
                    }
                    goto lab5;
                lab6:
                    VAR_10->c = VAR_10->l - VAR_28;
                    { int VAR_32 = FUNC_7(VAR_10);
                        if (VAR_32 == 0) goto lab4;
                        if (VAR_32 < 0) return VAR_32;
                    }
                }
            lab5:
                break;
            case 2:
                { int VAR_33 = FUNC_4(VAR_10);
                    if (VAR_33 == 0) goto lab4;
                    if (VAR_33 < 0) return VAR_33;
                }
                { int VAR_34 = VAR_10->l - VAR_10->c; (void)VAR_34;
                    if (VAR_10->c <= VAR_10->lb || VAR_10->p[VAR_10->c - 1] != 'e') goto lab8;
                    VAR_10->c--;
                    goto lab4;
                lab8:
                    VAR_10->c = VAR_10->l - VAR_34;
                }
                { int VAR_35 = FUNC_9(VAR_10);
                    if (VAR_35 < 0) return VAR_35;
                }
                break;
            case 3:
                { int VAR_36 = FUNC_4(VAR_10);
                    if (VAR_36 == 0) goto lab4;
                    if (VAR_36 < 0) return VAR_36;
                }
                { int VAR_37 = FUNC_9(VAR_10);
                    if (VAR_37 < 0) return VAR_37;
                }
                { int VAR_38 = FUNC_5(VAR_10);
                    if (VAR_38 == 0) goto lab4;
                    if (VAR_38 < 0) return VAR_38;
                }
                break;
            case 4:
                { int VAR_39 = FUNC_4(VAR_10);
                    if (VAR_39 == 0) goto lab4;
                    if (VAR_39 < 0) return VAR_39;
                }
                { int VAR_40 = FUNC_9(VAR_10);
                    if (VAR_40 < 0) return VAR_40;
                }
                break;
            case 5:
                { int VAR_41 = FUNC_4(VAR_10);
                    if (VAR_41 == 0) goto lab4;
                    if (VAR_41 < 0) return VAR_41;
                }
                if (!(VAR_10->B[0])) goto lab4;
                { int VAR_42 = FUNC_9(VAR_10);
                    if (VAR_42 < 0) return VAR_42;
                }
                break;
        }
    lab4:
        VAR_10->c = VAR_10->l - VAR_25;
    }
    { int VAR_43 = VAR_10->l - VAR_10->c; (void)VAR_43;
        if (FUNC_2(VAR_10, VAR_4, 73, 232, 0)) goto lab9;
        { int VAR_44 = VAR_10->l - VAR_10->c;
            if (VAR_10->c - 1 <= VAR_10->lb || VAR_10->p[VAR_10->c - 1] >> 5 != 3 || !((2129954 >> (VAR_10->p[VAR_10->c - 1] & 0x1f)) & 1)) goto lab9;
            if (!(FUNC_1(VAR_10, VAR_2, 4))) goto lab9;
            if (FUNC_2(VAR_10, VAR_3, 97, 232, 0)) goto lab9;
            VAR_10->c = VAR_10->l - VAR_44;
        }
        VAR_10->ket = VAR_10->c;
        { int VAR_45 = FUNC_8(VAR_10->p, VAR_10->c, VAR_10->lb, 0, -1);
            if (VAR_45 < 0) goto lab9;
            VAR_10->c = VAR_45;
        }
        VAR_10->bra = VAR_10->c;
        { int VAR_46 = FUNC_9(VAR_10);
            if (VAR_46 < 0) return VAR_46;
        }
    lab9:
        VAR_10->c = VAR_10->l - VAR_43;
    }
    return 1;
}
