
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {scalar_t__ c; scalar_t__* I; int lb; scalar_t__ ket; scalar_t__ bra; int l; unsigned char* p; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int FUNC_1 (struct SN_env*) ;

__attribute__((used)) static int FUNC_2(struct SN_env * VAR_1) {
    int VAR_2;

    { int VAR_3;
        if (VAR_1->c < VAR_1->I[0]) return 0;
        VAR_3 = VAR_1->lb; VAR_1->lb = VAR_1->I[0];
        VAR_1->ket = VAR_1->c;
        VAR_2 = FUNC_0(VAR_1, VAR_0, 96);
        if (!(VAR_2)) { VAR_1->lb = VAR_3; return 0; }
        VAR_1->bra = VAR_1->c;
        VAR_1->lb = VAR_3;
    }
    switch (VAR_2) {
        case 1:
            { int VAR_4 = VAR_1->l - VAR_1->c; (void)VAR_4;
                if (VAR_1->c <= VAR_1->lb || VAR_1->p[VAR_1->c - 1] != 'u') { VAR_1->c = VAR_1->l - VAR_4; goto lab0; }
                VAR_1->c--;
                { int VAR_5 = VAR_1->l - VAR_1->c;
                    if (VAR_1->c <= VAR_1->lb || VAR_1->p[VAR_1->c - 1] != 'g') { VAR_1->c = VAR_1->l - VAR_4; goto lab0; }
                    VAR_1->c--;
                    VAR_1->c = VAR_1->l - VAR_5;
                }
            lab0:
                ;
            }
            VAR_1->bra = VAR_1->c;
            { int VAR_6 = FUNC_1(VAR_1);
                if (VAR_6 < 0) return VAR_6;
            }
            break;
        case 2:
            { int VAR_7 = FUNC_1(VAR_1);
                if (VAR_7 < 0) return VAR_7;
            }
            break;
    }
    return 1;
}
