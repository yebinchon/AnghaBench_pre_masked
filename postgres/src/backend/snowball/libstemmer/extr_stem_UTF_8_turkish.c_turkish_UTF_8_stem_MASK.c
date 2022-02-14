
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int lb; int c; int l; int * B; } ;


 int FUNC_0 (struct SN_env*) ;
 int FUNC_1 (struct SN_env*) ;
 int FUNC_2 (struct SN_env*) ;
 int FUNC_3 (struct SN_env*) ;

extern int FUNC_4(struct SN_env * VAR_0) {
    { int VAR_1 = FUNC_0(VAR_0);
        if (VAR_1 <= 0) return VAR_1;
    }
    VAR_0->lb = VAR_0->c; VAR_0->c = VAR_0->l;

    { int VAR_2 = VAR_0->l - VAR_0->c; (void)VAR_2;
        { int VAR_3 = FUNC_2(VAR_0);
            if (VAR_3 == 0) goto lab0;
            if (VAR_3 < 0) return VAR_3;
        }
    lab0:
        VAR_0->c = VAR_0->l - VAR_2;
    }
    if (!(VAR_0->B[0])) return 0;
    { int VAR_4 = VAR_0->l - VAR_0->c; (void)VAR_4;
        { int VAR_5 = FUNC_3(VAR_0);
            if (VAR_5 == 0) goto lab1;
            if (VAR_5 < 0) return VAR_5;
        }
    lab1:
        VAR_0->c = VAR_0->l - VAR_4;
    }
    VAR_0->c = VAR_0->lb;
    { int VAR_6 = FUNC_1(VAR_0);
        if (VAR_6 <= 0) return VAR_6;
    }
    return 1;
}
