
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int l; int c; int ket; int bra; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int,int ) ;
 int FUNC_1 (struct SN_env*,int ,int) ;
 int FUNC_2 (struct SN_env*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct SN_env*) ;

__attribute__((used)) static int FUNC_4(struct SN_env * VAR_3) {
    int VAR_4;
    { int VAR_5 = FUNC_2(VAR_3);
        if (VAR_5 <= 0) return VAR_5;
    }
    { int VAR_6 = VAR_3->l - VAR_3->c; (void)VAR_6;
        VAR_3->ket = VAR_3->c;
        VAR_4 = FUNC_1(VAR_3, VAR_0, 8);
        if (!(VAR_4)) { VAR_3->c = VAR_3->l - VAR_6; goto lab0; }
        VAR_3->bra = VAR_3->c;
        switch (VAR_4) {
            case 1:
                { int VAR_7 = VAR_3->l - VAR_3->c; (void)VAR_7;
                    if (!(FUNC_0(VAR_3, 2, VAR_1))) goto lab2;
                    goto lab1;
                lab2:
                    VAR_3->c = VAR_3->l - VAR_7;
                    if (!(FUNC_0(VAR_3, 2, VAR_2))) { VAR_3->c = VAR_3->l - VAR_6; goto lab0; }
                }
            lab1:
                { int VAR_8 = FUNC_3(VAR_3);
                    if (VAR_8 < 0) return VAR_8;
                }
                break;
            case 2:
                { int VAR_9 = FUNC_3(VAR_3);
                    if (VAR_9 < 0) return VAR_9;
                }
                break;
        }
    lab0:
        ;
    }
    return 1;
}
