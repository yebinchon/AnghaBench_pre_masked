
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int ket; int c; int bra; int l; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int,int ) ;
 int FUNC_1 (struct SN_env*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct SN_env*) ;

__attribute__((used)) static int FUNC_3(struct SN_env * VAR_3) {
    int VAR_4;
    VAR_3->ket = VAR_3->c;
    VAR_4 = FUNC_1(VAR_3, VAR_0, 17);
    if (!(VAR_4)) return 0;
    VAR_3->bra = VAR_3->c;
    switch (VAR_4) {
        case 1:
            { int VAR_5 = FUNC_2(VAR_3);
                if (VAR_5 < 0) return VAR_5;
            }
            break;
        case 2:
            { int VAR_6 = VAR_3->l - VAR_3->c; (void)VAR_6;
                { int VAR_7 = VAR_3->l - VAR_3->c; (void)VAR_7;
                    if (!(FUNC_0(VAR_3, 3, VAR_1))) goto lab3;
                    goto lab2;
                lab3:
                    VAR_3->c = VAR_3->l - VAR_7;
                    if (!(FUNC_0(VAR_3, 3, VAR_2))) goto lab1;
                }
            lab2:
                goto lab0;
            lab1:
                VAR_3->c = VAR_3->l - VAR_6;
                { int VAR_8 = FUNC_2(VAR_3);
                    if (VAR_8 < 0) return VAR_8;
                }
            }
        lab0:
            break;
    }
    return 1;
}
