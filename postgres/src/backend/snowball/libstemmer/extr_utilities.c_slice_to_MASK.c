
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbol ;
struct SN_env {int ket; int bra; int p; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int) ;
 scalar_t__ FUNC_5 (struct SN_env*) ;

extern symbol * FUNC_6(struct SN_env * VAR_0, symbol * VAR_1) {
    if (FUNC_5(VAR_0)) {
        FUNC_3(VAR_1);
        return ((void*)0);
    }
    {
        int VAR_2 = VAR_0->ket - VAR_0->bra;
        if (FUNC_0(VAR_1) < VAR_2) {
            VAR_1 = FUNC_2(VAR_1, VAR_2);
            if (VAR_1 == ((void*)0))
                return ((void*)0);
        }
        FUNC_4(VAR_1, VAR_0->p + VAR_0->bra, VAR_2 * sizeof(symbol));
        FUNC_1(VAR_1, VAR_2);
    }
    return VAR_1;
}
