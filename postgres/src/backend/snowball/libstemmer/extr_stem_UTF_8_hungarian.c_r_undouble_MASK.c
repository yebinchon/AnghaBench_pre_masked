
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; int ket; int bra; int l; int lb; int p; } ;


 int FUNC_0 (int ,int,int ,int ,int) ;
 int FUNC_1 (struct SN_env*) ;

__attribute__((used)) static int FUNC_2(struct SN_env * VAR_0) {
    { int VAR_1 = FUNC_0(VAR_0->p, VAR_0->c, VAR_0->lb, 0, -1);
        if (VAR_1 < 0) return 0;
        VAR_0->c = VAR_1;
    }
    VAR_0->ket = VAR_0->c;
    { int VAR_2 = FUNC_0(VAR_0->p, VAR_0->c, VAR_0->lb, VAR_0->l, - 1);
        if (VAR_2 < 0) return 0;
        VAR_0->c = VAR_2;
    }
    VAR_0->bra = VAR_0->c;
    { int VAR_3 = FUNC_1(VAR_0);
        if (VAR_3 < 0) return VAR_3;
    }
    return 1;
}
