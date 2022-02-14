
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int lb; int c; int l; } ;


 int FUNC_0 (struct SN_env*) ;
 int FUNC_1 (struct SN_env*) ;
 int FUNC_2 (struct SN_env*) ;
 int FUNC_3 (struct SN_env*) ;

extern int FUNC_4(struct SN_env * VAR_0) {
    VAR_0->lb = VAR_0->c; VAR_0->c = VAR_0->l;

    { int VAR_1 = VAR_0->l - VAR_0->c; (void)VAR_1;
        { int VAR_2 = FUNC_1(VAR_0);
            if (VAR_2 == 0) goto lab0;
            if (VAR_2 < 0) return VAR_2;
        }
    lab0:
        VAR_0->c = VAR_0->l - VAR_1;
    }
    { int VAR_3 = VAR_0->l - VAR_0->c; (void)VAR_3;
        while(1) {
            int VAR_4 = VAR_0->l - VAR_0->c; (void)VAR_4;
            { int VAR_5 = VAR_0->l - VAR_0->c; (void)VAR_5;
                { int VAR_6 = VAR_0->l - VAR_0->c; (void)VAR_6;
                    { int VAR_7 = FUNC_0(VAR_0);
                        if (VAR_7 == 0) goto lab3;
                        if (VAR_7 < 0) return VAR_7;
                    }
                    VAR_0->c = VAR_0->l - VAR_6;
                    { int VAR_8 = FUNC_2(VAR_0);
                        if (VAR_8 == 0) goto lab3;
                        if (VAR_8 < 0) return VAR_8;
                    }
                }
            lab3:
                VAR_0->c = VAR_0->l - VAR_5;
            }
            { int VAR_9 = FUNC_3(VAR_0);
                if (VAR_9 == 0) goto lab2;
                if (VAR_9 < 0) return VAR_9;
            }
            continue;
        lab2:
            VAR_0->c = VAR_0->l - VAR_4;
            break;
        }
        VAR_0->c = VAR_0->l - VAR_3;
    }
    VAR_0->c = VAR_0->lb;
    return 1;
}
