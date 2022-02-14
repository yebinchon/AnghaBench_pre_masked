
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int* B; int c; int bra; int l; char* p; size_t ket; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct SN_env*,int ,int,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,int ,int,int) ;
 int FUNC_2 (struct SN_env*) ;
 int FUNC_3 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct SN_env * VAR_3) {
    VAR_3->B[0] = 0;
    { int VAR_4 = VAR_3->c;
        VAR_3->bra = VAR_3->c;
        if (VAR_3->c == VAR_3->l || VAR_3->p[VAR_3->c] != '\'') goto lab0;
        VAR_3->c++;
        VAR_3->ket = VAR_3->c;
        { int VAR_5 = FUNC_2(VAR_3);
            if (VAR_5 < 0) return VAR_5;
        }
    lab0:
        VAR_3->c = VAR_4;
    }
    { int VAR_6 = VAR_3->c;
        VAR_3->bra = VAR_3->c;
        if (VAR_3->c == VAR_3->l || VAR_3->p[VAR_3->c] != 'y') goto lab1;
        VAR_3->c++;
        VAR_3->ket = VAR_3->c;
        { int VAR_7 = FUNC_3(VAR_3, 1, VAR_1);
            if (VAR_7 < 0) return VAR_7;
        }
        VAR_3->B[0] = 1;
    lab1:
        VAR_3->c = VAR_6;
    }
    { int VAR_8 = VAR_3->c;
        while(1) {
            int VAR_9 = VAR_3->c;
            while(1) {
                int VAR_10 = VAR_3->c;
                if (FUNC_0(VAR_3, VAR_0, 97, 121, 0)) goto lab4;
                VAR_3->bra = VAR_3->c;
                if (VAR_3->c == VAR_3->l || VAR_3->p[VAR_3->c] != 'y') goto lab4;
                VAR_3->c++;
                VAR_3->ket = VAR_3->c;
                VAR_3->c = VAR_10;
                break;
            lab4:
                VAR_3->c = VAR_10;
                { int VAR_11 = FUNC_1(VAR_3->p, VAR_3->c, 0, VAR_3->l, 1);
                    if (VAR_11 < 0) goto lab3;
                    VAR_3->c = VAR_11;
                }
            }
            { int VAR_12 = FUNC_3(VAR_3, 1, VAR_2);
                if (VAR_12 < 0) return VAR_12;
            }
            VAR_3->B[0] = 1;
            continue;
        lab3:
            VAR_3->c = VAR_9;
            break;
        }
        VAR_3->c = VAR_8;
    }
    return 1;
}
