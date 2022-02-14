
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int ket; int c; int bra; int l; int lb; unsigned char* p; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int FUNC_1 (struct SN_env*) ;
 int VAR_1 ;
 int FUNC_2 (struct SN_env*) ;
 int FUNC_3 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct SN_env * VAR_2) {
    int VAR_3;
    VAR_2->ket = VAR_2->c;
    VAR_3 = FUNC_0(VAR_2, VAR_0, 4);
    if (!(VAR_3)) return 0;
    VAR_2->bra = VAR_2->c;
    switch (VAR_3) {
        case 1:
            { int VAR_4 = FUNC_1(VAR_2);
                if (VAR_4 <= 0) return VAR_4;
            }
            { int VAR_5 = FUNC_2(VAR_2);
                if (VAR_5 < 0) return VAR_5;
            }
            VAR_2->ket = VAR_2->c;
            { int VAR_6 = VAR_2->l - VAR_2->c; (void)VAR_6;
                if (VAR_2->c <= VAR_2->lb || VAR_2->p[VAR_2->c - 1] != 'u') goto lab1;
                VAR_2->c--;
                VAR_2->bra = VAR_2->c;
                { int VAR_7 = VAR_2->l - VAR_2->c;
                    if (VAR_2->c <= VAR_2->lb || VAR_2->p[VAR_2->c - 1] != 'g') goto lab1;
                    VAR_2->c--;
                    VAR_2->c = VAR_2->l - VAR_7;
                }
                goto lab0;
            lab1:
                VAR_2->c = VAR_2->l - VAR_6;
                if (VAR_2->c <= VAR_2->lb || VAR_2->p[VAR_2->c - 1] != 'i') return 0;
                VAR_2->c--;
                VAR_2->bra = VAR_2->c;
                { int VAR_8 = VAR_2->l - VAR_2->c;
                    if (VAR_2->c <= VAR_2->lb || VAR_2->p[VAR_2->c - 1] != 'c') return 0;
                    VAR_2->c--;
                    VAR_2->c = VAR_2->l - VAR_8;
                }
            }
        lab0:
            { int VAR_9 = FUNC_1(VAR_2);
                if (VAR_9 <= 0) return VAR_9;
            }
            { int VAR_10 = FUNC_2(VAR_2);
                if (VAR_10 < 0) return VAR_10;
            }
            break;
        case 2:
            { int VAR_11 = FUNC_3(VAR_2, 1, VAR_1);
                if (VAR_11 < 0) return VAR_11;
            }
            break;
    }
    return 1;
}
