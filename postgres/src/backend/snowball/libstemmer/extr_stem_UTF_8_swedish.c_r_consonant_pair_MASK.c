
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; int* I; int lb; int l; int* p; size_t ket; int bra; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int FUNC_1 (int*,size_t,int,int ,int) ;
 int FUNC_2 (struct SN_env*) ;

__attribute__((used)) static int FUNC_3(struct SN_env * VAR_1) {

    { int VAR_2;
        if (VAR_1->c < VAR_1->I[0]) return 0;
        VAR_2 = VAR_1->lb; VAR_1->lb = VAR_1->I[0];
        { int VAR_3 = VAR_1->l - VAR_1->c; (void)VAR_3;
            if (VAR_1->c - 1 <= VAR_1->lb || VAR_1->p[VAR_1->c - 1] >> 5 != 3 || !((1064976 >> (VAR_1->p[VAR_1->c - 1] & 0x1f)) & 1)) { VAR_1->lb = VAR_2; return 0; }
            if (!(FUNC_0(VAR_1, VAR_0, 7))) { VAR_1->lb = VAR_2; return 0; }
            VAR_1->c = VAR_1->l - VAR_3;
            VAR_1->ket = VAR_1->c;
            { int VAR_4 = FUNC_1(VAR_1->p, VAR_1->c, VAR_1->lb, 0, -1);
                if (VAR_4 < 0) { VAR_1->lb = VAR_2; return 0; }
                VAR_1->c = VAR_4;
            }
            VAR_1->bra = VAR_1->c;
            { int VAR_5 = FUNC_2(VAR_1);
                if (VAR_5 < 0) return VAR_5;
            }
        }
        VAR_1->lb = VAR_2;
    }
    return 1;
}
