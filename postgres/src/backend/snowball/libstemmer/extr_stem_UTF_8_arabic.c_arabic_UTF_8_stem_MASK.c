
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int* B; int c; int lb; int l; int p; } ;


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
 int FUNC_13 (struct SN_env*) ;
 int FUNC_14 (struct SN_env*) ;
 int FUNC_15 (struct SN_env*) ;
 int FUNC_16 (struct SN_env*) ;
 int FUNC_17 (struct SN_env*) ;
 int FUNC_18 (struct SN_env*) ;
 int FUNC_19 (struct SN_env*) ;
 int FUNC_20 (struct SN_env*) ;
 int FUNC_21 (int ,int,int,int ,int) ;

extern int FUNC_22(struct SN_env * VAR_0) {
    VAR_0->B[0] = 1;
    VAR_0->B[1] = 1;
    VAR_0->B[2] = 0;
    { int VAR_1 = VAR_0->c;
        { int VAR_2 = FUNC_0(VAR_0);
            if (VAR_2 == 0) goto lab0;
            if (VAR_2 < 0) return VAR_2;
        }
    lab0:
        VAR_0->c = VAR_1;
    }

    { int VAR_3 = FUNC_2(VAR_0);
        if (VAR_3 == 0) goto lab1;
        if (VAR_3 < 0) return VAR_3;
    }
lab1:
    VAR_0->lb = VAR_0->c; VAR_0->c = VAR_0->l;

    { int VAR_4 = VAR_0->l - VAR_0->c; (void)VAR_4;
        { int VAR_5 = VAR_0->l - VAR_0->c; (void)VAR_5;
            if (!(VAR_0->B[1])) goto lab4;
            { int VAR_6 = VAR_0->l - VAR_0->c; (void)VAR_6;
                { int VAR_7 = 1;
                    while(1) {
                        int VAR_8 = VAR_0->l - VAR_0->c; (void)VAR_8;
                        { int VAR_9 = FUNC_17(VAR_0);
                            if (VAR_9 == 0) goto lab7;
                            if (VAR_9 < 0) return VAR_9;
                        }
                        VAR_7--;
                        continue;
                    lab7:
                        VAR_0->c = VAR_0->l - VAR_8;
                        break;
                    }
                    if (VAR_7 > 0) goto lab6;
                }
                { int VAR_10 = VAR_0->l - VAR_0->c; (void)VAR_10;
                    { int VAR_11 = FUNC_18(VAR_0);
                        if (VAR_11 == 0) goto lab9;
                        if (VAR_11 < 0) return VAR_11;
                    }
                    goto lab8;
                lab9:
                    VAR_0->c = VAR_0->l - VAR_10;
                    { int VAR_12 = FUNC_20(VAR_0);
                        if (VAR_12 == 0) goto lab10;
                        if (VAR_12 < 0) return VAR_12;
                    }
                    goto lab8;
                lab10:
                    VAR_0->c = VAR_0->l - VAR_10;
                    { int VAR_13 = FUNC_21(VAR_0->p, VAR_0->c, VAR_0->lb, 0, -1);
                        if (VAR_13 < 0) goto lab6;
                        VAR_0->c = VAR_13;
                    }
                }
            lab8:
                goto lab5;
            lab6:
                VAR_0->c = VAR_0->l - VAR_6;
                { int VAR_14 = FUNC_19(VAR_0);
                    if (VAR_14 == 0) goto lab11;
                    if (VAR_14 < 0) return VAR_14;
                }
                goto lab5;
            lab11:
                VAR_0->c = VAR_0->l - VAR_6;
                { int VAR_15 = FUNC_18(VAR_0);
                    if (VAR_15 == 0) goto lab4;
                    if (VAR_15 < 0) return VAR_15;
                }
            }
        lab5:
            goto lab3;
        lab4:
            VAR_0->c = VAR_0->l - VAR_5;
            if (!(VAR_0->B[0])) goto lab12;
            { int VAR_16 = VAR_0->l - VAR_0->c; (void)VAR_16;
                { int VAR_17 = VAR_0->l - VAR_0->c; (void)VAR_17;
                    { int VAR_18 = FUNC_15(VAR_0);
                        if (VAR_18 == 0) goto lab15;
                        if (VAR_18 < 0) return VAR_18;
                    }
                    goto lab14;
                lab15:
                    VAR_0->c = VAR_0->l - VAR_17;

                    if (!(VAR_0->B[2])) goto lab17;
                    goto lab16;
                lab17:
                    { int VAR_19 = FUNC_10(VAR_0);
                        if (VAR_19 == 0) goto lab16;
                        if (VAR_19 < 0) return VAR_19;
                    }
                    { int VAR_20 = VAR_0->l - VAR_0->c; (void)VAR_20;
                        { int VAR_21 = FUNC_12(VAR_0);
                            if (VAR_21 == 0) goto lab19;
                            if (VAR_21 < 0) return VAR_21;
                        }
                        goto lab18;
                    lab19:
                        VAR_0->c = VAR_0->l - VAR_20;
                        { int VAR_22 = FUNC_13(VAR_0);
                            if (VAR_22 == 0) goto lab20;
                            if (VAR_22 < 0) return VAR_22;
                        }
                        goto lab18;
                    lab20:
                        VAR_0->c = VAR_0->l - VAR_20;
                        { int VAR_23 = FUNC_14(VAR_0);
                            if (VAR_23 == 0) goto lab21;
                            if (VAR_23 < 0) return VAR_23;
                        }
                        goto lab18;
                    lab21:
                        VAR_0->c = VAR_0->l - VAR_20;
                        { int VAR_24 = FUNC_21(VAR_0->p, VAR_0->c, VAR_0->lb, 0, -1);
                            if (VAR_24 < 0) goto lab16;
                            VAR_0->c = VAR_24;
                        }
                    }
                lab18:
                    goto lab14;
                lab16:
                    VAR_0->c = VAR_0->l - VAR_17;
                    { int VAR_25 = FUNC_11(VAR_0);
                        if (VAR_25 == 0) goto lab22;
                        if (VAR_25 < 0) return VAR_25;
                    }
                    { int VAR_26 = VAR_0->l - VAR_0->c; (void)VAR_26;
                        { int VAR_27 = FUNC_12(VAR_0);
                            if (VAR_27 == 0) goto lab24;
                            if (VAR_27 < 0) return VAR_27;
                        }
                        goto lab23;
                    lab24:
                        VAR_0->c = VAR_0->l - VAR_26;
                        { int VAR_28 = FUNC_13(VAR_0);
                            if (VAR_28 == 0) goto lab25;
                            if (VAR_28 < 0) return VAR_28;
                        }
                        goto lab23;
                    lab25:
                        VAR_0->c = VAR_0->l - VAR_26;
                        { int VAR_29 = FUNC_14(VAR_0);
                            if (VAR_29 == 0) goto lab22;
                            if (VAR_29 < 0) return VAR_29;
                        }
                    }
                lab23:
                    goto lab14;
                lab22:
                    VAR_0->c = VAR_0->l - VAR_17;

                    if (!(VAR_0->B[2])) goto lab27;
                    goto lab26;
                lab27:
                    { int VAR_30 = FUNC_12(VAR_0);
                        if (VAR_30 == 0) goto lab26;
                        if (VAR_30 < 0) return VAR_30;
                    }
                    goto lab14;
                lab26:
                    VAR_0->c = VAR_0->l - VAR_17;
                    { int VAR_31 = FUNC_13(VAR_0);
                        if (VAR_31 == 0) { VAR_0->c = VAR_0->l - VAR_16; goto lab13; }
                        if (VAR_31 < 0) return VAR_31;
                    }
                }
            lab14:
            lab13:
                ;
            }
            { int VAR_32 = FUNC_16(VAR_0);
                if (VAR_32 == 0) goto lab12;
                if (VAR_32 < 0) return VAR_32;
            }
            goto lab3;
        lab12:
            VAR_0->c = VAR_0->l - VAR_5;
            { int VAR_33 = FUNC_9(VAR_0);
                if (VAR_33 == 0) goto lab2;
                if (VAR_33 < 0) return VAR_33;
            }
        }
    lab3:
    lab2:
        VAR_0->c = VAR_0->l - VAR_4;
    }
    VAR_0->c = VAR_0->lb;
    { int VAR_34 = VAR_0->c;
        { int VAR_35 = VAR_0->c;
            { int VAR_36 = FUNC_3(VAR_0);
                if (VAR_36 == 0) { VAR_0->c = VAR_35; goto lab29; }
                if (VAR_36 < 0) return VAR_36;
            }
        lab29:
            ;
        }
        { int VAR_37 = VAR_0->c;
            { int VAR_38 = FUNC_4(VAR_0);
                if (VAR_38 == 0) { VAR_0->c = VAR_37; goto lab30; }
                if (VAR_38 < 0) return VAR_38;
            }
        lab30:
            ;
        }
        { int VAR_39 = VAR_0->c;
            { int VAR_40 = FUNC_6(VAR_0);
                if (VAR_40 == 0) goto lab32;
                if (VAR_40 < 0) return VAR_40;
            }
            goto lab31;
        lab32:
            VAR_0->c = VAR_39;
            if (!(VAR_0->B[0])) goto lab33;
            { int VAR_41 = FUNC_7(VAR_0);
                if (VAR_41 == 0) goto lab33;
                if (VAR_41 < 0) return VAR_41;
            }
            goto lab31;
        lab33:
            VAR_0->c = VAR_39;
            if (!(VAR_0->B[1])) goto lab28;
            { int VAR_42 = VAR_0->c;
                { int VAR_43 = FUNC_5(VAR_0);
                    if (VAR_43 == 0) { VAR_0->c = VAR_42; goto lab34; }
                    if (VAR_43 < 0) return VAR_43;
                }
            lab34:
                ;
            }
            { int VAR_44 = FUNC_8(VAR_0);
                if (VAR_44 == 0) goto lab28;
                if (VAR_44 < 0) return VAR_44;
            }
        }
    lab31:
    lab28:
        VAR_0->c = VAR_34;
    }

    { int VAR_45 = FUNC_1(VAR_0);
        if (VAR_45 == 0) goto lab35;
        if (VAR_45 < 0) return VAR_45;
    }
lab35:
    return 1;
}
