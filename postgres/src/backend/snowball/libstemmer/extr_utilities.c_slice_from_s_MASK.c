
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbol ;
struct SN_env {int ket; int bra; } ;


 int FUNC_0 (struct SN_env*,int ,int ,int,int const*,int *) ;
 scalar_t__ FUNC_1 (struct SN_env*) ;

extern int FUNC_2(struct SN_env * VAR_0, int VAR_1, const symbol * VAR_2) {
    if (FUNC_1(VAR_0)) return -1;
    return FUNC_0(VAR_0, VAR_0->bra, VAR_0->ket, VAR_1, VAR_2, ((void*)0));
}
