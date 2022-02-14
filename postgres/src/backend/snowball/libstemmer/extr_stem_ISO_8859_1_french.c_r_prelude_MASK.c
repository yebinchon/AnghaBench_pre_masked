
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; int bra; int l; unsigned char* p; size_t ket; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct SN_env*,int ,int,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct SN_env * VAR_8) {
    while(1) {
        int VAR_9 = VAR_8->c;
        while(1) {
            int VAR_10 = VAR_8->c;
            { int VAR_11 = VAR_8->c;
                if (FUNC_0(VAR_8, VAR_0, 97, 251, 0)) goto lab3;
                VAR_8->bra = VAR_8->c;
                { int VAR_12 = VAR_8->c;
                    if (VAR_8->c == VAR_8->l || VAR_8->p[VAR_8->c] != 'u') goto lab5;
                    VAR_8->c++;
                    VAR_8->ket = VAR_8->c;
                    if (FUNC_0(VAR_8, VAR_0, 97, 251, 0)) goto lab5;
                    { int VAR_13 = FUNC_1(VAR_8, 1, VAR_1);
                        if (VAR_13 < 0) return VAR_13;
                    }
                    goto lab4;
                lab5:
                    VAR_8->c = VAR_12;
                    if (VAR_8->c == VAR_8->l || VAR_8->p[VAR_8->c] != 'i') goto lab6;
                    VAR_8->c++;
                    VAR_8->ket = VAR_8->c;
                    if (FUNC_0(VAR_8, VAR_0, 97, 251, 0)) goto lab6;
                    { int VAR_14 = FUNC_1(VAR_8, 1, VAR_2);
                        if (VAR_14 < 0) return VAR_14;
                    }
                    goto lab4;
                lab6:
                    VAR_8->c = VAR_12;
                    if (VAR_8->c == VAR_8->l || VAR_8->p[VAR_8->c] != 'y') goto lab3;
                    VAR_8->c++;
                    VAR_8->ket = VAR_8->c;
                    { int VAR_15 = FUNC_1(VAR_8, 1, VAR_3);
                        if (VAR_15 < 0) return VAR_15;
                    }
                }
            lab4:
                goto lab2;
            lab3:
                VAR_8->c = VAR_11;
                VAR_8->bra = VAR_8->c;
                if (VAR_8->c == VAR_8->l || VAR_8->p[VAR_8->c] != 0xEB) goto lab7;
                VAR_8->c++;
                VAR_8->ket = VAR_8->c;
                { int VAR_16 = FUNC_1(VAR_8, 2, VAR_4);
                    if (VAR_16 < 0) return VAR_16;
                }
                goto lab2;
            lab7:
                VAR_8->c = VAR_11;
                VAR_8->bra = VAR_8->c;
                if (VAR_8->c == VAR_8->l || VAR_8->p[VAR_8->c] != 0xEF) goto lab8;
                VAR_8->c++;
                VAR_8->ket = VAR_8->c;
                { int VAR_17 = FUNC_1(VAR_8, 2, VAR_5);
                    if (VAR_17 < 0) return VAR_17;
                }
                goto lab2;
            lab8:
                VAR_8->c = VAR_11;
                VAR_8->bra = VAR_8->c;
                if (VAR_8->c == VAR_8->l || VAR_8->p[VAR_8->c] != 'y') goto lab9;
                VAR_8->c++;
                VAR_8->ket = VAR_8->c;
                if (FUNC_0(VAR_8, VAR_0, 97, 251, 0)) goto lab9;
                { int VAR_18 = FUNC_1(VAR_8, 1, VAR_6);
                    if (VAR_18 < 0) return VAR_18;
                }
                goto lab2;
            lab9:
                VAR_8->c = VAR_11;
                if (VAR_8->c == VAR_8->l || VAR_8->p[VAR_8->c] != 'q') goto lab1;
                VAR_8->c++;
                VAR_8->bra = VAR_8->c;
                if (VAR_8->c == VAR_8->l || VAR_8->p[VAR_8->c] != 'u') goto lab1;
                VAR_8->c++;
                VAR_8->ket = VAR_8->c;
                { int VAR_19 = FUNC_1(VAR_8, 1, VAR_7);
                    if (VAR_19 < 0) return VAR_19;
                }
            }
        lab2:
            VAR_8->c = VAR_10;
            break;
        lab1:
            VAR_8->c = VAR_10;
            if (VAR_8->c >= VAR_8->l) goto lab0;
            VAR_8->c++;
        }
        continue;
    lab0:
        VAR_8->c = VAR_9;
        break;
    }
    return 1;
}
