
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int* I; int l; int c; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int,int,int) ;
 scalar_t__ FUNC_1 (struct SN_env*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct SN_env * VAR_1) {
    VAR_1->I[0] = VAR_1->l;
    { int VAR_2 = VAR_1->c;
        { int VAR_3 = VAR_1->c + 3;
            if (0 > VAR_3 || VAR_3 > VAR_1->l) return 0;
            VAR_1->c = VAR_3;
        }
        VAR_1->I[1] = VAR_1->c;
        VAR_1->c = VAR_2;
    }
    if (FUNC_1(VAR_1, VAR_0, 97, 246, 1) < 0) return 0;
    {
        int VAR_4 = FUNC_0(VAR_1, VAR_0, 97, 246, 1);
        if (VAR_4 < 0) return 0;
        VAR_1->c += VAR_4;
    }
    VAR_1->I[0] = VAR_1->c;

    if (!(VAR_1->I[0] < VAR_1->I[1])) goto lab0;
    VAR_1->I[0] = VAR_1->I[1];
lab0:
    return 1;
}
