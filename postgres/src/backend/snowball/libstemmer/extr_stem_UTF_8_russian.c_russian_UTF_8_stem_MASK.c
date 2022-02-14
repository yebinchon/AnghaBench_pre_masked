
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; int bra; int ket; int l; int lb; int* I; int p; } ;


 int FUNC_0 (struct SN_env*,int,int ) ;
 int FUNC_1 (struct SN_env*,int,int ) ;
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
 int FUNC_10 (int ,int,int ,int,int) ;
 int FUNC_11 (struct SN_env*) ;
 int FUNC_12 (struct SN_env*,int,int ) ;

extern int FUNC_13(struct SN_env * VAR_3) {
    { int VAR_4 = VAR_3->c;
        while(1) {
            int VAR_5 = VAR_3->c;
            while(1) {
                int VAR_6 = VAR_3->c;
                VAR_3->bra = VAR_3->c;
                if (!(FUNC_0(VAR_3, 2, VAR_2))) goto lab2;
                VAR_3->ket = VAR_3->c;
                VAR_3->c = VAR_6;
                break;
            lab2:
                VAR_3->c = VAR_6;
                { int VAR_7 = FUNC_10(VAR_3->p, VAR_3->c, 0, VAR_3->l, 1);
                    if (VAR_7 < 0) goto lab1;
                    VAR_3->c = VAR_7;
                }
            }
            { int VAR_8 = FUNC_12(VAR_3, 2, VAR_0);
                if (VAR_8 < 0) return VAR_8;
            }
            continue;
        lab1:
            VAR_3->c = VAR_5;
            break;
        }
        VAR_3->c = VAR_4;
    }

    { int VAR_9 = FUNC_4(VAR_3);
        if (VAR_9 == 0) goto lab3;
        if (VAR_9 < 0) return VAR_9;
    }
lab3:
    VAR_3->lb = VAR_3->c; VAR_3->c = VAR_3->l;


    { int VAR_10;
        if (VAR_3->c < VAR_3->I[0]) return 0;
        VAR_10 = VAR_3->lb; VAR_3->lb = VAR_3->I[0];
        { int VAR_11 = VAR_3->l - VAR_3->c; (void)VAR_11;
            { int VAR_12 = VAR_3->l - VAR_3->c; (void)VAR_12;
                { int VAR_13 = FUNC_6(VAR_3);
                    if (VAR_13 == 0) goto lab6;
                    if (VAR_13 < 0) return VAR_13;
                }
                goto lab5;
            lab6:
                VAR_3->c = VAR_3->l - VAR_12;
                { int VAR_14 = VAR_3->l - VAR_3->c; (void)VAR_14;
                    { int VAR_15 = FUNC_7(VAR_3);
                        if (VAR_15 == 0) { VAR_3->c = VAR_3->l - VAR_14; goto lab7; }
                        if (VAR_15 < 0) return VAR_15;
                    }
                lab7:
                    ;
                }
                { int VAR_16 = VAR_3->l - VAR_3->c; (void)VAR_16;
                    { int VAR_17 = FUNC_2(VAR_3);
                        if (VAR_17 == 0) goto lab9;
                        if (VAR_17 < 0) return VAR_17;
                    }
                    goto lab8;
                lab9:
                    VAR_3->c = VAR_3->l - VAR_16;
                    { int VAR_18 = FUNC_9(VAR_3);
                        if (VAR_18 == 0) goto lab10;
                        if (VAR_18 < 0) return VAR_18;
                    }
                    goto lab8;
                lab10:
                    VAR_3->c = VAR_3->l - VAR_16;
                    { int VAR_19 = FUNC_5(VAR_3);
                        if (VAR_19 == 0) goto lab4;
                        if (VAR_19 < 0) return VAR_19;
                    }
                }
            lab8:
                ;
            }
        lab5:
        lab4:
            VAR_3->c = VAR_3->l - VAR_11;
        }
        { int VAR_20 = VAR_3->l - VAR_3->c; (void)VAR_20;
            VAR_3->ket = VAR_3->c;
            if (!(FUNC_1(VAR_3, 2, VAR_1))) { VAR_3->c = VAR_3->l - VAR_20; goto lab11; }
            VAR_3->bra = VAR_3->c;
            { int VAR_21 = FUNC_11(VAR_3);
                if (VAR_21 < 0) return VAR_21;
            }
        lab11:
            ;
        }
        { int VAR_22 = VAR_3->l - VAR_3->c; (void)VAR_22;
            { int VAR_23 = FUNC_3(VAR_3);
                if (VAR_23 == 0) goto lab12;
                if (VAR_23 < 0) return VAR_23;
            }
        lab12:
            VAR_3->c = VAR_3->l - VAR_22;
        }
        { int VAR_24 = VAR_3->l - VAR_3->c; (void)VAR_24;
            { int VAR_25 = FUNC_8(VAR_3);
                if (VAR_25 == 0) goto lab13;
                if (VAR_25 < 0) return VAR_25;
            }
        lab13:
            VAR_3->c = VAR_3->l - VAR_24;
        }
        VAR_3->lb = VAR_10;
    }
    VAR_3->c = VAR_3->lb;
    return 1;
}
