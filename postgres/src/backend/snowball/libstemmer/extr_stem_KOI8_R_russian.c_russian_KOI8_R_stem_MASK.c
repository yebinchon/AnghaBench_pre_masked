
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; int bra; int l; int* p; size_t ket; int lb; int* I; } ;


 int FUNC_0 (struct SN_env*) ;
 int FUNC_1 (struct SN_env*) ;
 int FUNC_2 (struct SN_env*) ;
 int FUNC_3 (struct SN_env*) ;
 int FUNC_4 (struct SN_env*) ;
 int FUNC_5 (struct SN_env*) ;
 int FUNC_6 (struct SN_env*) ;
 int FUNC_7 (struct SN_env*) ;
 int VAR_0 ;
 int FUNC_8 (struct SN_env*) ;
 int FUNC_9 (struct SN_env*,int,int ) ;

extern int FUNC_10(struct SN_env * VAR_1) {
    { int VAR_2 = VAR_1->c;
        while(1) {
            int VAR_3 = VAR_1->c;
            while(1) {
                int VAR_4 = VAR_1->c;
                VAR_1->bra = VAR_1->c;
                if (VAR_1->c == VAR_1->l || VAR_1->p[VAR_1->c] != 0xA3) goto lab2;
                VAR_1->c++;
                VAR_1->ket = VAR_1->c;
                VAR_1->c = VAR_4;
                break;
            lab2:
                VAR_1->c = VAR_4;
                if (VAR_1->c >= VAR_1->l) goto lab1;
                VAR_1->c++;
            }
            { int VAR_5 = FUNC_9(VAR_1, 1, VAR_0);
                if (VAR_5 < 0) return VAR_5;
            }
            continue;
        lab1:
            VAR_1->c = VAR_3;
            break;
        }
        VAR_1->c = VAR_2;
    }

    { int VAR_6 = FUNC_2(VAR_1);
        if (VAR_6 == 0) goto lab3;
        if (VAR_6 < 0) return VAR_6;
    }
lab3:
    VAR_1->lb = VAR_1->c; VAR_1->c = VAR_1->l;


    { int VAR_7;
        if (VAR_1->c < VAR_1->I[0]) return 0;
        VAR_7 = VAR_1->lb; VAR_1->lb = VAR_1->I[0];
        { int VAR_8 = VAR_1->l - VAR_1->c; (void)VAR_8;
            { int VAR_9 = VAR_1->l - VAR_1->c; (void)VAR_9;
                { int VAR_10 = FUNC_4(VAR_1);
                    if (VAR_10 == 0) goto lab6;
                    if (VAR_10 < 0) return VAR_10;
                }
                goto lab5;
            lab6:
                VAR_1->c = VAR_1->l - VAR_9;
                { int VAR_11 = VAR_1->l - VAR_1->c; (void)VAR_11;
                    { int VAR_12 = FUNC_5(VAR_1);
                        if (VAR_12 == 0) { VAR_1->c = VAR_1->l - VAR_11; goto lab7; }
                        if (VAR_12 < 0) return VAR_12;
                    }
                lab7:
                    ;
                }
                { int VAR_13 = VAR_1->l - VAR_1->c; (void)VAR_13;
                    { int VAR_14 = FUNC_0(VAR_1);
                        if (VAR_14 == 0) goto lab9;
                        if (VAR_14 < 0) return VAR_14;
                    }
                    goto lab8;
                lab9:
                    VAR_1->c = VAR_1->l - VAR_13;
                    { int VAR_15 = FUNC_7(VAR_1);
                        if (VAR_15 == 0) goto lab10;
                        if (VAR_15 < 0) return VAR_15;
                    }
                    goto lab8;
                lab10:
                    VAR_1->c = VAR_1->l - VAR_13;
                    { int VAR_16 = FUNC_3(VAR_1);
                        if (VAR_16 == 0) goto lab4;
                        if (VAR_16 < 0) return VAR_16;
                    }
                }
            lab8:
                ;
            }
        lab5:
        lab4:
            VAR_1->c = VAR_1->l - VAR_8;
        }
        { int VAR_17 = VAR_1->l - VAR_1->c; (void)VAR_17;
            VAR_1->ket = VAR_1->c;
            if (VAR_1->c <= VAR_1->lb || VAR_1->p[VAR_1->c - 1] != 0xC9) { VAR_1->c = VAR_1->l - VAR_17; goto lab11; }
            VAR_1->c--;
            VAR_1->bra = VAR_1->c;
            { int VAR_18 = FUNC_8(VAR_1);
                if (VAR_18 < 0) return VAR_18;
            }
        lab11:
            ;
        }
        { int VAR_19 = VAR_1->l - VAR_1->c; (void)VAR_19;
            { int VAR_20 = FUNC_1(VAR_1);
                if (VAR_20 == 0) goto lab12;
                if (VAR_20 < 0) return VAR_20;
            }
        lab12:
            VAR_1->c = VAR_1->l - VAR_19;
        }
        { int VAR_21 = VAR_1->l - VAR_1->c; (void)VAR_21;
            { int VAR_22 = FUNC_6(VAR_1);
                if (VAR_22 == 0) goto lab13;
                if (VAR_22 < 0) return VAR_22;
            }
        lab13:
            VAR_1->c = VAR_1->l - VAR_21;
        }
        VAR_1->lb = VAR_7;
    }
    VAR_1->c = VAR_1->lb;
    return 1;
}
