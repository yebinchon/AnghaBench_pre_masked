
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int l; int c; scalar_t__ lb; } ;


 int FUNC_0 (struct SN_env*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct SN_env * VAR_2) {
    if (!(FUNC_0(VAR_2, 2, VAR_0))) return 0;
    { int VAR_3 = VAR_2->l - VAR_2->c; (void)VAR_3;
        if (!(FUNC_0(VAR_2, 3, VAR_1))) { VAR_2->c = VAR_2->l - VAR_3; goto lab0; }
    lab0:
        ;
    }
    if (VAR_2->c > VAR_2->lb) return 0;
    return 1;
}
