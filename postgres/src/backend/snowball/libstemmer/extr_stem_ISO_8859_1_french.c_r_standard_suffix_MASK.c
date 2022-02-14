
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
 int VAR_3 ;
 int FUNC_2 (struct SN_env*,int ,int,int,int ) ;
 int FUNC_3 (struct SN_env*,int ,int,int,int ) ;
 int FUNC_4 (struct SN_env*) ;
 int FUNC_5 (struct SN_env*) ;
 int FUNC_6 (struct SN_env*) ;
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
 int FUNC_7 (struct SN_env*) ;
 int FUNC_8 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_9(struct SN_env * VAR_22) {
    int VAR_23;
    VAR_22->ket = VAR_22->c;
    VAR_23 = FUNC_1(VAR_22, VAR_2, 43);
    if (!(VAR_23)) return 0;
    VAR_22->bra = VAR_22->c;
    switch (VAR_23) {
        case 1:
            { int VAR_24 = FUNC_5(VAR_22);
                if (VAR_24 <= 0) return VAR_24;
            }
            { int VAR_25 = FUNC_7(VAR_22);
                if (VAR_25 < 0) return VAR_25;
            }
            break;
        case 2:
            { int VAR_26 = FUNC_5(VAR_22);
                if (VAR_26 <= 0) return VAR_26;
            }
            { int VAR_27 = FUNC_7(VAR_22);
                if (VAR_27 < 0) return VAR_27;
            }
            { int VAR_28 = VAR_22->l - VAR_22->c; (void)VAR_28;
                VAR_22->ket = VAR_22->c;
                if (!(FUNC_0(VAR_22, 2, VAR_4))) { VAR_22->c = VAR_22->l - VAR_28; goto lab0; }
                VAR_22->bra = VAR_22->c;
                { int VAR_29 = VAR_22->l - VAR_22->c; (void)VAR_29;
                    { int VAR_30 = FUNC_5(VAR_22);
                        if (VAR_30 == 0) goto lab2;
                        if (VAR_30 < 0) return VAR_30;
                    }
                    { int VAR_31 = FUNC_7(VAR_22);
                        if (VAR_31 < 0) return VAR_31;
                    }
                    goto lab1;
                lab2:
                    VAR_22->c = VAR_22->l - VAR_29;
                    { int VAR_32 = FUNC_8(VAR_22, 3, VAR_5);
                        if (VAR_32 < 0) return VAR_32;
                    }
                }
            lab1:
            lab0:
                ;
            }
            break;
        case 3:
            { int VAR_33 = FUNC_5(VAR_22);
                if (VAR_33 <= 0) return VAR_33;
            }
            { int VAR_34 = FUNC_8(VAR_22, 3, VAR_6);
                if (VAR_34 < 0) return VAR_34;
            }
            break;
        case 4:
            { int VAR_35 = FUNC_5(VAR_22);
                if (VAR_35 <= 0) return VAR_35;
            }
            { int VAR_36 = FUNC_8(VAR_22, 1, VAR_7);
                if (VAR_36 < 0) return VAR_36;
            }
            break;
        case 5:
            { int VAR_37 = FUNC_5(VAR_22);
                if (VAR_37 <= 0) return VAR_37;
            }
            { int VAR_38 = FUNC_8(VAR_22, 3, VAR_8);
                if (VAR_38 < 0) return VAR_38;
            }
            break;
        case 6:
            { int VAR_39 = FUNC_6(VAR_22);
                if (VAR_39 <= 0) return VAR_39;
            }
            { int VAR_40 = FUNC_7(VAR_22);
                if (VAR_40 < 0) return VAR_40;
            }
            { int VAR_41 = VAR_22->l - VAR_22->c; (void)VAR_41;
                VAR_22->ket = VAR_22->c;
                VAR_23 = FUNC_1(VAR_22, VAR_0, 6);
                if (!(VAR_23)) { VAR_22->c = VAR_22->l - VAR_41; goto lab3; }
                VAR_22->bra = VAR_22->c;
                switch (VAR_23) {
                    case 1:
                        { int VAR_42 = FUNC_5(VAR_22);
                            if (VAR_42 == 0) { VAR_22->c = VAR_22->l - VAR_41; goto lab3; }
                            if (VAR_42 < 0) return VAR_42;
                        }
                        { int VAR_43 = FUNC_7(VAR_22);
                            if (VAR_43 < 0) return VAR_43;
                        }
                        VAR_22->ket = VAR_22->c;
                        if (!(FUNC_0(VAR_22, 2, VAR_9))) { VAR_22->c = VAR_22->l - VAR_41; goto lab3; }
                        VAR_22->bra = VAR_22->c;
                        { int VAR_44 = FUNC_5(VAR_22);
                            if (VAR_44 == 0) { VAR_22->c = VAR_22->l - VAR_41; goto lab3; }
                            if (VAR_44 < 0) return VAR_44;
                        }
                        { int VAR_45 = FUNC_7(VAR_22);
                            if (VAR_45 < 0) return VAR_45;
                        }
                        break;
                    case 2:
                        { int VAR_46 = VAR_22->l - VAR_22->c; (void)VAR_46;
                            { int VAR_47 = FUNC_5(VAR_22);
                                if (VAR_47 == 0) goto lab5;
                                if (VAR_47 < 0) return VAR_47;
                            }
                            { int VAR_48 = FUNC_7(VAR_22);
                                if (VAR_48 < 0) return VAR_48;
                            }
                            goto lab4;
                        lab5:
                            VAR_22->c = VAR_22->l - VAR_46;
                            { int VAR_49 = FUNC_4(VAR_22);
                                if (VAR_49 == 0) { VAR_22->c = VAR_22->l - VAR_41; goto lab3; }
                                if (VAR_49 < 0) return VAR_49;
                            }
                            { int VAR_50 = FUNC_8(VAR_22, 3, VAR_10);
                                if (VAR_50 < 0) return VAR_50;
                            }
                        }
                    lab4:
                        break;
                    case 3:
                        { int VAR_51 = FUNC_5(VAR_22);
                            if (VAR_51 == 0) { VAR_22->c = VAR_22->l - VAR_41; goto lab3; }
                            if (VAR_51 < 0) return VAR_51;
                        }
                        { int VAR_52 = FUNC_7(VAR_22);
                            if (VAR_52 < 0) return VAR_52;
                        }
                        break;
                    case 4:
                        { int VAR_53 = FUNC_6(VAR_22);
                            if (VAR_53 == 0) { VAR_22->c = VAR_22->l - VAR_41; goto lab3; }
                            if (VAR_53 < 0) return VAR_53;
                        }
                        { int VAR_54 = FUNC_8(VAR_22, 1, VAR_11);
                            if (VAR_54 < 0) return VAR_54;
                        }
                        break;
                }
            lab3:
                ;
            }
            break;
        case 7:
            { int VAR_55 = FUNC_5(VAR_22);
                if (VAR_55 <= 0) return VAR_55;
            }
            { int VAR_56 = FUNC_7(VAR_22);
                if (VAR_56 < 0) return VAR_56;
            }
            { int VAR_57 = VAR_22->l - VAR_22->c; (void)VAR_57;
                VAR_22->ket = VAR_22->c;
                if (VAR_22->c - 1 <= VAR_22->lb || VAR_22->p[VAR_22->c - 1] >> 5 != 3 || !((4198408 >> (VAR_22->p[VAR_22->c - 1] & 0x1f)) & 1)) { VAR_22->c = VAR_22->l - VAR_57; goto lab6; }
                VAR_23 = FUNC_1(VAR_22, VAR_1, 3);
                if (!(VAR_23)) { VAR_22->c = VAR_22->l - VAR_57; goto lab6; }
                VAR_22->bra = VAR_22->c;
                switch (VAR_23) {
                    case 1:
                        { int VAR_58 = VAR_22->l - VAR_22->c; (void)VAR_58;
                            { int VAR_59 = FUNC_5(VAR_22);
                                if (VAR_59 == 0) goto lab8;
                                if (VAR_59 < 0) return VAR_59;
                            }
                            { int VAR_60 = FUNC_7(VAR_22);
                                if (VAR_60 < 0) return VAR_60;
                            }
                            goto lab7;
                        lab8:
                            VAR_22->c = VAR_22->l - VAR_58;
                            { int VAR_61 = FUNC_8(VAR_22, 3, VAR_12);
                                if (VAR_61 < 0) return VAR_61;
                            }
                        }
                    lab7:
                        break;
                    case 2:
                        { int VAR_62 = VAR_22->l - VAR_22->c; (void)VAR_62;
                            { int VAR_63 = FUNC_5(VAR_22);
                                if (VAR_63 == 0) goto lab10;
                                if (VAR_63 < 0) return VAR_63;
                            }
                            { int VAR_64 = FUNC_7(VAR_22);
                                if (VAR_64 < 0) return VAR_64;
                            }
                            goto lab9;
                        lab10:
                            VAR_22->c = VAR_22->l - VAR_62;
                            { int VAR_65 = FUNC_8(VAR_22, 3, VAR_13);
                                if (VAR_65 < 0) return VAR_65;
                            }
                        }
                    lab9:
                        break;
                    case 3:
                        { int VAR_66 = FUNC_5(VAR_22);
                            if (VAR_66 == 0) { VAR_22->c = VAR_22->l - VAR_57; goto lab6; }
                            if (VAR_66 < 0) return VAR_66;
                        }
                        { int VAR_67 = FUNC_7(VAR_22);
                            if (VAR_67 < 0) return VAR_67;
                        }
                        break;
                }
            lab6:
                ;
            }
            break;
        case 8:
            { int VAR_68 = FUNC_5(VAR_22);
                if (VAR_68 <= 0) return VAR_68;
            }
            { int VAR_69 = FUNC_7(VAR_22);
                if (VAR_69 < 0) return VAR_69;
            }
            { int VAR_70 = VAR_22->l - VAR_22->c; (void)VAR_70;
                VAR_22->ket = VAR_22->c;
                if (!(FUNC_0(VAR_22, 2, VAR_14))) { VAR_22->c = VAR_22->l - VAR_70; goto lab11; }
                VAR_22->bra = VAR_22->c;
                { int VAR_71 = FUNC_5(VAR_22);
                    if (VAR_71 == 0) { VAR_22->c = VAR_22->l - VAR_70; goto lab11; }
                    if (VAR_71 < 0) return VAR_71;
                }
                { int VAR_72 = FUNC_7(VAR_22);
                    if (VAR_72 < 0) return VAR_72;
                }
                VAR_22->ket = VAR_22->c;
                if (!(FUNC_0(VAR_22, 2, VAR_15))) { VAR_22->c = VAR_22->l - VAR_70; goto lab11; }
                VAR_22->bra = VAR_22->c;
                { int VAR_73 = VAR_22->l - VAR_22->c; (void)VAR_73;
                    { int VAR_74 = FUNC_5(VAR_22);
                        if (VAR_74 == 0) goto lab13;
                        if (VAR_74 < 0) return VAR_74;
                    }
                    { int VAR_75 = FUNC_7(VAR_22);
                        if (VAR_75 < 0) return VAR_75;
                    }
                    goto lab12;
                lab13:
                    VAR_22->c = VAR_22->l - VAR_73;
                    { int VAR_76 = FUNC_8(VAR_22, 3, VAR_16);
                        if (VAR_76 < 0) return VAR_76;
                    }
                }
            lab12:
            lab11:
                ;
            }
            break;
        case 9:
            { int VAR_77 = FUNC_8(VAR_22, 3, VAR_17);
                if (VAR_77 < 0) return VAR_77;
            }
            break;
        case 10:
            { int VAR_78 = FUNC_4(VAR_22);
                if (VAR_78 <= 0) return VAR_78;
            }
            { int VAR_79 = FUNC_8(VAR_22, 2, VAR_18);
                if (VAR_79 < 0) return VAR_79;
            }
            break;
        case 11:
            { int VAR_80 = VAR_22->l - VAR_22->c; (void)VAR_80;
                { int VAR_81 = FUNC_5(VAR_22);
                    if (VAR_81 == 0) goto lab15;
                    if (VAR_81 < 0) return VAR_81;
                }
                { int VAR_82 = FUNC_7(VAR_22);
                    if (VAR_82 < 0) return VAR_82;
                }
                goto lab14;
            lab15:
                VAR_22->c = VAR_22->l - VAR_80;
                { int VAR_83 = FUNC_4(VAR_22);
                    if (VAR_83 <= 0) return VAR_83;
                }
                { int VAR_84 = FUNC_8(VAR_22, 3, VAR_19);
                    if (VAR_84 < 0) return VAR_84;
                }
            }
        lab14:
            break;
        case 12:
            { int VAR_85 = FUNC_4(VAR_22);
                if (VAR_85 <= 0) return VAR_85;
            }
            if (FUNC_3(VAR_22, VAR_3, 97, 251, 0)) return 0;
            { int VAR_86 = FUNC_7(VAR_22);
                if (VAR_86 < 0) return VAR_86;
            }
            break;
        case 13:
            { int VAR_87 = FUNC_6(VAR_22);
                if (VAR_87 <= 0) return VAR_87;
            }
            { int VAR_88 = FUNC_8(VAR_22, 3, VAR_20);
                if (VAR_88 < 0) return VAR_88;
            }
            return 0;
            break;
        case 14:
            { int VAR_89 = FUNC_6(VAR_22);
                if (VAR_89 <= 0) return VAR_89;
            }
            { int VAR_90 = FUNC_8(VAR_22, 3, VAR_21);
                if (VAR_90 < 0) return VAR_90;
            }
            return 0;
            break;
        case 15:
            { int VAR_91 = VAR_22->l - VAR_22->c;
                if (FUNC_2(VAR_22, VAR_3, 97, 251, 0)) return 0;
                { int VAR_92 = FUNC_6(VAR_22);
                    if (VAR_92 <= 0) return VAR_92;
                }
                VAR_22->c = VAR_22->l - VAR_91;
            }
            { int VAR_93 = FUNC_7(VAR_22);
                if (VAR_93 < 0) return VAR_93;
            }
            return 0;
            break;
    }
    return 1;
}
