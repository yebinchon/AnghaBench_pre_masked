
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

extern int FUNC_9(struct SN_env * VAR_0) {
    { int VAR_1 = VAR_0->c;
        { int VAR_2 = FUNC_3(VAR_0);
            if (VAR_2 == 0) goto lab0;
            if (VAR_2 < 0) return VAR_2;
        }
    lab0:
        VAR_0->c = VAR_1;
    }

    { int VAR_3 = FUNC_1(VAR_0);
        if (VAR_3 == 0) goto lab1;
        if (VAR_3 < 0) return VAR_3;
    }
lab1:
    VAR_0->lb = VAR_0->c; VAR_0->c = VAR_0->l;

    { int VAR_4 = VAR_0->l - VAR_0->c; (void)VAR_4;
        { int VAR_5 = VAR_0->l - VAR_0->c; (void)VAR_5;
            { int VAR_6 = VAR_0->l - VAR_0->c; (void)VAR_6;
                { int VAR_7 = VAR_0->l - VAR_0->c; (void)VAR_7;
                    { int VAR_8 = FUNC_6(VAR_0);
                        if (VAR_8 == 0) goto lab6;
                        if (VAR_8 < 0) return VAR_8;
                    }
                    goto lab5;
                lab6:
                    VAR_0->c = VAR_0->l - VAR_7;
                    { int VAR_9 = FUNC_7(VAR_0);
                        if (VAR_9 == 0) goto lab4;
                        if (VAR_9 < 0) return VAR_9;
                    }
                }
            lab5:
                VAR_0->c = VAR_0->l - VAR_6;
                { int VAR_10 = VAR_0->l - VAR_0->c; (void)VAR_10;
                    VAR_0->ket = VAR_0->c;
                    if (VAR_0->c <= VAR_0->lb || VAR_0->p[VAR_0->c - 1] != 'i') goto lab7;
                    VAR_0->c--;
                    VAR_0->bra = VAR_0->c;
                    { int VAR_11 = VAR_0->l - VAR_0->c;
                        if (VAR_0->c <= VAR_0->lb || VAR_0->p[VAR_0->c - 1] != 'c') goto lab7;
                        VAR_0->c--;
                        VAR_0->c = VAR_0->l - VAR_11;
                    }
                    { int VAR_12 = FUNC_0(VAR_0);
                        if (VAR_12 == 0) goto lab7;
                        if (VAR_12 < 0) return VAR_12;
                    }
                    { int VAR_13 = FUNC_8(VAR_0);
                        if (VAR_13 < 0) return VAR_13;
                    }
                lab7:
                    VAR_0->c = VAR_0->l - VAR_10;
                }
            }
            goto lab3;
        lab4:
            VAR_0->c = VAR_0->l - VAR_5;
            { int VAR_14 = FUNC_5(VAR_0);
                if (VAR_14 == 0) goto lab2;
                if (VAR_14 < 0) return VAR_14;
            }
        }
    lab3:
    lab2:
        VAR_0->c = VAR_0->l - VAR_4;
    }
    { int VAR_15 = VAR_0->l - VAR_0->c; (void)VAR_15;
        { int VAR_16 = FUNC_4(VAR_0);
            if (VAR_16 == 0) goto lab8;
            if (VAR_16 < 0) return VAR_16;
        }
    lab8:
        VAR_0->c = VAR_0->l - VAR_15;
    }
    VAR_0->c = VAR_0->lb;
    { int VAR_17 = VAR_0->c;
        { int VAR_18 = FUNC_2(VAR_0);
            if (VAR_18 == 0) goto lab9;
            if (VAR_18 < 0) return VAR_18;
        }
    lab9:
        VAR_0->c = VAR_17;
    }
    return 1;
}
