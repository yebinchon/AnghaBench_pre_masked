
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int* B; int c; } ;


 int FUNC_0 (struct SN_env*) ;

__attribute__((used)) static int FUNC_1(struct SN_env * VAR_0) {
    VAR_0->B[0] = 1;
    while(1) {
        int VAR_1 = VAR_0->c;
        if (!(VAR_0->B[0])) goto lab0;
        { int VAR_2 = VAR_0->c;
            { int VAR_3 = FUNC_0(VAR_0);
                if (VAR_3 == 0) goto lab1;
                if (VAR_3 < 0) return VAR_3;
            }
        lab1:
            VAR_0->c = VAR_2;
        }
        continue;
    lab0:
        VAR_0->c = VAR_1;
        break;
    }
    return 1;
}
