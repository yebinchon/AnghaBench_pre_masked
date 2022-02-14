
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int ket; int c; int lb; int* p; int bra; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct SN_env * VAR_2) {
    VAR_2->ket = VAR_2->c;
    if (VAR_2->c - 1 <= VAR_2->lb || VAR_2->p[VAR_2->c - 1] != 137) return 0;
    if (!(FUNC_0(VAR_2, VAR_0, 1))) return 0;
    VAR_2->bra = VAR_2->c;
    { int VAR_3 = FUNC_1(VAR_2, 2, VAR_1);
        if (VAR_3 < 0) return VAR_3;
    }
    return 1;
}
