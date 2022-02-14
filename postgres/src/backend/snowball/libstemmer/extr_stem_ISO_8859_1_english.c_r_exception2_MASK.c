
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int ket; int c; int lb; int* p; int bra; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct SN_env * VAR_1) {
    VAR_1->ket = VAR_1->c;
    if (VAR_1->c - 5 <= VAR_1->lb || (VAR_1->p[VAR_1->c - 1] != 100 && VAR_1->p[VAR_1->c - 1] != 103)) return 0;
    if (!(FUNC_0(VAR_1, VAR_0, 8))) return 0;
    VAR_1->bra = VAR_1->c;
    if (VAR_1->c > VAR_1->lb) return 0;
    return 1;
}
