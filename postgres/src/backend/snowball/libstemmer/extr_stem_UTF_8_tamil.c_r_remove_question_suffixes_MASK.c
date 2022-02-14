
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int* B; int lb; int c; int l; int ket; int bra; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int FUNC_1 (struct SN_env*) ;
 int FUNC_2 (struct SN_env*) ;
 int VAR_1 ;
 int FUNC_3 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct SN_env * VAR_2) {
    { int VAR_3 = FUNC_2(VAR_2);
        if (VAR_3 <= 0) return VAR_3;
    }
    VAR_2->B[0] = 0;
    VAR_2->lb = VAR_2->c; VAR_2->c = VAR_2->l;

    { int VAR_4 = VAR_2->l - VAR_2->c; (void)VAR_4;
        VAR_2->ket = VAR_2->c;
        if (!(FUNC_0(VAR_2, VAR_0, 3))) goto lab0;
        VAR_2->bra = VAR_2->c;
        { int VAR_5 = FUNC_3(VAR_2, 3, VAR_1);
            if (VAR_5 < 0) return VAR_5;
        }
        VAR_2->B[0] = 1;
    lab0:
        VAR_2->c = VAR_2->l - VAR_4;
    }
    VAR_2->c = VAR_2->lb;

    { int VAR_6 = FUNC_1(VAR_2);
        if (VAR_6 == 0) goto lab1;
        if (VAR_6 < 0) return VAR_6;
    }
lab1:
    return 1;
}
