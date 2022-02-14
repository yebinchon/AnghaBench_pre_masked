
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int l; int c; int ket; int bra; int * B; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int VAR_2 ;
 int FUNC_1 (struct SN_env*) ;
 int FUNC_2 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct SN_env * VAR_3) {
    { int VAR_4 = VAR_3->l - VAR_3->c; (void)VAR_4;
        VAR_3->ket = VAR_3->c;
        if (!(FUNC_0(VAR_3, VAR_0, 3))) goto lab0;
        VAR_3->bra = VAR_3->c;
        { int VAR_5 = FUNC_2(VAR_3, 4, VAR_2);
            if (VAR_5 < 0) return VAR_5;
        }
    lab0:
        VAR_3->c = VAR_3->l - VAR_4;
    }
    if (!(VAR_3->B[0])) return 0;
    VAR_3->ket = VAR_3->c;
    if (!(FUNC_0(VAR_3, VAR_1, 84))) return 0;
    VAR_3->bra = VAR_3->c;
    { int VAR_6 = FUNC_1(VAR_3);
        if (VAR_6 < 0) return VAR_6;
    }
    return 1;
}
