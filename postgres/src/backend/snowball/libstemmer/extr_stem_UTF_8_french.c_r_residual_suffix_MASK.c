
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int l; int c; int ket; int lb; char* p; int bra; int* I; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int,int ) ;
 int FUNC_1 (struct SN_env*,int ,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct SN_env*,int ,int,int,int ) ;
 int FUNC_3 (struct SN_env*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct SN_env*) ;
 int FUNC_5 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_6(struct SN_env * VAR_4) {
    int VAR_5;
    { int VAR_6 = VAR_4->l - VAR_4->c; (void)VAR_6;
        VAR_4->ket = VAR_4->c;
        if (VAR_4->c <= VAR_4->lb || VAR_4->p[VAR_4->c - 1] != 's') { VAR_4->c = VAR_4->l - VAR_6; goto lab0; }
        VAR_4->c--;
        VAR_4->bra = VAR_4->c;
        { int VAR_7 = VAR_4->l - VAR_4->c;
            { int VAR_8 = VAR_4->l - VAR_4->c; (void)VAR_8;
                if (!(FUNC_0(VAR_4, 2, VAR_2))) goto lab2;
                goto lab1;
            lab2:
                VAR_4->c = VAR_4->l - VAR_8;
                if (FUNC_2(VAR_4, VAR_1, 97, 232, 0)) { VAR_4->c = VAR_4->l - VAR_6; goto lab0; }
            }
        lab1:
            VAR_4->c = VAR_4->l - VAR_7;
        }
        { int VAR_9 = FUNC_4(VAR_4);
            if (VAR_9 < 0) return VAR_9;
        }
    lab0:
        ;
    }

    { int VAR_10;
        if (VAR_4->c < VAR_4->I[0]) return 0;
        VAR_10 = VAR_4->lb; VAR_4->lb = VAR_4->I[0];
        VAR_4->ket = VAR_4->c;
        if (VAR_4->c <= VAR_4->lb || VAR_4->p[VAR_4->c - 1] >> 5 != 3 || !((278560 >> (VAR_4->p[VAR_4->c - 1] & 0x1f)) & 1)) { VAR_4->lb = VAR_10; return 0; }
        VAR_5 = FUNC_1(VAR_4, VAR_0, 6);
        if (!(VAR_5)) { VAR_4->lb = VAR_10; return 0; }
        VAR_4->bra = VAR_4->c;
        switch (VAR_5) {
            case 1:
                { int VAR_11 = FUNC_3(VAR_4);
                    if (VAR_11 == 0) { VAR_4->lb = VAR_10; return 0; }
                    if (VAR_11 < 0) return VAR_11;
                }
                { int VAR_12 = VAR_4->l - VAR_4->c; (void)VAR_12;
                    if (VAR_4->c <= VAR_4->lb || VAR_4->p[VAR_4->c - 1] != 's') goto lab4;
                    VAR_4->c--;
                    goto lab3;
                lab4:
                    VAR_4->c = VAR_4->l - VAR_12;
                    if (VAR_4->c <= VAR_4->lb || VAR_4->p[VAR_4->c - 1] != 't') { VAR_4->lb = VAR_10; return 0; }
                    VAR_4->c--;
                }
            lab3:
                { int VAR_13 = FUNC_4(VAR_4);
                    if (VAR_13 < 0) return VAR_13;
                }
                break;
            case 2:
                { int VAR_14 = FUNC_5(VAR_4, 1, VAR_3);
                    if (VAR_14 < 0) return VAR_14;
                }
                break;
            case 3:
                { int VAR_15 = FUNC_4(VAR_4);
                    if (VAR_15 < 0) return VAR_15;
                }
                break;
        }
        VAR_4->lb = VAR_10;
    }
    return 1;
}
