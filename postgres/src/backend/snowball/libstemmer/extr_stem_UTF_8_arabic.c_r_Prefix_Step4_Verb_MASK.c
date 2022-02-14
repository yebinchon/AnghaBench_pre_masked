
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int bra; int c; int l; int* p; int ket; int* B; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int FUNC_1 (int*) ;
 int VAR_1 ;
 int FUNC_2 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct SN_env * VAR_2) {
    VAR_2->bra = VAR_2->c;
    if (VAR_2->c + 5 >= VAR_2->l || VAR_2->p[VAR_2->c + 5] != 170) return 0;
    if (!(FUNC_0(VAR_2, VAR_0, 3))) return 0;
    VAR_2->ket = VAR_2->c;
    if (!(FUNC_1(VAR_2->p) > 4)) return 0;
    VAR_2->B[1] = 1;
    VAR_2->B[0] = 0;
    { int VAR_3 = FUNC_2(VAR_2, 6, VAR_1);
        if (VAR_3 < 0) return VAR_3;
    }
    return 1;
}
