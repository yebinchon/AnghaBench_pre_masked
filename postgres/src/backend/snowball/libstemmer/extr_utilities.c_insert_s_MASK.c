
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbol ;
struct SN_env {int bra; int ket; } ;


 scalar_t__ FUNC_0 (struct SN_env*,int,int,int,int const*,int*) ;

extern int FUNC_1(struct SN_env * VAR_0, int VAR_1, int VAR_2, int VAR_3, const symbol * VAR_4) {
    int VAR_5;
    if (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, &VAR_5))
        return -1;
    if (VAR_1 <= VAR_0->bra) VAR_0->bra += VAR_5;
    if (VAR_1 <= VAR_0->ket) VAR_0->ket += VAR_5;
    return 0;
}
