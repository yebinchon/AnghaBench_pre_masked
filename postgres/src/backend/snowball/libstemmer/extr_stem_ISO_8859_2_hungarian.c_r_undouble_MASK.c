
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; int lb; int ket; int l; int bra; } ;


 int FUNC_0 (struct SN_env*) ;

__attribute__((used)) static int FUNC_1(struct SN_env * VAR_0) {
    if (VAR_0->c <= VAR_0->lb) return 0;
    VAR_0->c--;
    VAR_0->ket = VAR_0->c;
    { int VAR_1 = VAR_0->c - 1;
        if (VAR_0->lb > VAR_1 || VAR_1 > VAR_0->l) return 0;
        VAR_0->c = VAR_1;
    }
    VAR_0->bra = VAR_0->c;
    { int VAR_2 = FUNC_0(VAR_0);
        if (VAR_2 < 0) return VAR_2;
    }
    return 1;
}
