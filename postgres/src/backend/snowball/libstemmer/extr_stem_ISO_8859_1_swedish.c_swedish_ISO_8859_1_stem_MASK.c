
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; int lb; int l; } ;


 int FUNC_0 (struct SN_env*) ;
 int FUNC_1 (struct SN_env*) ;
 int FUNC_2 (struct SN_env*) ;
 int FUNC_3 (struct SN_env*) ;

extern int FUNC_4(struct SN_env * VAR_0) {
    { int VAR_1 = VAR_0->c;
        { int VAR_2 = FUNC_2(VAR_0);
            if (VAR_2 == 0) goto lab0;
            if (VAR_2 < 0) return VAR_2;
        }
    lab0:
        VAR_0->c = VAR_1;
    }
    VAR_0->lb = VAR_0->c; VAR_0->c = VAR_0->l;

    { int VAR_3 = VAR_0->l - VAR_0->c; (void)VAR_3;
        { int VAR_4 = FUNC_1(VAR_0);
            if (VAR_4 == 0) goto lab1;
            if (VAR_4 < 0) return VAR_4;
        }
    lab1:
        VAR_0->c = VAR_0->l - VAR_3;
    }
    { int VAR_5 = VAR_0->l - VAR_0->c; (void)VAR_5;
        { int VAR_6 = FUNC_0(VAR_0);
            if (VAR_6 == 0) goto lab2;
            if (VAR_6 < 0) return VAR_6;
        }
    lab2:
        VAR_0->c = VAR_0->l - VAR_5;
    }
    { int VAR_7 = VAR_0->l - VAR_0->c; (void)VAR_7;
        { int VAR_8 = FUNC_3(VAR_0);
            if (VAR_8 == 0) goto lab3;
            if (VAR_8 < 0) return VAR_8;
        }
    lab3:
        VAR_0->c = VAR_0->l - VAR_7;
    }
    VAR_0->c = VAR_0->lb;
    return 1;
}
