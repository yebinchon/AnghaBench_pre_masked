
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {scalar_t__ c; scalar_t__* I; int lb; scalar_t__ ket; scalar_t__ bra; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (struct SN_env*,int ,int,int,int ) ;
 int FUNC_2 (struct SN_env*) ;
 int FUNC_3 (struct SN_env*) ;

__attribute__((used)) static int FUNC_4(struct SN_env * VAR_2) {
    int VAR_3;

    { int VAR_4;
        if (VAR_2->c < VAR_2->I[0]) return 0;
        VAR_4 = VAR_2->lb; VAR_2->lb = VAR_2->I[0];
        VAR_2->ket = VAR_2->c;
        VAR_3 = FUNC_0(VAR_2, VAR_0, 10);
        if (!(VAR_3)) { VAR_2->lb = VAR_4; return 0; }
        VAR_2->bra = VAR_2->c;
        VAR_2->lb = VAR_4;
    }
    switch (VAR_3) {
        case 1:
            if (FUNC_1(VAR_2, VAR_1, 97, 246, 0)) return 0;
            break;
        case 2:
            { int VAR_5 = FUNC_2(VAR_2);
                if (VAR_5 <= 0) return VAR_5;
            }
            break;
    }
    { int VAR_6 = FUNC_3(VAR_2);
        if (VAR_6 < 0) return VAR_6;
    }
    return 1;
}
