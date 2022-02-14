
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; int bra; int l; int* p; size_t ket; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct SN_env*,int ,int,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct SN_env * VAR_4) {
    { int VAR_5 = VAR_4->c;
        while(1) {
            int VAR_6 = VAR_4->c;
            { int VAR_7 = VAR_4->c;
                VAR_4->bra = VAR_4->c;
                if (VAR_4->c == VAR_4->l || VAR_4->p[VAR_4->c] != 0xDF) goto lab2;
                VAR_4->c++;
                VAR_4->ket = VAR_4->c;
                { int VAR_8 = FUNC_1(VAR_4, 2, VAR_1);
                    if (VAR_8 < 0) return VAR_8;
                }
                goto lab1;
            lab2:
                VAR_4->c = VAR_7;
                if (VAR_4->c >= VAR_4->l) goto lab0;
                VAR_4->c++;
            }
        lab1:
            continue;
        lab0:
            VAR_4->c = VAR_6;
            break;
        }
        VAR_4->c = VAR_5;
    }
    while(1) {
        int VAR_9 = VAR_4->c;
        while(1) {
            int VAR_10 = VAR_4->c;
            if (FUNC_0(VAR_4, VAR_0, 97, 252, 0)) goto lab4;
            VAR_4->bra = VAR_4->c;
            { int VAR_11 = VAR_4->c;
                if (VAR_4->c == VAR_4->l || VAR_4->p[VAR_4->c] != 'u') goto lab6;
                VAR_4->c++;
                VAR_4->ket = VAR_4->c;
                if (FUNC_0(VAR_4, VAR_0, 97, 252, 0)) goto lab6;
                { int VAR_12 = FUNC_1(VAR_4, 1, VAR_2);
                    if (VAR_12 < 0) return VAR_12;
                }
                goto lab5;
            lab6:
                VAR_4->c = VAR_11;
                if (VAR_4->c == VAR_4->l || VAR_4->p[VAR_4->c] != 'y') goto lab4;
                VAR_4->c++;
                VAR_4->ket = VAR_4->c;
                if (FUNC_0(VAR_4, VAR_0, 97, 252, 0)) goto lab4;
                { int VAR_13 = FUNC_1(VAR_4, 1, VAR_3);
                    if (VAR_13 < 0) return VAR_13;
                }
            }
        lab5:
            VAR_4->c = VAR_10;
            break;
        lab4:
            VAR_4->c = VAR_10;
            if (VAR_4->c >= VAR_4->l) goto lab3;
            VAR_4->c++;
        }
        continue;
    lab3:
        VAR_4->c = VAR_9;
        break;
    }
    return 1;
}
