
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; int bra; int ket; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int FUNC_1 (struct SN_env*) ;

__attribute__((used)) static int FUNC_2(struct SN_env * VAR_1) {
    VAR_1->ket = VAR_1->c;
    if (!(FUNC_0(VAR_1, VAR_0, 36))) return 0;
    VAR_1->bra = VAR_1->c;
    { int VAR_2 = FUNC_1(VAR_1);
        if (VAR_2 < 0) return VAR_2;
    }
    return 1;
}
