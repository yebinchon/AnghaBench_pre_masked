
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; int bra; int l; unsigned char* p; size_t ket; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct SN_env*,int ,int,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,int ,int,int) ;
 int FUNC_2 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct SN_env * VAR_3) {
    while(1) {
        int VAR_4 = VAR_3->c;
        while(1) {
            int VAR_5 = VAR_3->c;
            if (FUNC_0(VAR_3, VAR_0, 97, 259, 0)) goto lab1;
            VAR_3->bra = VAR_3->c;
            { int VAR_6 = VAR_3->c;
                if (VAR_3->c == VAR_3->l || VAR_3->p[VAR_3->c] != 'u') goto lab3;
                VAR_3->c++;
                VAR_3->ket = VAR_3->c;
                if (FUNC_0(VAR_3, VAR_0, 97, 259, 0)) goto lab3;
                { int VAR_7 = FUNC_2(VAR_3, 1, VAR_1);
                    if (VAR_7 < 0) return VAR_7;
                }
                goto lab2;
            lab3:
                VAR_3->c = VAR_6;
                if (VAR_3->c == VAR_3->l || VAR_3->p[VAR_3->c] != 'i') goto lab1;
                VAR_3->c++;
                VAR_3->ket = VAR_3->c;
                if (FUNC_0(VAR_3, VAR_0, 97, 259, 0)) goto lab1;
                { int VAR_8 = FUNC_2(VAR_3, 1, VAR_2);
                    if (VAR_8 < 0) return VAR_8;
                }
            }
        lab2:
            VAR_3->c = VAR_5;
            break;
        lab1:
            VAR_3->c = VAR_5;
            { int VAR_9 = FUNC_1(VAR_3->p, VAR_3->c, 0, VAR_3->l, 1);
                if (VAR_9 < 0) goto lab0;
                VAR_3->c = VAR_9;
            }
        }
        continue;
    lab0:
        VAR_3->c = VAR_4;
        break;
    }
    return 1;
}
