
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; int lb; int l; int ket; char* p; int bra; } ;


 int FUNC_0 (struct SN_env*) ;
 int FUNC_1 (struct SN_env*) ;
 int FUNC_2 (struct SN_env*) ;
 int FUNC_3 (struct SN_env*) ;
 int FUNC_4 (struct SN_env*) ;
 int FUNC_5 (struct SN_env*) ;
 int FUNC_6 (struct SN_env*) ;
 int FUNC_7 (struct SN_env*) ;
 int FUNC_8 (struct SN_env*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_9 (struct SN_env*,int,int ) ;

extern int FUNC_10(struct SN_env * VAR_2) {
    { int VAR_3 = VAR_2->c;
        { int VAR_4 = FUNC_3(VAR_2);
            if (VAR_4 == 0) goto lab0;
            if (VAR_4 < 0) return VAR_4;
        }
    lab0:
        VAR_2->c = VAR_3;
    }

    { int VAR_5 = FUNC_1(VAR_2);
        if (VAR_5 == 0) goto lab1;
        if (VAR_5 < 0) return VAR_5;
    }
lab1:
    VAR_2->lb = VAR_2->c; VAR_2->c = VAR_2->l;

    { int VAR_6 = VAR_2->l - VAR_2->c; (void)VAR_6;
        { int VAR_7 = VAR_2->l - VAR_2->c; (void)VAR_7;
            { int VAR_8 = VAR_2->l - VAR_2->c; (void)VAR_8;
                { int VAR_9 = VAR_2->l - VAR_2->c; (void)VAR_9;
                    { int VAR_10 = FUNC_5(VAR_2);
                        if (VAR_10 == 0) goto lab6;
                        if (VAR_10 < 0) return VAR_10;
                    }
                    goto lab5;
                lab6:
                    VAR_2->c = VAR_2->l - VAR_9;
                    { int VAR_11 = FUNC_0(VAR_2);
                        if (VAR_11 == 0) goto lab7;
                        if (VAR_11 < 0) return VAR_11;
                    }
                    goto lab5;
                lab7:
                    VAR_2->c = VAR_2->l - VAR_9;
                    { int VAR_12 = FUNC_8(VAR_2);
                        if (VAR_12 == 0) goto lab4;
                        if (VAR_12 < 0) return VAR_12;
                    }
                }
            lab5:
                VAR_2->c = VAR_2->l - VAR_8;
                { int VAR_13 = VAR_2->l - VAR_2->c; (void)VAR_13;
                    VAR_2->ket = VAR_2->c;
                    { int VAR_14 = VAR_2->l - VAR_2->c; (void)VAR_14;
                        if (VAR_2->c <= VAR_2->lb || VAR_2->p[VAR_2->c - 1] != 'Y') goto lab10;
                        VAR_2->c--;
                        VAR_2->bra = VAR_2->c;
                        { int VAR_15 = FUNC_9(VAR_2, 1, VAR_0);
                            if (VAR_15 < 0) return VAR_15;
                        }
                        goto lab9;
                    lab10:
                        VAR_2->c = VAR_2->l - VAR_14;
                        if (VAR_2->c <= VAR_2->lb || VAR_2->p[VAR_2->c - 1] != 0xE7) { VAR_2->c = VAR_2->l - VAR_13; goto lab8; }
                        VAR_2->c--;
                        VAR_2->bra = VAR_2->c;
                        { int VAR_16 = FUNC_9(VAR_2, 1, VAR_1);
                            if (VAR_16 < 0) return VAR_16;
                        }
                    }
                lab9:
                lab8:
                    ;
                }
            }
            goto lab3;
        lab4:
            VAR_2->c = VAR_2->l - VAR_7;
            { int VAR_17 = FUNC_4(VAR_2);
                if (VAR_17 == 0) goto lab2;
                if (VAR_17 < 0) return VAR_17;
            }
        }
    lab3:
    lab2:
        VAR_2->c = VAR_2->l - VAR_6;
    }
    { int VAR_18 = VAR_2->l - VAR_2->c; (void)VAR_18;
        { int VAR_19 = FUNC_7(VAR_2);
            if (VAR_19 == 0) goto lab11;
            if (VAR_19 < 0) return VAR_19;
        }
    lab11:
        VAR_2->c = VAR_2->l - VAR_18;
    }
    { int VAR_20 = VAR_2->l - VAR_2->c; (void)VAR_20;
        { int VAR_21 = FUNC_6(VAR_2);
            if (VAR_21 == 0) goto lab12;
            if (VAR_21 < 0) return VAR_21;
        }
    lab12:
        VAR_2->c = VAR_2->l - VAR_20;
    }
    VAR_2->c = VAR_2->lb;
    { int VAR_22 = VAR_2->c;
        { int VAR_23 = FUNC_2(VAR_2);
            if (VAR_23 == 0) goto lab13;
            if (VAR_23 < 0) return VAR_23;
        }
    lab13:
        VAR_2->c = VAR_22;
    }
    return 1;
}
