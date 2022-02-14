
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int* I; int l; int c; scalar_t__ lb; char* p; } ;



__attribute__((used)) static int FUNC_0(struct SN_env * VAR_0) {
    if (!(VAR_0->I[1] <= 2)) return 0;
    { int VAR_1 = VAR_0->l - VAR_0->c; (void)VAR_1;
        if (VAR_0->c <= VAR_0->lb || VAR_0->p[VAR_0->c - 1] != 's') goto lab0;
        VAR_0->c--;
        return 0;
    lab0:
        VAR_0->c = VAR_0->l - VAR_1;
    }
    return 1;
}
