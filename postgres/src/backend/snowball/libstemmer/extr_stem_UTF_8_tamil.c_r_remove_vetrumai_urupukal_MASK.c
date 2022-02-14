
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int* B; int lb; int c; int l; int ket; int bra; int p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct SN_env*,int,int ) ;
 int FUNC_1 (struct SN_env*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct SN_env*) ;
 int FUNC_4 (struct SN_env*) ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_5 (struct SN_env*) ;
 int FUNC_6 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct SN_env * VAR_37) {
    VAR_37->B[0] = 0;
    VAR_37->B[1] = 0;
    { int VAR_38 = FUNC_4(VAR_37);
        if (VAR_38 <= 0) return VAR_38;
    }
    VAR_37->lb = VAR_37->c; VAR_37->c = VAR_37->l;

    { int VAR_39 = VAR_37->l - VAR_37->c; (void)VAR_39;
        { int VAR_40 = VAR_37->l - VAR_37->c;
            VAR_37->ket = VAR_37->c;
            if (!(FUNC_0(VAR_37, 6, VAR_8))) goto lab1;
            VAR_37->bra = VAR_37->c;
            { int VAR_41 = FUNC_5(VAR_37);
                if (VAR_41 < 0) return VAR_41;
            }
            VAR_37->c = VAR_37->l - VAR_40;
        }
        goto lab0;
    lab1:
        VAR_37->c = VAR_37->l - VAR_39;
        { int VAR_42 = VAR_37->l - VAR_37->c;
            VAR_37->ket = VAR_37->c;
            { int VAR_43 = VAR_37->l - VAR_37->c; (void)VAR_43;
                { int VAR_44 = VAR_37->l - VAR_37->c; (void)VAR_44;
                    if (!(FUNC_0(VAR_37, 9, VAR_9))) goto lab6;
                    goto lab5;
                lab6:
                    VAR_37->c = VAR_37->l - VAR_44;
                    if (!(FUNC_0(VAR_37, 3, VAR_10))) goto lab4;
                }
            lab5:
                { int VAR_45 = VAR_37->l - VAR_37->c;
                    { int VAR_46 = VAR_37->l - VAR_37->c; (void)VAR_46;
                        if (!(FUNC_1(VAR_37, VAR_0, 6))) goto lab7;
                        goto lab4;
                    lab7:
                        VAR_37->c = VAR_37->l - VAR_46;
                    }
                    VAR_37->c = VAR_37->l - VAR_45;
                }
                goto lab3;
            lab4:
                VAR_37->c = VAR_37->l - VAR_43;
                if (!(FUNC_0(VAR_37, 3, VAR_11))) goto lab2;
                { int VAR_47 = VAR_37->l - VAR_37->c;
                    if (!(FUNC_1(VAR_37, VAR_1, 6))) goto lab2;
                    if (!(FUNC_0(VAR_37, 3, VAR_12))) goto lab2;
                    VAR_37->c = VAR_37->l - VAR_47;
                }
            }
        lab3:
            VAR_37->bra = VAR_37->c;
            { int VAR_48 = FUNC_6(VAR_37, 3, VAR_13);
                if (VAR_48 < 0) return VAR_48;
            }
            VAR_37->c = VAR_37->l - VAR_42;
        }
        goto lab0;
    lab2:
        VAR_37->c = VAR_37->l - VAR_39;
        { int VAR_49 = VAR_37->l - VAR_37->c;
            VAR_37->ket = VAR_37->c;
            { int VAR_50 = VAR_37->l - VAR_37->c; (void)VAR_50;
                if (!(FUNC_0(VAR_37, 9, VAR_14))) goto lab10;
                goto lab9;
            lab10:
                VAR_37->c = VAR_37->l - VAR_50;
                if (!(FUNC_0(VAR_37, 9, VAR_15))) goto lab11;
                goto lab9;
            lab11:
                VAR_37->c = VAR_37->l - VAR_50;
                if (!(FUNC_0(VAR_37, 9, VAR_16))) goto lab12;
                goto lab9;
            lab12:
                VAR_37->c = VAR_37->l - VAR_50;
                if (!(FUNC_0(VAR_37, 9, VAR_17))) goto lab13;
                goto lab9;
            lab13:
                VAR_37->c = VAR_37->l - VAR_50;
                if (!(FUNC_0(VAR_37, 9, VAR_18))) goto lab14;
                { int VAR_51 = VAR_37->l - VAR_37->c;
                    { int VAR_52 = VAR_37->l - VAR_37->c; (void)VAR_52;
                        if (!(FUNC_0(VAR_37, 3, VAR_19))) goto lab15;
                        goto lab14;
                    lab15:
                        VAR_37->c = VAR_37->l - VAR_52;
                    }
                    VAR_37->c = VAR_37->l - VAR_51;
                }
                goto lab9;
            lab14:
                VAR_37->c = VAR_37->l - VAR_50;
                if (!(FUNC_0(VAR_37, 15, VAR_20))) goto lab16;
                goto lab9;
            lab16:
                VAR_37->c = VAR_37->l - VAR_50;
                if (!(FUNC_0(VAR_37, 21, VAR_21))) goto lab17;
                goto lab9;
            lab17:
                VAR_37->c = VAR_37->l - VAR_50;
                if (!(FUNC_0(VAR_37, 9, VAR_22))) goto lab18;
                goto lab9;
            lab18:
                VAR_37->c = VAR_37->l - VAR_50;
                if (!(FUNC_2(VAR_37->p) >= 7)) goto lab19;
                if (!(FUNC_0(VAR_37, 12, VAR_23))) goto lab19;
                goto lab9;
            lab19:
                VAR_37->c = VAR_37->l - VAR_50;
                if (!(FUNC_0(VAR_37, 9, VAR_24))) goto lab20;
                goto lab9;
            lab20:
                VAR_37->c = VAR_37->l - VAR_50;
                if (!(FUNC_0(VAR_37, 9, VAR_25))) goto lab21;
                goto lab9;
            lab21:
                VAR_37->c = VAR_37->l - VAR_50;
                if (!(FUNC_0(VAR_37, 12, VAR_26))) goto lab22;
                goto lab9;
            lab22:
                VAR_37->c = VAR_37->l - VAR_50;
                if (!(FUNC_0(VAR_37, 6, VAR_27))) goto lab23;
                { int VAR_53 = VAR_37->l - VAR_37->c;
                    { int VAR_54 = VAR_37->l - VAR_37->c; (void)VAR_54;
                        if (!(FUNC_1(VAR_37, VAR_2, 8))) goto lab24;
                        goto lab23;
                    lab24:
                        VAR_37->c = VAR_37->l - VAR_54;
                    }
                    VAR_37->c = VAR_37->l - VAR_53;
                }
                goto lab9;
            lab23:
                VAR_37->c = VAR_37->l - VAR_50;
                if (!(FUNC_0(VAR_37, 9, VAR_28))) goto lab8;
            }
        lab9:
            VAR_37->bra = VAR_37->c;
            { int VAR_55 = FUNC_6(VAR_37, 3, VAR_29);
                if (VAR_55 < 0) return VAR_55;
            }
            VAR_37->c = VAR_37->l - VAR_49;
        }
        goto lab0;
    lab8:
        VAR_37->c = VAR_37->l - VAR_39;
        { int VAR_56 = VAR_37->l - VAR_37->c;
            VAR_37->ket = VAR_37->c;
            { int VAR_57 = VAR_37->l - VAR_37->c; (void)VAR_57;
                if (!(FUNC_0(VAR_37, 9, VAR_30))) goto lab27;
                goto lab26;
            lab27:
                VAR_37->c = VAR_37->l - VAR_57;
                if (!(FUNC_0(VAR_37, 12, VAR_31))) goto lab28;
                goto lab26;
            lab28:
                VAR_37->c = VAR_37->l - VAR_57;
                if (!(FUNC_0(VAR_37, 12, VAR_32))) goto lab29;
                goto lab26;
            lab29:
                VAR_37->c = VAR_37->l - VAR_57;
                if (!(FUNC_0(VAR_37, 12, VAR_33))) goto lab30;
                goto lab26;
            lab30:
                VAR_37->c = VAR_37->l - VAR_57;
                if (!(FUNC_0(VAR_37, 12, VAR_34))) goto lab31;
                goto lab26;
            lab31:
                VAR_37->c = VAR_37->l - VAR_57;
                if (!(FUNC_0(VAR_37, 12, VAR_35))) goto lab32;
                goto lab26;
            lab32:
                VAR_37->c = VAR_37->l - VAR_57;
                if (!(FUNC_0(VAR_37, 6, VAR_36))) goto lab25;
                { int VAR_58 = VAR_37->l - VAR_37->c;
                    { int VAR_59 = VAR_37->l - VAR_37->c; (void)VAR_59;
                        if (!(FUNC_1(VAR_37, VAR_3, 8))) goto lab33;
                        goto lab25;
                    lab33:
                        VAR_37->c = VAR_37->l - VAR_59;
                    }
                    VAR_37->c = VAR_37->l - VAR_58;
                }
            }
        lab26:
            VAR_37->bra = VAR_37->c;
            { int VAR_60 = FUNC_5(VAR_37);
                if (VAR_60 < 0) return VAR_60;
            }
            VAR_37->c = VAR_37->l - VAR_56;
        }
        goto lab0;
    lab25:
        VAR_37->c = VAR_37->l - VAR_39;
        { int VAR_61 = VAR_37->l - VAR_37->c;
            VAR_37->ket = VAR_37->c;
            if (!(FUNC_0(VAR_37, 3, VAR_4))) return 0;
            VAR_37->bra = VAR_37->c;
            { int VAR_62 = FUNC_6(VAR_37, 3, VAR_5);
                if (VAR_62 < 0) return VAR_62;
            }
            VAR_37->c = VAR_37->l - VAR_61;
        }
    }
lab0:
    VAR_37->B[0] = 1;
    VAR_37->B[1] = 1;
    { int VAR_63 = VAR_37->l - VAR_37->c; (void)VAR_63;
        VAR_37->ket = VAR_37->c;
        if (!(FUNC_0(VAR_37, 9, VAR_6))) goto lab34;
        VAR_37->bra = VAR_37->c;
        { int VAR_64 = FUNC_6(VAR_37, 3, VAR_7);
            if (VAR_64 < 0) return VAR_64;
        }
    lab34:
        VAR_37->c = VAR_37->l - VAR_63;
    }
    VAR_37->c = VAR_37->lb;

    { int VAR_65 = FUNC_3(VAR_37);
        if (VAR_65 == 0) goto lab35;
        if (VAR_65 < 0) return VAR_65;
    }
lab35:
    return 1;
}
