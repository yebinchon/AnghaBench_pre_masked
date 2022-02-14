
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int ket; int c; int lb; int* p; int bra; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (struct SN_env*) ;

__attribute__((used)) static int FUNC_3(struct SN_env * VAR_1) {
    VAR_1->ket = VAR_1->c;
    if (VAR_1->c - 3 <= VAR_1->lb || VAR_1->p[VAR_1->c - 1] != 170) return 0;
    if (!(FUNC_0(VAR_1, VAR_0, 1))) return 0;
    VAR_1->bra = VAR_1->c;
    if (!(FUNC_1(VAR_1->p) >= 5)) return 0;
    { int VAR_2 = FUNC_2(VAR_1);
        if (VAR_2 < 0) return VAR_2;
    }
    return 1;
}
