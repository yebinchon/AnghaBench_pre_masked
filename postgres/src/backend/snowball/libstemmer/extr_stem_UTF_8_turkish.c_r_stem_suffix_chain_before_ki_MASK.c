
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int ket; int c; int l; int bra; } ;


 int FUNC_0 (struct SN_env*) ;
 int FUNC_1 (struct SN_env*) ;
 int FUNC_2 (struct SN_env*) ;
 int FUNC_3 (struct SN_env*) ;
 int FUNC_4 (struct SN_env*) ;
 int FUNC_5 (struct SN_env*) ;
 int FUNC_6 (struct SN_env*) ;
 int FUNC_7 (struct SN_env*) ;
 int FUNC_8 (struct SN_env*) ;

__attribute__((used)) static int FUNC_9(struct SN_env * VAR_0) {
    VAR_0->ket = VAR_0->c;
    { int VAR_1 = FUNC_1(VAR_0);
        if (VAR_1 <= 0) return VAR_1;
    }
    { int VAR_2 = VAR_0->l - VAR_0->c; (void)VAR_2;
        { int VAR_3 = FUNC_0(VAR_0);
            if (VAR_3 == 0) goto lab1;
            if (VAR_3 < 0) return VAR_3;
        }
        VAR_0->bra = VAR_0->c;
        { int VAR_4 = FUNC_8(VAR_0);
            if (VAR_4 < 0) return VAR_4;
        }
        { int VAR_5 = VAR_0->l - VAR_0->c; (void)VAR_5;
            VAR_0->ket = VAR_0->c;
            { int VAR_6 = VAR_0->l - VAR_0->c; (void)VAR_6;
                { int VAR_7 = FUNC_2(VAR_0);
                    if (VAR_7 == 0) goto lab4;
                    if (VAR_7 < 0) return VAR_7;
                }
                VAR_0->bra = VAR_0->c;
                { int VAR_8 = FUNC_8(VAR_0);
                    if (VAR_8 < 0) return VAR_8;
                }
                { int VAR_9 = VAR_0->l - VAR_0->c; (void)VAR_9;
                    { int VAR_10 = FUNC_9(VAR_0);
                        if (VAR_10 == 0) { VAR_0->c = VAR_0->l - VAR_9; goto lab5; }
                        if (VAR_10 < 0) return VAR_10;
                    }
                lab5:
                    ;
                }
                goto lab3;
            lab4:
                VAR_0->c = VAR_0->l - VAR_6;
                { int VAR_11 = FUNC_6(VAR_0);
                    if (VAR_11 == 0) { VAR_0->c = VAR_0->l - VAR_5; goto lab2; }
                    if (VAR_11 < 0) return VAR_11;
                }
                VAR_0->bra = VAR_0->c;
                { int VAR_12 = FUNC_8(VAR_0);
                    if (VAR_12 < 0) return VAR_12;
                }
                { int VAR_13 = VAR_0->l - VAR_0->c; (void)VAR_13;
                    VAR_0->ket = VAR_0->c;
                    { int VAR_14 = FUNC_2(VAR_0);
                        if (VAR_14 == 0) { VAR_0->c = VAR_0->l - VAR_13; goto lab6; }
                        if (VAR_14 < 0) return VAR_14;
                    }
                    VAR_0->bra = VAR_0->c;
                    { int VAR_15 = FUNC_8(VAR_0);
                        if (VAR_15 < 0) return VAR_15;
                    }
                    { int VAR_16 = FUNC_9(VAR_0);
                        if (VAR_16 == 0) { VAR_0->c = VAR_0->l - VAR_13; goto lab6; }
                        if (VAR_16 < 0) return VAR_16;
                    }
                lab6:
                    ;
                }
            }
        lab3:
        lab2:
            ;
        }
        goto lab0;
    lab1:
        VAR_0->c = VAR_0->l - VAR_2;
        { int VAR_17 = FUNC_4(VAR_0);
            if (VAR_17 == 0) goto lab7;
            if (VAR_17 < 0) return VAR_17;
        }
        VAR_0->bra = VAR_0->c;
        { int VAR_18 = FUNC_8(VAR_0);
            if (VAR_18 < 0) return VAR_18;
        }
        { int VAR_19 = VAR_0->l - VAR_0->c; (void)VAR_19;
            VAR_0->ket = VAR_0->c;
            { int VAR_20 = VAR_0->l - VAR_0->c; (void)VAR_20;
                { int VAR_21 = FUNC_3(VAR_0);
                    if (VAR_21 == 0) goto lab10;
                    if (VAR_21 < 0) return VAR_21;
                }
                VAR_0->bra = VAR_0->c;
                { int VAR_22 = FUNC_8(VAR_0);
                    if (VAR_22 < 0) return VAR_22;
                }
                goto lab9;
            lab10:
                VAR_0->c = VAR_0->l - VAR_20;
                VAR_0->ket = VAR_0->c;
                { int VAR_23 = VAR_0->l - VAR_0->c; (void)VAR_23;
                    { int VAR_24 = FUNC_6(VAR_0);
                        if (VAR_24 == 0) goto lab13;
                        if (VAR_24 < 0) return VAR_24;
                    }
                    goto lab12;
                lab13:
                    VAR_0->c = VAR_0->l - VAR_23;
                    { int VAR_25 = FUNC_7(VAR_0);
                        if (VAR_25 == 0) goto lab11;
                        if (VAR_25 < 0) return VAR_25;
                    }
                }
            lab12:
                VAR_0->bra = VAR_0->c;
                { int VAR_26 = FUNC_8(VAR_0);
                    if (VAR_26 < 0) return VAR_26;
                }
                { int VAR_27 = VAR_0->l - VAR_0->c; (void)VAR_27;
                    VAR_0->ket = VAR_0->c;
                    { int VAR_28 = FUNC_2(VAR_0);
                        if (VAR_28 == 0) { VAR_0->c = VAR_0->l - VAR_27; goto lab14; }
                        if (VAR_28 < 0) return VAR_28;
                    }
                    VAR_0->bra = VAR_0->c;
                    { int VAR_29 = FUNC_8(VAR_0);
                        if (VAR_29 < 0) return VAR_29;
                    }
                    { int VAR_30 = FUNC_9(VAR_0);
                        if (VAR_30 == 0) { VAR_0->c = VAR_0->l - VAR_27; goto lab14; }
                        if (VAR_30 < 0) return VAR_30;
                    }
                lab14:
                    ;
                }
                goto lab9;
            lab11:
                VAR_0->c = VAR_0->l - VAR_20;
                { int VAR_31 = FUNC_9(VAR_0);
                    if (VAR_31 == 0) { VAR_0->c = VAR_0->l - VAR_19; goto lab8; }
                    if (VAR_31 < 0) return VAR_31;
                }
            }
        lab9:
        lab8:
            ;
        }
        goto lab0;
    lab7:
        VAR_0->c = VAR_0->l - VAR_2;
        { int VAR_32 = FUNC_5(VAR_0);
            if (VAR_32 <= 0) return VAR_32;
        }
        { int VAR_33 = VAR_0->l - VAR_0->c; (void)VAR_33;
            { int VAR_34 = FUNC_3(VAR_0);
                if (VAR_34 == 0) goto lab16;
                if (VAR_34 < 0) return VAR_34;
            }
            VAR_0->bra = VAR_0->c;
            { int VAR_35 = FUNC_8(VAR_0);
                if (VAR_35 < 0) return VAR_35;
            }
            goto lab15;
        lab16:
            VAR_0->c = VAR_0->l - VAR_33;
            { int VAR_36 = FUNC_7(VAR_0);
                if (VAR_36 == 0) goto lab17;
                if (VAR_36 < 0) return VAR_36;
            }
            VAR_0->bra = VAR_0->c;
            { int VAR_37 = FUNC_8(VAR_0);
                if (VAR_37 < 0) return VAR_37;
            }
            { int VAR_38 = VAR_0->l - VAR_0->c; (void)VAR_38;
                VAR_0->ket = VAR_0->c;
                { int VAR_39 = FUNC_2(VAR_0);
                    if (VAR_39 == 0) { VAR_0->c = VAR_0->l - VAR_38; goto lab18; }
                    if (VAR_39 < 0) return VAR_39;
                }
                VAR_0->bra = VAR_0->c;
                { int VAR_40 = FUNC_8(VAR_0);
                    if (VAR_40 < 0) return VAR_40;
                }
                { int VAR_41 = FUNC_9(VAR_0);
                    if (VAR_41 == 0) { VAR_0->c = VAR_0->l - VAR_38; goto lab18; }
                    if (VAR_41 < 0) return VAR_41;
                }
            lab18:
                ;
            }
            goto lab15;
        lab17:
            VAR_0->c = VAR_0->l - VAR_33;
            { int VAR_42 = FUNC_9(VAR_0);
                if (VAR_42 <= 0) return VAR_42;
            }
        }
    lab15:
        ;
    }
lab0:
    return 1;
}
