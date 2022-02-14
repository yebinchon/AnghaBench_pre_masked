
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int l; int c; scalar_t__* I; int lb; scalar_t__ ket; int* p; size_t bra; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int FUNC_1 (int*,size_t,int,int ,int) ;
 int FUNC_2 (struct SN_env*) ;

__attribute__((used)) static int FUNC_3(struct SN_env * VAR_1) {
    { int VAR_2 = VAR_1->l - VAR_1->c;

        { int VAR_3;
            if (VAR_1->c < VAR_1->I[0]) return 0;
            VAR_3 = VAR_1->lb; VAR_1->lb = VAR_1->I[0];
            VAR_1->ket = VAR_1->c;
            if (VAR_1->c - 1 <= VAR_1->lb || (VAR_1->p[VAR_1->c - 1] != 100 && VAR_1->p[VAR_1->c - 1] != 116)) { VAR_1->lb = VAR_3; return 0; }
            if (!(FUNC_0(VAR_1, VAR_0, 4))) { VAR_1->lb = VAR_3; return 0; }
            VAR_1->bra = VAR_1->c;
            VAR_1->lb = VAR_3;
        }
        VAR_1->c = VAR_1->l - VAR_2;
    }
    { int VAR_4 = FUNC_1(VAR_1->p, VAR_1->c, VAR_1->lb, 0, -1);
        if (VAR_4 < 0) return 0;
        VAR_1->c = VAR_4;
    }
    VAR_1->bra = VAR_1->c;
    { int VAR_5 = FUNC_2(VAR_1);
        if (VAR_5 < 0) return VAR_5;
    }
    return 1;
}
