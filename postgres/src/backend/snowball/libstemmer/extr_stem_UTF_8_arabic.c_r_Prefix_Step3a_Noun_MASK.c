
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int bra; int c; int l; int* p; int ket; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (struct SN_env*) ;

__attribute__((used)) static int FUNC_3(struct SN_env * VAR_1) {
    int VAR_2;
    VAR_1->bra = VAR_1->c;
    if (VAR_1->c + 3 >= VAR_1->l || (VAR_1->p[VAR_1->c + 3] != 132 && VAR_1->p[VAR_1->c + 3] != 167)) return 0;
    VAR_2 = FUNC_0(VAR_1, VAR_0, 4);
    if (!(VAR_2)) return 0;
    VAR_1->ket = VAR_1->c;
    switch (VAR_2) {
        case 1:
            if (!(FUNC_1(VAR_1->p) > 5)) return 0;
            { int VAR_3 = FUNC_2(VAR_1);
                if (VAR_3 < 0) return VAR_3;
            }
            break;
        case 2:
            if (!(FUNC_1(VAR_1->p) > 4)) return 0;
            { int VAR_4 = FUNC_2(VAR_1);
                if (VAR_4 < 0) return VAR_4;
            }
            break;
    }
    return 1;
}
