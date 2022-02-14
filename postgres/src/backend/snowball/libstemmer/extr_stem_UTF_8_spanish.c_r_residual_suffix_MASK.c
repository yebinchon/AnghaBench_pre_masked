
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int ket; int c; int bra; int l; int lb; unsigned char* p; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int FUNC_1 (struct SN_env*) ;
 int FUNC_2 (struct SN_env*) ;

__attribute__((used)) static int FUNC_3(struct SN_env * VAR_1) {
    int VAR_2;
    VAR_1->ket = VAR_1->c;
    VAR_2 = FUNC_0(VAR_1, VAR_0, 8);
    if (!(VAR_2)) return 0;
    VAR_1->bra = VAR_1->c;
    switch (VAR_2) {
        case 1:
            { int VAR_3 = FUNC_1(VAR_1);
                if (VAR_3 <= 0) return VAR_3;
            }
            { int VAR_4 = FUNC_2(VAR_1);
                if (VAR_4 < 0) return VAR_4;
            }
            break;
        case 2:
            { int VAR_5 = FUNC_1(VAR_1);
                if (VAR_5 <= 0) return VAR_5;
            }
            { int VAR_6 = FUNC_2(VAR_1);
                if (VAR_6 < 0) return VAR_6;
            }
            { int VAR_7 = VAR_1->l - VAR_1->c; (void)VAR_7;
                VAR_1->ket = VAR_1->c;
                if (VAR_1->c <= VAR_1->lb || VAR_1->p[VAR_1->c - 1] != 'u') { VAR_1->c = VAR_1->l - VAR_7; goto lab0; }
                VAR_1->c--;
                VAR_1->bra = VAR_1->c;
                { int VAR_8 = VAR_1->l - VAR_1->c;
                    if (VAR_1->c <= VAR_1->lb || VAR_1->p[VAR_1->c - 1] != 'g') { VAR_1->c = VAR_1->l - VAR_7; goto lab0; }
                    VAR_1->c--;
                    VAR_1->c = VAR_1->l - VAR_8;
                }
                { int VAR_9 = FUNC_1(VAR_1);
                    if (VAR_9 == 0) { VAR_1->c = VAR_1->l - VAR_7; goto lab0; }
                    if (VAR_9 < 0) return VAR_9;
                }
                { int VAR_10 = FUNC_2(VAR_1);
                    if (VAR_10 < 0) return VAR_10;
                }
            lab0:
                ;
            }
            break;
    }
    return 1;
}
