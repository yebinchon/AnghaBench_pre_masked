
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int l; int c; int ket; scalar_t__ lb; int* p; size_t bra; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int FUNC_1 (struct SN_env*) ;
 int FUNC_2 (struct SN_env*) ;

__attribute__((used)) static int FUNC_3(struct SN_env * VAR_1) {
    int VAR_2;
    { int VAR_3 = FUNC_1(VAR_1);
        if (VAR_3 <= 0) return VAR_3;
    }
    { int VAR_4 = VAR_1->l - VAR_1->c; (void)VAR_4;
        VAR_1->ket = VAR_1->c;
        if (VAR_1->c <= VAR_1->lb || VAR_1->p[VAR_1->c - 1] >> 5 != 6 || !((671113216 >> (VAR_1->p[VAR_1->c - 1] & 0x1f)) & 1)) { VAR_1->c = VAR_1->l - VAR_4; goto lab0; }
        VAR_2 = FUNC_0(VAR_1, VAR_0, 8);
        if (!(VAR_2)) { VAR_1->c = VAR_1->l - VAR_4; goto lab0; }
        VAR_1->bra = VAR_1->c;
        switch (VAR_2) {
            case 1:
                { int VAR_5 = VAR_1->l - VAR_1->c; (void)VAR_5;
                    if (VAR_1->c <= VAR_1->lb || VAR_1->p[VAR_1->c - 1] != 0xC1) goto lab2;
                    VAR_1->c--;
                    goto lab1;
                lab2:
                    VAR_1->c = VAR_1->l - VAR_5;
                    if (VAR_1->c <= VAR_1->lb || VAR_1->p[VAR_1->c - 1] != 0xD1) { VAR_1->c = VAR_1->l - VAR_4; goto lab0; }
                    VAR_1->c--;
                }
            lab1:
                { int VAR_6 = FUNC_2(VAR_1);
                    if (VAR_6 < 0) return VAR_6;
                }
                break;
            case 2:
                { int VAR_7 = FUNC_2(VAR_1);
                    if (VAR_7 < 0) return VAR_7;
                }
                break;
        }
    lab0:
        ;
    }
    return 1;
}
