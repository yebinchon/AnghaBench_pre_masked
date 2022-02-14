
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int ket; int c; int lb; char* p; int bra; int l; } ;


 int FUNC_0 (struct SN_env*) ;
 int FUNC_1 (struct SN_env*) ;
 int FUNC_2 (struct SN_env*) ;
 int FUNC_3 (struct SN_env*) ;

__attribute__((used)) static int FUNC_4(struct SN_env * VAR_0) {
    VAR_0->ket = VAR_0->c;
    if (VAR_0->c <= VAR_0->lb || VAR_0->p[VAR_0->c - 1] != 'e') return 0;
    VAR_0->c--;
    VAR_0->bra = VAR_0->c;
    { int VAR_1 = VAR_0->l - VAR_0->c; (void)VAR_1;
        { int VAR_2 = FUNC_1(VAR_0);
            if (VAR_2 == 0) goto lab1;
            if (VAR_2 < 0) return VAR_2;
        }
        goto lab0;
    lab1:
        VAR_0->c = VAR_0->l - VAR_1;
        { int VAR_3 = FUNC_0(VAR_0);
            if (VAR_3 <= 0) return VAR_3;
        }
        { int VAR_4 = VAR_0->l - VAR_0->c; (void)VAR_4;
            { int VAR_5 = FUNC_2(VAR_0);
                if (VAR_5 == 0) goto lab2;
                if (VAR_5 < 0) return VAR_5;
            }
            return 0;
        lab2:
            VAR_0->c = VAR_0->l - VAR_4;
        }
    }
lab0:
    { int VAR_6 = FUNC_3(VAR_0);
        if (VAR_6 < 0) return VAR_6;
    }
    return 1;
}
