
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int* I; int c; int lb; int l; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int,int,int) ;
 int FUNC_1 (struct SN_env*) ;
 int FUNC_2 (struct SN_env*) ;
 int FUNC_3 (struct SN_env*) ;
 int FUNC_4 (struct SN_env*) ;
 int FUNC_5 (struct SN_env*) ;

extern int FUNC_6(struct SN_env * VAR_1) {
    VAR_1->I[0] = 0;
    { int VAR_2 = VAR_1->c;
        while(1) {
            int VAR_3 = VAR_1->c;
            {
                int VAR_4 = FUNC_0(VAR_1, VAR_0, 97, 117, 1);
                if (VAR_4 < 0) goto lab1;
                VAR_1->c += VAR_4;
            }
            VAR_1->I[0] += 1;
            continue;
        lab1:
            VAR_1->c = VAR_3;
            break;
        }
        VAR_1->c = VAR_2;
    }
    if (!(VAR_1->I[0] > 2)) return 0;
    VAR_1->I[1] = 0;
    VAR_1->lb = VAR_1->c; VAR_1->c = VAR_1->l;

    { int VAR_5 = VAR_1->l - VAR_1->c; (void)VAR_5;
        { int VAR_6 = FUNC_2(VAR_1);
            if (VAR_6 == 0) goto lab2;
            if (VAR_6 < 0) return VAR_6;
        }
    lab2:
        VAR_1->c = VAR_1->l - VAR_5;
    }
    if (!(VAR_1->I[0] > 2)) return 0;
    { int VAR_7 = VAR_1->l - VAR_1->c; (void)VAR_7;
        { int VAR_8 = FUNC_3(VAR_1);
            if (VAR_8 == 0) goto lab3;
            if (VAR_8 < 0) return VAR_8;
        }
    lab3:
        VAR_1->c = VAR_1->l - VAR_7;
    }
    VAR_1->c = VAR_1->lb;
    if (!(VAR_1->I[0] > 2)) return 0;
    { int VAR_9 = VAR_1->c;
        { int VAR_10 = VAR_1->c;
            { int VAR_11 = FUNC_1(VAR_1);
                if (VAR_11 == 0) goto lab5;
                if (VAR_11 < 0) return VAR_11;
            }
            { int VAR_12 = VAR_1->c;
                { int VAR_13 = VAR_1->c;
                    if (!(VAR_1->I[0] > 2)) goto lab6;
                    VAR_1->lb = VAR_1->c; VAR_1->c = VAR_1->l;

                    { int VAR_14 = FUNC_5(VAR_1);
                        if (VAR_14 == 0) goto lab6;
                        if (VAR_14 < 0) return VAR_14;
                    }
                    VAR_1->c = VAR_1->lb;
                    VAR_1->c = VAR_13;
                }
                if (!(VAR_1->I[0] > 2)) goto lab6;
                { int VAR_15 = FUNC_4(VAR_1);
                    if (VAR_15 == 0) goto lab6;
                    if (VAR_15 < 0) return VAR_15;
                }
            lab6:
                VAR_1->c = VAR_12;
            }
            VAR_1->c = VAR_10;
        }
        goto lab4;
    lab5:
        VAR_1->c = VAR_9;
        { int VAR_16 = VAR_1->c;
            { int VAR_17 = FUNC_4(VAR_1);
                if (VAR_17 == 0) goto lab7;
                if (VAR_17 < 0) return VAR_17;
            }
        lab7:
            VAR_1->c = VAR_16;
        }
        { int VAR_18 = VAR_1->c;
            if (!(VAR_1->I[0] > 2)) goto lab8;
            VAR_1->lb = VAR_1->c; VAR_1->c = VAR_1->l;

            { int VAR_19 = FUNC_5(VAR_1);
                if (VAR_19 == 0) goto lab8;
                if (VAR_19 < 0) return VAR_19;
            }
            VAR_1->c = VAR_1->lb;
        lab8:
            VAR_1->c = VAR_18;
        }
    }
lab4:
    return 1;
}
