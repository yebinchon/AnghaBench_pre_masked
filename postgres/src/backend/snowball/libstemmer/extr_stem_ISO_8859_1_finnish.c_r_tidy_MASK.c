
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; int* I; int lb; int l; int ket; int bra; char* p; scalar_t__* S; } ;


 int FUNC_0 (struct SN_env*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct SN_env*,int ,int,int,int) ;
 int FUNC_2 (struct SN_env*) ;
 int FUNC_3 (struct SN_env*) ;
 scalar_t__ FUNC_4 (struct SN_env*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct SN_env * VAR_3) {

    { int VAR_4;
        if (VAR_3->c < VAR_3->I[0]) return 0;
        VAR_4 = VAR_3->lb; VAR_3->lb = VAR_3->I[0];
        { int VAR_5 = VAR_3->l - VAR_3->c; (void)VAR_5;
            { int VAR_6 = VAR_3->l - VAR_3->c; (void)VAR_6;
                { int VAR_7 = FUNC_2(VAR_3);
                    if (VAR_7 == 0) goto lab0;
                    if (VAR_7 < 0) return VAR_7;
                }
                VAR_3->c = VAR_3->l - VAR_6;
                VAR_3->ket = VAR_3->c;
                if (VAR_3->c <= VAR_3->lb) goto lab0;
                VAR_3->c--;
                VAR_3->bra = VAR_3->c;
                { int VAR_8 = FUNC_3(VAR_3);
                    if (VAR_8 < 0) return VAR_8;
                }
            }
        lab0:
            VAR_3->c = VAR_3->l - VAR_5;
        }
        { int VAR_9 = VAR_3->l - VAR_3->c; (void)VAR_9;
            VAR_3->ket = VAR_3->c;
            if (FUNC_1(VAR_3, VAR_0, 97, 228, 0)) goto lab1;
            VAR_3->bra = VAR_3->c;
            if (FUNC_1(VAR_3, VAR_1, 98, 122, 0)) goto lab1;
            { int VAR_10 = FUNC_3(VAR_3);
                if (VAR_10 < 0) return VAR_10;
            }
        lab1:
            VAR_3->c = VAR_3->l - VAR_9;
        }
        { int VAR_11 = VAR_3->l - VAR_3->c; (void)VAR_11;
            VAR_3->ket = VAR_3->c;
            if (VAR_3->c <= VAR_3->lb || VAR_3->p[VAR_3->c - 1] != 'j') goto lab2;
            VAR_3->c--;
            VAR_3->bra = VAR_3->c;
            { int VAR_12 = VAR_3->l - VAR_3->c; (void)VAR_12;
                if (VAR_3->c <= VAR_3->lb || VAR_3->p[VAR_3->c - 1] != 'o') goto lab4;
                VAR_3->c--;
                goto lab3;
            lab4:
                VAR_3->c = VAR_3->l - VAR_12;
                if (VAR_3->c <= VAR_3->lb || VAR_3->p[VAR_3->c - 1] != 'u') goto lab2;
                VAR_3->c--;
            }
        lab3:
            { int VAR_13 = FUNC_3(VAR_3);
                if (VAR_13 < 0) return VAR_13;
            }
        lab2:
            VAR_3->c = VAR_3->l - VAR_11;
        }
        { int VAR_14 = VAR_3->l - VAR_3->c; (void)VAR_14;
            VAR_3->ket = VAR_3->c;
            if (VAR_3->c <= VAR_3->lb || VAR_3->p[VAR_3->c - 1] != 'o') goto lab5;
            VAR_3->c--;
            VAR_3->bra = VAR_3->c;
            if (VAR_3->c <= VAR_3->lb || VAR_3->p[VAR_3->c - 1] != 'j') goto lab5;
            VAR_3->c--;
            { int VAR_15 = FUNC_3(VAR_3);
                if (VAR_15 < 0) return VAR_15;
            }
        lab5:
            VAR_3->c = VAR_3->l - VAR_14;
        }
        VAR_3->lb = VAR_4;
    }
    if (FUNC_1(VAR_3, VAR_2, 97, 246, 1) < 0) return 0;
    VAR_3->ket = VAR_3->c;
    if (FUNC_1(VAR_3, VAR_1, 98, 122, 0)) return 0;
    VAR_3->bra = VAR_3->c;
    VAR_3->S[0] = FUNC_4(VAR_3, VAR_3->S[0]);
    if (VAR_3->S[0] == 0) return -1;
    if (!(FUNC_0(VAR_3, VAR_3->S[0]))) return 0;
    { int VAR_16 = FUNC_3(VAR_3);
        if (VAR_16 < 0) return VAR_16;
    }
    return 1;
}
