
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int ket; int c; int lb; int* p; int bra; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int FUNC_1 (struct SN_env*) ;

__attribute__((used)) static int FUNC_2(struct SN_env * VAR_1) {
    int VAR_2;
    VAR_1->ket = VAR_1->c;
    if (VAR_1->c <= VAR_1->lb || VAR_1->p[VAR_1->c - 1] >> 5 != 6 || !((151011360 >> (VAR_1->p[VAR_1->c - 1] & 0x1f)) & 1)) return 0;
    VAR_2 = FUNC_0(VAR_1, VAR_0, 4);
    if (!(VAR_2)) return 0;
    VAR_1->bra = VAR_1->c;
    switch (VAR_2) {
        case 1:
            { int VAR_3 = FUNC_1(VAR_1);
                if (VAR_3 < 0) return VAR_3;
            }
            VAR_1->ket = VAR_1->c;
            if (VAR_1->c <= VAR_1->lb || VAR_1->p[VAR_1->c - 1] != 0xCE) return 0;
            VAR_1->c--;
            VAR_1->bra = VAR_1->c;
            if (VAR_1->c <= VAR_1->lb || VAR_1->p[VAR_1->c - 1] != 0xCE) return 0;
            VAR_1->c--;
            { int VAR_4 = FUNC_1(VAR_1);
                if (VAR_4 < 0) return VAR_4;
            }
            break;
        case 2:
            if (VAR_1->c <= VAR_1->lb || VAR_1->p[VAR_1->c - 1] != 0xCE) return 0;
            VAR_1->c--;
            { int VAR_5 = FUNC_1(VAR_1);
                if (VAR_5 < 0) return VAR_5;
            }
            break;
        case 3:
            { int VAR_6 = FUNC_1(VAR_1);
                if (VAR_6 < 0) return VAR_6;
            }
            break;
    }
    return 1;
}
