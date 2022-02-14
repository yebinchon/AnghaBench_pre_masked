
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int ket; int c; int l; int bra; } ;


 int FUNC_0 (struct SN_env*,int,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct SN_env*,int ,int,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct SN_env * VAR_4) {
    { int VAR_5 = 1;
        while(1) {
            if (FUNC_1(VAR_4, VAR_0, 97, 251, 0)) goto lab0;
            VAR_5--;
            continue;
        lab0:
            break;
        }
        if (VAR_5 > 0) return 0;
    }
    VAR_4->ket = VAR_4->c;
    { int VAR_6 = VAR_4->l - VAR_4->c; (void)VAR_6;
        if (!(FUNC_0(VAR_4, 2, VAR_1))) goto lab2;
        goto lab1;
    lab2:
        VAR_4->c = VAR_4->l - VAR_6;
        if (!(FUNC_0(VAR_4, 2, VAR_2))) return 0;
    }
lab1:
    VAR_4->bra = VAR_4->c;
    { int VAR_7 = FUNC_2(VAR_4, 1, VAR_3);
        if (VAR_7 < 0) return VAR_7;
    }
    return 1;
}
