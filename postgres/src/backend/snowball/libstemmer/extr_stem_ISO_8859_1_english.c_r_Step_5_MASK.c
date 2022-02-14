
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int ket; int c; int lb; int* p; int bra; int l; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int FUNC_1 (struct SN_env*) ;
 int FUNC_2 (struct SN_env*) ;
 int FUNC_3 (struct SN_env*) ;
 int FUNC_4 (struct SN_env*) ;

__attribute__((used)) static int FUNC_5(struct SN_env * VAR_1) {
    int VAR_2;
    VAR_1->ket = VAR_1->c;
    if (VAR_1->c <= VAR_1->lb || (VAR_1->p[VAR_1->c - 1] != 101 && VAR_1->p[VAR_1->c - 1] != 108)) return 0;
    VAR_2 = FUNC_0(VAR_1, VAR_0, 2);
    if (!(VAR_2)) return 0;
    VAR_1->bra = VAR_1->c;
    switch (VAR_2) {
        case 1:
            { int VAR_3 = VAR_1->l - VAR_1->c; (void)VAR_3;
                { int VAR_4 = FUNC_2(VAR_1);
                    if (VAR_4 == 0) goto lab1;
                    if (VAR_4 < 0) return VAR_4;
                }
                goto lab0;
            lab1:
                VAR_1->c = VAR_1->l - VAR_3;
                { int VAR_5 = FUNC_1(VAR_1);
                    if (VAR_5 <= 0) return VAR_5;
                }
                { int VAR_6 = VAR_1->l - VAR_1->c; (void)VAR_6;
                    { int VAR_7 = FUNC_3(VAR_1);
                        if (VAR_7 == 0) goto lab2;
                        if (VAR_7 < 0) return VAR_7;
                    }
                    return 0;
                lab2:
                    VAR_1->c = VAR_1->l - VAR_6;
                }
            }
        lab0:
            { int VAR_8 = FUNC_4(VAR_1);
                if (VAR_8 < 0) return VAR_8;
            }
            break;
        case 2:
            { int VAR_9 = FUNC_2(VAR_1);
                if (VAR_9 <= 0) return VAR_9;
            }
            if (VAR_1->c <= VAR_1->lb || VAR_1->p[VAR_1->c - 1] != 'l') return 0;
            VAR_1->c--;
            { int VAR_10 = FUNC_4(VAR_1);
                if (VAR_10 < 0) return VAR_10;
            }
            break;
    }
    return 1;
}
