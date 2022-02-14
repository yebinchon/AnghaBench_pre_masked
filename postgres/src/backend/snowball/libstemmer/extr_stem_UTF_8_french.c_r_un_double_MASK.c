
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int l; int c; scalar_t__ lb; int* p; size_t ket; int bra; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int FUNC_1 (int*,size_t,scalar_t__,int ,int) ;
 int FUNC_2 (struct SN_env*) ;

__attribute__((used)) static int FUNC_3(struct SN_env * VAR_1) {
    { int VAR_2 = VAR_1->l - VAR_1->c;
        if (VAR_1->c - 2 <= VAR_1->lb || VAR_1->p[VAR_1->c - 1] >> 5 != 3 || !((1069056 >> (VAR_1->p[VAR_1->c - 1] & 0x1f)) & 1)) return 0;
        if (!(FUNC_0(VAR_1, VAR_0, 5))) return 0;
        VAR_1->c = VAR_1->l - VAR_2;
    }
    VAR_1->ket = VAR_1->c;
    { int VAR_3 = FUNC_1(VAR_1->p, VAR_1->c, VAR_1->lb, 0, -1);
        if (VAR_3 < 0) return 0;
        VAR_1->c = VAR_3;
    }
    VAR_1->bra = VAR_1->c;
    { int VAR_4 = FUNC_2(VAR_1);
        if (VAR_4 < 0) return VAR_4;
    }
    return 1;
}
