
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int lb; int c; int l; } ;


 int FUNC_0 (struct SN_env*) ;
 int FUNC_1 (struct SN_env*) ;
 int FUNC_2 (struct SN_env*) ;
 int FUNC_3 (struct SN_env*) ;
 int FUNC_4 (struct SN_env*) ;
 int FUNC_5 (struct SN_env*) ;
 int FUNC_6 (struct SN_env*) ;

extern int FUNC_7(struct SN_env * VAR_0) {

    { int VAR_1 = FUNC_1(VAR_0);
        if (VAR_1 == 0) goto lab0;
        if (VAR_1 < 0) return VAR_1;
    }
lab0:
    VAR_0->lb = VAR_0->c; VAR_0->c = VAR_0->l;

    { int VAR_2 = VAR_0->l - VAR_0->c; (void)VAR_2;
        { int VAR_3 = FUNC_0(VAR_0);
            if (VAR_3 == 0) goto lab1;
            if (VAR_3 < 0) return VAR_3;
        }
    lab1:
        VAR_0->c = VAR_0->l - VAR_2;
    }
    { int VAR_4 = VAR_0->l - VAR_0->c; (void)VAR_4;
        { int VAR_5 = VAR_0->l - VAR_0->c; (void)VAR_5;
            { int VAR_6 = FUNC_4(VAR_0);
                if (VAR_6 == 0) goto lab4;
                if (VAR_6 < 0) return VAR_6;
            }
            goto lab3;
        lab4:
            VAR_0->c = VAR_0->l - VAR_5;
            { int VAR_7 = FUNC_6(VAR_0);
                if (VAR_7 == 0) goto lab5;
                if (VAR_7 < 0) return VAR_7;
            }
            goto lab3;
        lab5:
            VAR_0->c = VAR_0->l - VAR_5;
            { int VAR_8 = FUNC_5(VAR_0);
                if (VAR_8 == 0) goto lab2;
                if (VAR_8 < 0) return VAR_8;
            }
        }
    lab3:
    lab2:
        VAR_0->c = VAR_0->l - VAR_4;
    }
    { int VAR_9 = VAR_0->l - VAR_0->c; (void)VAR_9;
        { int VAR_10 = FUNC_3(VAR_0);
            if (VAR_10 == 0) goto lab6;
            if (VAR_10 < 0) return VAR_10;
        }
    lab6:
        VAR_0->c = VAR_0->l - VAR_9;
    }
    VAR_0->c = VAR_0->lb;
    { int VAR_11 = VAR_0->c;
        { int VAR_12 = FUNC_2(VAR_0);
            if (VAR_12 == 0) goto lab7;
            if (VAR_12 < 0) return VAR_12;
        }
    lab7:
        VAR_0->c = VAR_11;
    }
    return 1;
}
