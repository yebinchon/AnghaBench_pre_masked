
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; int* I; int lb; int ket; int* p; int bra; int l; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct SN_env*,int ,int,int,int ) ;
 int FUNC_2 (struct SN_env*) ;

__attribute__((used)) static int FUNC_3(struct SN_env * VAR_2) {

    { int VAR_3;
        if (VAR_2->c < VAR_2->I[0]) return 0;
        VAR_3 = VAR_2->lb; VAR_2->lb = VAR_2->I[0];
        VAR_2->ket = VAR_2->c;
        if (VAR_2->c <= VAR_2->lb || VAR_2->p[VAR_2->c - 1] >> 5 != 3 || !((68944418 >> (VAR_2->p[VAR_2->c - 1] & 0x1f)) & 1)) { VAR_2->lb = VAR_3; return 0; }
        if (!(FUNC_0(VAR_2, VAR_0, 35))) { VAR_2->lb = VAR_3; return 0; }
        VAR_2->bra = VAR_2->c;
        { int VAR_4 = VAR_2->l - VAR_2->c; (void)VAR_4;
            if (VAR_2->c <= VAR_2->lb || VAR_2->p[VAR_2->c - 1] != 'H') goto lab0;
            VAR_2->c--;
            { VAR_2->lb = VAR_3; return 0; }
        lab0:
            VAR_2->c = VAR_2->l - VAR_4;
        }
        if (FUNC_1(VAR_2, VAR_1, 97, 251, 0)) { VAR_2->lb = VAR_3; return 0; }
        { int VAR_5 = FUNC_2(VAR_2);
            if (VAR_5 < 0) return VAR_5;
        }
        VAR_2->lb = VAR_3;
    }
    return 1;
}
