
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; int* I; int lb; int ket; int* p; int bra; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (struct SN_env*,int ,int,int,int ) ;
 int FUNC_2 (struct SN_env*) ;

__attribute__((used)) static int FUNC_3(struct SN_env * VAR_2) {
    int VAR_3;

    { int VAR_4;
        if (VAR_2->c < VAR_2->I[0]) return 0;
        VAR_4 = VAR_2->lb; VAR_2->lb = VAR_2->I[0];
        VAR_2->ket = VAR_2->c;
        if (VAR_2->c <= VAR_2->lb || VAR_2->p[VAR_2->c - 1] >> 5 != 3 || !((1851440 >> (VAR_2->p[VAR_2->c - 1] & 0x1f)) & 1)) { VAR_2->lb = VAR_4; return 0; }
        VAR_3 = FUNC_0(VAR_2, VAR_0, 32);
        if (!(VAR_3)) { VAR_2->lb = VAR_4; return 0; }
        VAR_2->bra = VAR_2->c;
        VAR_2->lb = VAR_4;
    }
    switch (VAR_3) {
        case 1:
            { int VAR_5 = FUNC_2(VAR_2);
                if (VAR_5 < 0) return VAR_5;
            }
            break;
        case 2:
            if (FUNC_1(VAR_2, VAR_1, 97, 229, 0)) return 0;
            { int VAR_6 = FUNC_2(VAR_2);
                if (VAR_6 < 0) return VAR_6;
            }
            break;
    }
    return 1;
}
