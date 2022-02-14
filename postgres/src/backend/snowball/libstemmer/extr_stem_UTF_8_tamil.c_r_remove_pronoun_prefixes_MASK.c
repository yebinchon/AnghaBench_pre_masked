
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int* B; int bra; int c; int l; int* p; int ket; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct SN_env*,int,int ) ;
 int FUNC_1 (struct SN_env*,int ,int) ;
 int FUNC_2 (struct SN_env*) ;
 int VAR_2 ;
 int FUNC_3 (struct SN_env*) ;

__attribute__((used)) static int FUNC_4(struct SN_env * VAR_3) {
    VAR_3->B[0] = 0;
    VAR_3->bra = VAR_3->c;
    if (VAR_3->c + 2 >= VAR_3->l || VAR_3->p[VAR_3->c + 2] >> 5 != 4 || !((672 >> (VAR_3->p[VAR_3->c + 2] & 0x1f)) & 1)) return 0;
    if (!(FUNC_1(VAR_3, VAR_0, 3))) return 0;
    if (!(FUNC_1(VAR_3, VAR_1, 10))) return 0;
    if (!(FUNC_0(VAR_3, 3, VAR_2))) return 0;
    VAR_3->ket = VAR_3->c;
    { int VAR_4 = FUNC_3(VAR_3);
        if (VAR_4 < 0) return VAR_4;
    }
    VAR_3->B[0] = 1;
    { int VAR_5 = VAR_3->c;
        { int VAR_6 = FUNC_2(VAR_3);
            if (VAR_6 == 0) goto lab0;
            if (VAR_6 < 0) return VAR_6;
        }
    lab0:
        VAR_3->c = VAR_5;
    }
    return 1;
}
