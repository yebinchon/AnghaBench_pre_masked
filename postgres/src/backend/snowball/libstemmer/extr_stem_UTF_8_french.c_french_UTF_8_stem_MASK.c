
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; int lb; int l; int ket; char* p; int bra; } ;


 int FUNC_0 (struct SN_env*,int,int ) ;
 int FUNC_1 (struct SN_env*) ;
 int FUNC_2 (struct SN_env*) ;
 int FUNC_3 (struct SN_env*) ;
 int FUNC_4 (struct SN_env*) ;
 int FUNC_5 (struct SN_env*) ;
 int FUNC_6 (struct SN_env*) ;
 int FUNC_7 (struct SN_env*) ;
 int FUNC_8 (struct SN_env*) ;
 int FUNC_9 (struct SN_env*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (struct SN_env*,int,int ) ;

extern int FUNC_11(struct SN_env * VAR_3) {
    { int VAR_4 = VAR_3->c;
        { int VAR_5 = FUNC_4(VAR_3);
            if (VAR_5 == 0) goto lab0;
            if (VAR_5 < 0) return VAR_5;
        }
    lab0:
        VAR_3->c = VAR_4;
    }

    { int VAR_6 = FUNC_2(VAR_3);
        if (VAR_6 == 0) goto lab1;
        if (VAR_6 < 0) return VAR_6;
    }
lab1:
    VAR_3->lb = VAR_3->c; VAR_3->c = VAR_3->l;

    { int VAR_7 = VAR_3->l - VAR_3->c; (void)VAR_7;
        { int VAR_8 = VAR_3->l - VAR_3->c; (void)VAR_8;
            { int VAR_9 = VAR_3->l - VAR_3->c; (void)VAR_9;
                { int VAR_10 = VAR_3->l - VAR_3->c; (void)VAR_10;
                    { int VAR_11 = FUNC_6(VAR_3);
                        if (VAR_11 == 0) goto lab6;
                        if (VAR_11 < 0) return VAR_11;
                    }
                    goto lab5;
                lab6:
                    VAR_3->c = VAR_3->l - VAR_10;
                    { int VAR_12 = FUNC_1(VAR_3);
                        if (VAR_12 == 0) goto lab7;
                        if (VAR_12 < 0) return VAR_12;
                    }
                    goto lab5;
                lab7:
                    VAR_3->c = VAR_3->l - VAR_10;
                    { int VAR_13 = FUNC_9(VAR_3);
                        if (VAR_13 == 0) goto lab4;
                        if (VAR_13 < 0) return VAR_13;
                    }
                }
            lab5:
                VAR_3->c = VAR_3->l - VAR_9;
                { int VAR_14 = VAR_3->l - VAR_3->c; (void)VAR_14;
                    VAR_3->ket = VAR_3->c;
                    { int VAR_15 = VAR_3->l - VAR_3->c; (void)VAR_15;
                        if (VAR_3->c <= VAR_3->lb || VAR_3->p[VAR_3->c - 1] != 'Y') goto lab10;
                        VAR_3->c--;
                        VAR_3->bra = VAR_3->c;
                        { int VAR_16 = FUNC_10(VAR_3, 1, VAR_0);
                            if (VAR_16 < 0) return VAR_16;
                        }
                        goto lab9;
                    lab10:
                        VAR_3->c = VAR_3->l - VAR_15;
                        if (!(FUNC_0(VAR_3, 2, VAR_1))) { VAR_3->c = VAR_3->l - VAR_14; goto lab8; }
                        VAR_3->bra = VAR_3->c;
                        { int VAR_17 = FUNC_10(VAR_3, 1, VAR_2);
                            if (VAR_17 < 0) return VAR_17;
                        }
                    }
                lab9:
                lab8:
                    ;
                }
            }
            goto lab3;
        lab4:
            VAR_3->c = VAR_3->l - VAR_8;
            { int VAR_18 = FUNC_5(VAR_3);
                if (VAR_18 == 0) goto lab2;
                if (VAR_18 < 0) return VAR_18;
            }
        }
    lab3:
    lab2:
        VAR_3->c = VAR_3->l - VAR_7;
    }
    { int VAR_19 = VAR_3->l - VAR_3->c; (void)VAR_19;
        { int VAR_20 = FUNC_8(VAR_3);
            if (VAR_20 == 0) goto lab11;
            if (VAR_20 < 0) return VAR_20;
        }
    lab11:
        VAR_3->c = VAR_3->l - VAR_19;
    }
    { int VAR_21 = VAR_3->l - VAR_3->c; (void)VAR_21;
        { int VAR_22 = FUNC_7(VAR_3);
            if (VAR_22 == 0) goto lab12;
            if (VAR_22 < 0) return VAR_22;
        }
    lab12:
        VAR_3->c = VAR_3->l - VAR_21;
    }
    VAR_3->c = VAR_3->lb;
    { int VAR_23 = VAR_3->c;
        { int VAR_24 = FUNC_3(VAR_3);
            if (VAR_24 == 0) goto lab13;
            if (VAR_24 < 0) return VAR_24;
        }
    lab13:
        VAR_3->c = VAR_23;
    }
    return 1;
}
