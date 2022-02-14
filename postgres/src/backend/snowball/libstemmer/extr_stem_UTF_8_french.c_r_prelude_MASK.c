
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; int bra; int l; unsigned char* p; size_t ket; } ;


 int FUNC_0 (struct SN_env*,int,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct SN_env*,int ,int,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (unsigned char*,int,int ,int,int) ;
 int FUNC_3 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct SN_env * VAR_10) {
    while(1) {
        int VAR_11 = VAR_10->c;
        while(1) {
            int VAR_12 = VAR_10->c;
            { int VAR_13 = VAR_10->c;
                if (FUNC_1(VAR_10, VAR_0, 97, 251, 0)) goto lab3;
                VAR_10->bra = VAR_10->c;
                { int VAR_14 = VAR_10->c;
                    if (VAR_10->c == VAR_10->l || VAR_10->p[VAR_10->c] != 'u') goto lab5;
                    VAR_10->c++;
                    VAR_10->ket = VAR_10->c;
                    if (FUNC_1(VAR_10, VAR_0, 97, 251, 0)) goto lab5;
                    { int VAR_15 = FUNC_3(VAR_10, 1, VAR_1);
                        if (VAR_15 < 0) return VAR_15;
                    }
                    goto lab4;
                lab5:
                    VAR_10->c = VAR_14;
                    if (VAR_10->c == VAR_10->l || VAR_10->p[VAR_10->c] != 'i') goto lab6;
                    VAR_10->c++;
                    VAR_10->ket = VAR_10->c;
                    if (FUNC_1(VAR_10, VAR_0, 97, 251, 0)) goto lab6;
                    { int VAR_16 = FUNC_3(VAR_10, 1, VAR_2);
                        if (VAR_16 < 0) return VAR_16;
                    }
                    goto lab4;
                lab6:
                    VAR_10->c = VAR_14;
                    if (VAR_10->c == VAR_10->l || VAR_10->p[VAR_10->c] != 'y') goto lab3;
                    VAR_10->c++;
                    VAR_10->ket = VAR_10->c;
                    { int VAR_17 = FUNC_3(VAR_10, 1, VAR_3);
                        if (VAR_17 < 0) return VAR_17;
                    }
                }
            lab4:
                goto lab2;
            lab3:
                VAR_10->c = VAR_13;
                VAR_10->bra = VAR_10->c;
                if (!(FUNC_0(VAR_10, 2, VAR_4))) goto lab7;
                VAR_10->ket = VAR_10->c;
                { int VAR_18 = FUNC_3(VAR_10, 2, VAR_5);
                    if (VAR_18 < 0) return VAR_18;
                }
                goto lab2;
            lab7:
                VAR_10->c = VAR_13;
                VAR_10->bra = VAR_10->c;
                if (!(FUNC_0(VAR_10, 2, VAR_6))) goto lab8;
                VAR_10->ket = VAR_10->c;
                { int VAR_19 = FUNC_3(VAR_10, 2, VAR_7);
                    if (VAR_19 < 0) return VAR_19;
                }
                goto lab2;
            lab8:
                VAR_10->c = VAR_13;
                VAR_10->bra = VAR_10->c;
                if (VAR_10->c == VAR_10->l || VAR_10->p[VAR_10->c] != 'y') goto lab9;
                VAR_10->c++;
                VAR_10->ket = VAR_10->c;
                if (FUNC_1(VAR_10, VAR_0, 97, 251, 0)) goto lab9;
                { int VAR_20 = FUNC_3(VAR_10, 1, VAR_8);
                    if (VAR_20 < 0) return VAR_20;
                }
                goto lab2;
            lab9:
                VAR_10->c = VAR_13;
                if (VAR_10->c == VAR_10->l || VAR_10->p[VAR_10->c] != 'q') goto lab1;
                VAR_10->c++;
                VAR_10->bra = VAR_10->c;
                if (VAR_10->c == VAR_10->l || VAR_10->p[VAR_10->c] != 'u') goto lab1;
                VAR_10->c++;
                VAR_10->ket = VAR_10->c;
                { int VAR_21 = FUNC_3(VAR_10, 1, VAR_9);
                    if (VAR_21 < 0) return VAR_21;
                }
            }
        lab2:
            VAR_10->c = VAR_12;
            break;
        lab1:
            VAR_10->c = VAR_12;
            { int VAR_22 = FUNC_2(VAR_10->p, VAR_10->c, 0, VAR_10->l, 1);
                if (VAR_22 < 0) goto lab0;
                VAR_10->c = VAR_22;
            }
        }
        continue;
    lab0:
        VAR_10->c = VAR_11;
        break;
    }
    return 1;
}
