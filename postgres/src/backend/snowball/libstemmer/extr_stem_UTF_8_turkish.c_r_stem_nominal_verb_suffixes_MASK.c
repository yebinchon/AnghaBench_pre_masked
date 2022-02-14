
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int ket; int c; int* B; int l; int bra; } ;


 int FUNC_0 (struct SN_env*) ;
 int FUNC_1 (struct SN_env*) ;
 int FUNC_2 (struct SN_env*) ;
 int FUNC_3 (struct SN_env*) ;
 int FUNC_4 (struct SN_env*) ;
 int FUNC_5 (struct SN_env*) ;
 int FUNC_6 (struct SN_env*) ;
 int FUNC_7 (struct SN_env*) ;
 int FUNC_8 (struct SN_env*) ;
 int FUNC_9 (struct SN_env*) ;
 int FUNC_10 (struct SN_env*) ;
 int FUNC_11 (struct SN_env*) ;
 int FUNC_12 (struct SN_env*) ;

__attribute__((used)) static int FUNC_13(struct SN_env * VAR_0) {
    VAR_0->ket = VAR_0->c;
    VAR_0->B[0] = 1;
    { int VAR_1 = VAR_0->l - VAR_0->c; (void)VAR_1;
        { int VAR_2 = VAR_0->l - VAR_0->c; (void)VAR_2;
            { int VAR_3 = FUNC_10(VAR_0);
                if (VAR_3 == 0) goto lab3;
                if (VAR_3 < 0) return VAR_3;
            }
            goto lab2;
        lab3:
            VAR_0->c = VAR_0->l - VAR_2;
            { int VAR_4 = FUNC_6(VAR_0);
                if (VAR_4 == 0) goto lab4;
                if (VAR_4 < 0) return VAR_4;
            }
            goto lab2;
        lab4:
            VAR_0->c = VAR_0->l - VAR_2;
            { int VAR_5 = FUNC_11(VAR_0);
                if (VAR_5 == 0) goto lab5;
                if (VAR_5 < 0) return VAR_5;
            }
            goto lab2;
        lab5:
            VAR_0->c = VAR_0->l - VAR_2;
            { int VAR_6 = FUNC_9(VAR_0);
                if (VAR_6 == 0) goto lab1;
                if (VAR_6 < 0) return VAR_6;
            }
        }
    lab2:
        goto lab0;
    lab1:
        VAR_0->c = VAR_0->l - VAR_1;
        { int VAR_7 = FUNC_1(VAR_0);
            if (VAR_7 == 0) goto lab6;
            if (VAR_7 < 0) return VAR_7;
        }
        { int VAR_8 = VAR_0->l - VAR_0->c; (void)VAR_8;
            { int VAR_9 = FUNC_5(VAR_0);
                if (VAR_9 == 0) goto lab8;
                if (VAR_9 < 0) return VAR_9;
            }
            goto lab7;
        lab8:
            VAR_0->c = VAR_0->l - VAR_8;
            { int VAR_10 = FUNC_2(VAR_0);
                if (VAR_10 == 0) goto lab9;
                if (VAR_10 < 0) return VAR_10;
            }
            goto lab7;
        lab9:
            VAR_0->c = VAR_0->l - VAR_8;
            { int VAR_11 = FUNC_7(VAR_0);
                if (VAR_11 == 0) goto lab10;
                if (VAR_11 < 0) return VAR_11;
            }
            goto lab7;
        lab10:
            VAR_0->c = VAR_0->l - VAR_8;
            { int VAR_12 = FUNC_4(VAR_0);
                if (VAR_12 == 0) goto lab11;
                if (VAR_12 < 0) return VAR_12;
            }
            goto lab7;
        lab11:
            VAR_0->c = VAR_0->l - VAR_8;
            { int VAR_13 = FUNC_8(VAR_0);
                if (VAR_13 == 0) goto lab12;
                if (VAR_13 < 0) return VAR_13;
            }
            goto lab7;
        lab12:
            VAR_0->c = VAR_0->l - VAR_8;
        }
    lab7:
        { int VAR_14 = FUNC_10(VAR_0);
            if (VAR_14 == 0) goto lab6;
            if (VAR_14 < 0) return VAR_14;
        }
        goto lab0;
    lab6:
        VAR_0->c = VAR_0->l - VAR_1;
        { int VAR_15 = FUNC_2(VAR_0);
            if (VAR_15 == 0) goto lab13;
            if (VAR_15 < 0) return VAR_15;
        }
        VAR_0->bra = VAR_0->c;
        { int VAR_16 = FUNC_12(VAR_0);
            if (VAR_16 < 0) return VAR_16;
        }
        { int VAR_17 = VAR_0->l - VAR_0->c; (void)VAR_17;
            VAR_0->ket = VAR_0->c;
            { int VAR_18 = VAR_0->l - VAR_0->c; (void)VAR_18;
                { int VAR_19 = FUNC_0(VAR_0);
                    if (VAR_19 == 0) goto lab16;
                    if (VAR_19 < 0) return VAR_19;
                }
                goto lab15;
            lab16:
                VAR_0->c = VAR_0->l - VAR_18;
                { int VAR_20 = FUNC_6(VAR_0);
                    if (VAR_20 == 0) goto lab17;
                    if (VAR_20 < 0) return VAR_20;
                }
                goto lab15;
            lab17:
                VAR_0->c = VAR_0->l - VAR_18;
                { int VAR_21 = FUNC_11(VAR_0);
                    if (VAR_21 == 0) goto lab18;
                    if (VAR_21 < 0) return VAR_21;
                }
                goto lab15;
            lab18:
                VAR_0->c = VAR_0->l - VAR_18;
                { int VAR_22 = FUNC_10(VAR_0);
                    if (VAR_22 == 0) { VAR_0->c = VAR_0->l - VAR_17; goto lab14; }
                    if (VAR_22 < 0) return VAR_22;
                }
            }
        lab15:
        lab14:
            ;
        }
        VAR_0->B[0] = 0;
        goto lab0;
    lab13:
        VAR_0->c = VAR_0->l - VAR_1;
        { int VAR_23 = FUNC_3(VAR_0);
            if (VAR_23 == 0) goto lab19;
            if (VAR_23 < 0) return VAR_23;
        }
        { int VAR_24 = VAR_0->l - VAR_0->c; (void)VAR_24;
            { int VAR_25 = FUNC_6(VAR_0);
                if (VAR_25 == 0) goto lab21;
                if (VAR_25 < 0) return VAR_25;
            }
            goto lab20;
        lab21:
            VAR_0->c = VAR_0->l - VAR_24;
            { int VAR_26 = FUNC_11(VAR_0);
                if (VAR_26 == 0) goto lab19;
                if (VAR_26 < 0) return VAR_26;
            }
        }
    lab20:
        goto lab0;
    lab19:
        VAR_0->c = VAR_0->l - VAR_1;
        { int VAR_27 = VAR_0->l - VAR_0->c; (void)VAR_27;
            { int VAR_28 = FUNC_5(VAR_0);
                if (VAR_28 == 0) goto lab24;
                if (VAR_28 < 0) return VAR_28;
            }
            goto lab23;
        lab24:
            VAR_0->c = VAR_0->l - VAR_27;
            { int VAR_29 = FUNC_8(VAR_0);
                if (VAR_29 == 0) goto lab25;
                if (VAR_29 < 0) return VAR_29;
            }
            goto lab23;
        lab25:
            VAR_0->c = VAR_0->l - VAR_27;
            { int VAR_30 = FUNC_4(VAR_0);
                if (VAR_30 == 0) goto lab26;
                if (VAR_30 < 0) return VAR_30;
            }
            goto lab23;
        lab26:
            VAR_0->c = VAR_0->l - VAR_27;
            { int VAR_31 = FUNC_7(VAR_0);
                if (VAR_31 == 0) goto lab22;
                if (VAR_31 < 0) return VAR_31;
            }
        }
    lab23:
        VAR_0->bra = VAR_0->c;
        { int VAR_32 = FUNC_12(VAR_0);
            if (VAR_32 < 0) return VAR_32;
        }
        { int VAR_33 = VAR_0->l - VAR_0->c; (void)VAR_33;
            VAR_0->ket = VAR_0->c;
            { int VAR_34 = FUNC_10(VAR_0);
                if (VAR_34 == 0) { VAR_0->c = VAR_0->l - VAR_33; goto lab27; }
                if (VAR_34 < 0) return VAR_34;
            }
        lab27:
            ;
        }
        goto lab0;
    lab22:
        VAR_0->c = VAR_0->l - VAR_1;
        { int VAR_35 = FUNC_0(VAR_0);
            if (VAR_35 <= 0) return VAR_35;
        }
        VAR_0->bra = VAR_0->c;
        { int VAR_36 = FUNC_12(VAR_0);
            if (VAR_36 < 0) return VAR_36;
        }
        { int VAR_37 = VAR_0->l - VAR_0->c; (void)VAR_37;
            VAR_0->ket = VAR_0->c;
            { int VAR_38 = VAR_0->l - VAR_0->c; (void)VAR_38;
                { int VAR_39 = FUNC_5(VAR_0);
                    if (VAR_39 == 0) goto lab30;
                    if (VAR_39 < 0) return VAR_39;
                }
                goto lab29;
            lab30:
                VAR_0->c = VAR_0->l - VAR_38;
                { int VAR_40 = FUNC_2(VAR_0);
                    if (VAR_40 == 0) goto lab31;
                    if (VAR_40 < 0) return VAR_40;
                }
                goto lab29;
            lab31:
                VAR_0->c = VAR_0->l - VAR_38;
                { int VAR_41 = FUNC_7(VAR_0);
                    if (VAR_41 == 0) goto lab32;
                    if (VAR_41 < 0) return VAR_41;
                }
                goto lab29;
            lab32:
                VAR_0->c = VAR_0->l - VAR_38;
                { int VAR_42 = FUNC_4(VAR_0);
                    if (VAR_42 == 0) goto lab33;
                    if (VAR_42 < 0) return VAR_42;
                }
                goto lab29;
            lab33:
                VAR_0->c = VAR_0->l - VAR_38;
                { int VAR_43 = FUNC_8(VAR_0);
                    if (VAR_43 == 0) goto lab34;
                    if (VAR_43 < 0) return VAR_43;
                }
                goto lab29;
            lab34:
                VAR_0->c = VAR_0->l - VAR_38;
            }
        lab29:
            { int VAR_44 = FUNC_10(VAR_0);
                if (VAR_44 == 0) { VAR_0->c = VAR_0->l - VAR_37; goto lab28; }
                if (VAR_44 < 0) return VAR_44;
            }
        lab28:
            ;
        }
    }
lab0:
    VAR_0->bra = VAR_0->c;
    { int VAR_45 = FUNC_12(VAR_0);
        if (VAR_45 < 0) return VAR_45;
    }
    return 1;
}
