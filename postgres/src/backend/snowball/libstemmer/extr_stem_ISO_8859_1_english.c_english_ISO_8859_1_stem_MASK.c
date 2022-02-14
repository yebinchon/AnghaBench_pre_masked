
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; int l; int lb; } ;


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

extern int FUNC_12(struct SN_env * VAR_0) {
    { int VAR_1 = VAR_0->c;
        { int VAR_2 = FUNC_7(VAR_0);
            if (VAR_2 == 0) goto lab1;
            if (VAR_2 < 0) return VAR_2;
        }
        goto lab0;
    lab1:
        VAR_0->c = VAR_1;
        { int VAR_3 = VAR_0->c;
            { int VAR_4 = VAR_0->c + 3;
                if (0 > VAR_4 || VAR_4 > VAR_0->l) goto lab3;
                VAR_0->c = VAR_4;
            }
            goto lab2;
        lab3:
            VAR_0->c = VAR_3;
        }
        goto lab0;
    lab2:
        VAR_0->c = VAR_1;

        { int VAR_5 = FUNC_11(VAR_0);
            if (VAR_5 == 0) goto lab4;
            if (VAR_5 < 0) return VAR_5;
        }
    lab4:

        { int VAR_6 = FUNC_9(VAR_0);
            if (VAR_6 == 0) goto lab5;
            if (VAR_6 < 0) return VAR_6;
        }
    lab5:
        VAR_0->lb = VAR_0->c; VAR_0->c = VAR_0->l;

        { int VAR_7 = VAR_0->l - VAR_0->c; (void)VAR_7;
            { int VAR_8 = FUNC_0(VAR_0);
                if (VAR_8 == 0) goto lab6;
                if (VAR_8 < 0) return VAR_8;
            }
        lab6:
            VAR_0->c = VAR_0->l - VAR_7;
        }
        { int VAR_9 = VAR_0->l - VAR_0->c; (void)VAR_9;
            { int VAR_10 = FUNC_8(VAR_0);
                if (VAR_10 == 0) goto lab8;
                if (VAR_10 < 0) return VAR_10;
            }
            goto lab7;
        lab8:
            VAR_0->c = VAR_0->l - VAR_9;
            { int VAR_11 = VAR_0->l - VAR_0->c; (void)VAR_11;
                { int VAR_12 = FUNC_1(VAR_0);
                    if (VAR_12 == 0) goto lab9;
                    if (VAR_12 < 0) return VAR_12;
                }
            lab9:
                VAR_0->c = VAR_0->l - VAR_11;
            }
            { int VAR_13 = VAR_0->l - VAR_0->c; (void)VAR_13;
                { int VAR_14 = FUNC_2(VAR_0);
                    if (VAR_14 == 0) goto lab10;
                    if (VAR_14 < 0) return VAR_14;
                }
            lab10:
                VAR_0->c = VAR_0->l - VAR_13;
            }
            { int VAR_15 = VAR_0->l - VAR_0->c; (void)VAR_15;
                { int VAR_16 = FUNC_3(VAR_0);
                    if (VAR_16 == 0) goto lab11;
                    if (VAR_16 < 0) return VAR_16;
                }
            lab11:
                VAR_0->c = VAR_0->l - VAR_15;
            }
            { int VAR_17 = VAR_0->l - VAR_0->c; (void)VAR_17;
                { int VAR_18 = FUNC_4(VAR_0);
                    if (VAR_18 == 0) goto lab12;
                    if (VAR_18 < 0) return VAR_18;
                }
            lab12:
                VAR_0->c = VAR_0->l - VAR_17;
            }
            { int VAR_19 = VAR_0->l - VAR_0->c; (void)VAR_19;
                { int VAR_20 = FUNC_5(VAR_0);
                    if (VAR_20 == 0) goto lab13;
                    if (VAR_20 < 0) return VAR_20;
                }
            lab13:
                VAR_0->c = VAR_0->l - VAR_19;
            }
            { int VAR_21 = VAR_0->l - VAR_0->c; (void)VAR_21;
                { int VAR_22 = FUNC_6(VAR_0);
                    if (VAR_22 == 0) goto lab14;
                    if (VAR_22 < 0) return VAR_22;
                }
            lab14:
                VAR_0->c = VAR_0->l - VAR_21;
            }
        }
    lab7:
        VAR_0->c = VAR_0->lb;
        { int VAR_23 = VAR_0->c;
            { int VAR_24 = FUNC_10(VAR_0);
                if (VAR_24 == 0) goto lab15;
                if (VAR_24 < 0) return VAR_24;
            }
        lab15:
            VAR_0->c = VAR_23;
        }
    }
lab0:
    return 1;
}
