
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; int* I; int lb; int l; int ket; char* p; int bra; scalar_t__* S; } ;


 int FUNC_0 (struct SN_env*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct SN_env*,int ,int,int,int) ;
 int FUNC_2 (struct SN_env*) ;
 int FUNC_3 (char*,int,int,int ,int) ;
 int FUNC_4 (struct SN_env*) ;
 scalar_t__ FUNC_5 (struct SN_env*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct SN_env * VAR_3) {

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
                { int VAR_8 = FUNC_3(VAR_3->p, VAR_3->c, VAR_3->lb, 0, -1);
                    if (VAR_8 < 0) goto lab0;
                    VAR_3->c = VAR_8;
                }
                VAR_3->bra = VAR_3->c;
                { int VAR_9 = FUNC_4(VAR_3);
                    if (VAR_9 < 0) return VAR_9;
                }
            }
        lab0:
            VAR_3->c = VAR_3->l - VAR_5;
        }
        { int VAR_10 = VAR_3->l - VAR_3->c; (void)VAR_10;
            VAR_3->ket = VAR_3->c;
            if (FUNC_1(VAR_3, VAR_0, 97, 228, 0)) goto lab1;
            VAR_3->bra = VAR_3->c;
            if (FUNC_1(VAR_3, VAR_1, 98, 122, 0)) goto lab1;
            { int VAR_11 = FUNC_4(VAR_3);
                if (VAR_11 < 0) return VAR_11;
            }
        lab1:
            VAR_3->c = VAR_3->l - VAR_10;
        }
        { int VAR_12 = VAR_3->l - VAR_3->c; (void)VAR_12;
            VAR_3->ket = VAR_3->c;
            if (VAR_3->c <= VAR_3->lb || VAR_3->p[VAR_3->c - 1] != 'j') goto lab2;
            VAR_3->c--;
            VAR_3->bra = VAR_3->c;
            { int VAR_13 = VAR_3->l - VAR_3->c; (void)VAR_13;
                if (VAR_3->c <= VAR_3->lb || VAR_3->p[VAR_3->c - 1] != 'o') goto lab4;
                VAR_3->c--;
                goto lab3;
            lab4:
                VAR_3->c = VAR_3->l - VAR_13;
                if (VAR_3->c <= VAR_3->lb || VAR_3->p[VAR_3->c - 1] != 'u') goto lab2;
                VAR_3->c--;
            }
        lab3:
            { int VAR_14 = FUNC_4(VAR_3);
                if (VAR_14 < 0) return VAR_14;
            }
        lab2:
            VAR_3->c = VAR_3->l - VAR_12;
        }
        { int VAR_15 = VAR_3->l - VAR_3->c; (void)VAR_15;
            VAR_3->ket = VAR_3->c;
            if (VAR_3->c <= VAR_3->lb || VAR_3->p[VAR_3->c - 1] != 'o') goto lab5;
            VAR_3->c--;
            VAR_3->bra = VAR_3->c;
            if (VAR_3->c <= VAR_3->lb || VAR_3->p[VAR_3->c - 1] != 'j') goto lab5;
            VAR_3->c--;
            { int VAR_16 = FUNC_4(VAR_3);
                if (VAR_16 < 0) return VAR_16;
            }
        lab5:
            VAR_3->c = VAR_3->l - VAR_15;
        }
        VAR_3->lb = VAR_4;
    }
    if (FUNC_1(VAR_3, VAR_2, 97, 246, 1) < 0) return 0;
    VAR_3->ket = VAR_3->c;
    if (FUNC_1(VAR_3, VAR_1, 98, 122, 0)) return 0;
    VAR_3->bra = VAR_3->c;
    VAR_3->S[0] = FUNC_5(VAR_3, VAR_3->S[0]);
    if (VAR_3->S[0] == 0) return -1;
    if (!(FUNC_0(VAR_3, VAR_3->S[0]))) return 0;
    { int VAR_17 = FUNC_4(VAR_3);
        if (VAR_17 < 0) return VAR_17;
    }
    return 1;
}
