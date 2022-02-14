
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; int bra; int ket; unsigned char* p; int l; } ;


 int FUNC_0 (struct SN_env*,int,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct SN_env*,int ,int,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (unsigned char*,int,int ,int,int) ;
 int FUNC_3 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct SN_env * VAR_5) {
    { int VAR_6 = VAR_5->c;
        while(1) {
            int VAR_7 = VAR_5->c;
            { int VAR_8 = VAR_5->c;
                VAR_5->bra = VAR_5->c;
                if (!(FUNC_0(VAR_5, 2, VAR_1))) goto lab2;
                VAR_5->ket = VAR_5->c;
                { int VAR_9 = FUNC_3(VAR_5, 2, VAR_2);
                    if (VAR_9 < 0) return VAR_9;
                }
                goto lab1;
            lab2:
                VAR_5->c = VAR_8;
                { int VAR_10 = FUNC_2(VAR_5->p, VAR_5->c, 0, VAR_5->l, 1);
                    if (VAR_10 < 0) goto lab0;
                    VAR_5->c = VAR_10;
                }
            }
        lab1:
            continue;
        lab0:
            VAR_5->c = VAR_7;
            break;
        }
        VAR_5->c = VAR_6;
    }
    while(1) {
        int VAR_11 = VAR_5->c;
        while(1) {
            int VAR_12 = VAR_5->c;
            if (FUNC_1(VAR_5, VAR_0, 97, 252, 0)) goto lab4;
            VAR_5->bra = VAR_5->c;
            { int VAR_13 = VAR_5->c;
                if (VAR_5->c == VAR_5->l || VAR_5->p[VAR_5->c] != 'u') goto lab6;
                VAR_5->c++;
                VAR_5->ket = VAR_5->c;
                if (FUNC_1(VAR_5, VAR_0, 97, 252, 0)) goto lab6;
                { int VAR_14 = FUNC_3(VAR_5, 1, VAR_3);
                    if (VAR_14 < 0) return VAR_14;
                }
                goto lab5;
            lab6:
                VAR_5->c = VAR_13;
                if (VAR_5->c == VAR_5->l || VAR_5->p[VAR_5->c] != 'y') goto lab4;
                VAR_5->c++;
                VAR_5->ket = VAR_5->c;
                if (FUNC_1(VAR_5, VAR_0, 97, 252, 0)) goto lab4;
                { int VAR_15 = FUNC_3(VAR_5, 1, VAR_4);
                    if (VAR_15 < 0) return VAR_15;
                }
            }
        lab5:
            VAR_5->c = VAR_12;
            break;
        lab4:
            VAR_5->c = VAR_12;
            { int VAR_16 = FUNC_2(VAR_5->p, VAR_5->c, 0, VAR_5->l, 1);
                if (VAR_16 < 0) goto lab3;
                VAR_5->c = VAR_16;
            }
        }
        continue;
    lab3:
        VAR_5->c = VAR_11;
        break;
    }
    return 1;
}
