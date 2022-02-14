
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int* B; int ket; int c; int lb; char* p; int bra; int l; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct SN_env*,int ,int,int,int ) ;
 int FUNC_1 (struct SN_env*) ;
 int FUNC_2 (struct SN_env*) ;
 int FUNC_3 (struct SN_env*) ;

__attribute__((used)) static int FUNC_4(struct SN_env * VAR_1) {
    VAR_1->B[0] = 0;
    VAR_1->ket = VAR_1->c;
    if (VAR_1->c <= VAR_1->lb || VAR_1->p[VAR_1->c - 1] != 'e') return 0;
    VAR_1->c--;
    VAR_1->bra = VAR_1->c;
    { int VAR_2 = FUNC_1(VAR_1);
        if (VAR_2 <= 0) return VAR_2;
    }
    { int VAR_3 = VAR_1->l - VAR_1->c;
        if (FUNC_0(VAR_1, VAR_0, 97, 232, 0)) return 0;
        VAR_1->c = VAR_1->l - VAR_3;
    }
    { int VAR_4 = FUNC_3(VAR_1);
        if (VAR_4 < 0) return VAR_4;
    }
    VAR_1->B[0] = 1;
    { int VAR_5 = FUNC_2(VAR_1);
        if (VAR_5 <= 0) return VAR_5;
    }
    return 1;
}
