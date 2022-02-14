
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; int bra; int l; int* p; int ket; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct SN_env*,int ,int,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct SN_env * VAR_10) {
    int VAR_11;
    { int VAR_12 = VAR_10->c;
        while(1) {
            int VAR_13 = VAR_10->c;
            VAR_10->bra = VAR_10->c;
            if (VAR_10->c >= VAR_10->l || VAR_10->p[VAR_10->c + 0] >> 5 != 7 || !((340306450 >> (VAR_10->p[VAR_10->c + 0] & 0x1f)) & 1)) VAR_11 = 6; else
            VAR_11 = FUNC_0(VAR_10, VAR_0, 11);
            if (!(VAR_11)) goto lab0;
            VAR_10->ket = VAR_10->c;
            switch (VAR_11) {
                case 1:
                    { int VAR_14 = FUNC_2(VAR_10, 1, VAR_2);
                        if (VAR_14 < 0) return VAR_14;
                    }
                    break;
                case 2:
                    { int VAR_15 = FUNC_2(VAR_10, 1, VAR_3);
                        if (VAR_15 < 0) return VAR_15;
                    }
                    break;
                case 3:
                    { int VAR_16 = FUNC_2(VAR_10, 1, VAR_4);
                        if (VAR_16 < 0) return VAR_16;
                    }
                    break;
                case 4:
                    { int VAR_17 = FUNC_2(VAR_10, 1, VAR_5);
                        if (VAR_17 < 0) return VAR_17;
                    }
                    break;
                case 5:
                    { int VAR_18 = FUNC_2(VAR_10, 1, VAR_6);
                        if (VAR_18 < 0) return VAR_18;
                    }
                    break;
                case 6:
                    if (VAR_10->c >= VAR_10->l) goto lab0;
                    VAR_10->c++;
                    break;
            }
            continue;
        lab0:
            VAR_10->c = VAR_13;
            break;
        }
        VAR_10->c = VAR_12;
    }
    { int VAR_19 = VAR_10->c;
        VAR_10->bra = VAR_10->c;
        if (VAR_10->c == VAR_10->l || VAR_10->p[VAR_10->c] != 'y') { VAR_10->c = VAR_19; goto lab1; }
        VAR_10->c++;
        VAR_10->ket = VAR_10->c;
        { int VAR_20 = FUNC_2(VAR_10, 1, VAR_7);
            if (VAR_20 < 0) return VAR_20;
        }
    lab1:
        ;
    }
    while(1) {
        int VAR_21 = VAR_10->c;
        while(1) {
            int VAR_22 = VAR_10->c;
            if (FUNC_1(VAR_10, VAR_1, 97, 232, 0)) goto lab3;
            VAR_10->bra = VAR_10->c;
            { int VAR_23 = VAR_10->c;
                if (VAR_10->c == VAR_10->l || VAR_10->p[VAR_10->c] != 'i') goto lab5;
                VAR_10->c++;
                VAR_10->ket = VAR_10->c;
                if (FUNC_1(VAR_10, VAR_1, 97, 232, 0)) goto lab5;
                { int VAR_24 = FUNC_2(VAR_10, 1, VAR_8);
                    if (VAR_24 < 0) return VAR_24;
                }
                goto lab4;
            lab5:
                VAR_10->c = VAR_23;
                if (VAR_10->c == VAR_10->l || VAR_10->p[VAR_10->c] != 'y') goto lab3;
                VAR_10->c++;
                VAR_10->ket = VAR_10->c;
                { int VAR_25 = FUNC_2(VAR_10, 1, VAR_9);
                    if (VAR_25 < 0) return VAR_25;
                }
            }
        lab4:
            VAR_10->c = VAR_22;
            break;
        lab3:
            VAR_10->c = VAR_22;
            if (VAR_10->c >= VAR_10->l) goto lab2;
            VAR_10->c++;
        }
        continue;
    lab2:
        VAR_10->c = VAR_21;
        break;
    }
    return 1;
}
