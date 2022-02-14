
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int* B; int l; int c; int ket; int bra; int lb; int* p; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int FUNC_1 (struct SN_env*) ;
 int FUNC_2 (struct SN_env*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct SN_env*) ;
 int FUNC_4 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct SN_env * VAR_3) {
    int VAR_4;
    VAR_3->B[0] = 0;
    while(1) {
        int VAR_5 = VAR_3->l - VAR_3->c; (void)VAR_5;
        { int VAR_6 = FUNC_2(VAR_3);
            if (VAR_6 == 0) goto lab0;
            if (VAR_6 < 0) return VAR_6;
        }
        continue;
    lab0:
        VAR_3->c = VAR_3->l - VAR_5;
        break;
    }
    VAR_3->ket = VAR_3->c;
    VAR_4 = FUNC_0(VAR_3, VAR_0, 62);
    if (!(VAR_4)) return 0;
    VAR_3->bra = VAR_3->c;
    { int VAR_7 = FUNC_1(VAR_3);
        if (VAR_7 <= 0) return VAR_7;
    }
    switch (VAR_4) {
        case 1:
            { int VAR_8 = FUNC_3(VAR_3);
                if (VAR_8 < 0) return VAR_8;
            }
            break;
        case 2:
            if (VAR_3->c <= VAR_3->lb || VAR_3->p[VAR_3->c - 1] != 0xFE) return 0;
            VAR_3->c--;
            VAR_3->bra = VAR_3->c;
            { int VAR_9 = FUNC_4(VAR_3, 1, VAR_1);
                if (VAR_9 < 0) return VAR_9;
            }
            break;
        case 3:
            { int VAR_10 = FUNC_4(VAR_3, 3, VAR_2);
                if (VAR_10 < 0) return VAR_10;
            }
            break;
    }
    VAR_3->B[0] = 1;
    return 1;
}
