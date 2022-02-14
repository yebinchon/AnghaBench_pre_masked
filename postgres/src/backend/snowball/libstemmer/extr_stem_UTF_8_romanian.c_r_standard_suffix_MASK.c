
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int* B; int l; int c; int ket; int bra; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int,int ) ;
 int FUNC_1 (struct SN_env*,int ,int) ;
 int FUNC_2 (struct SN_env*) ;
 int FUNC_3 (struct SN_env*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct SN_env*) ;
 int FUNC_5 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_6(struct SN_env * VAR_4) {
    int VAR_5;
    VAR_4->B[0] = 0;
    while(1) {
        int VAR_6 = VAR_4->l - VAR_4->c; (void)VAR_6;
        { int VAR_7 = FUNC_3(VAR_4);
            if (VAR_7 == 0) goto lab0;
            if (VAR_7 < 0) return VAR_7;
        }
        continue;
    lab0:
        VAR_4->c = VAR_4->l - VAR_6;
        break;
    }
    VAR_4->ket = VAR_4->c;
    VAR_5 = FUNC_1(VAR_4, VAR_0, 62);
    if (!(VAR_5)) return 0;
    VAR_4->bra = VAR_4->c;
    { int VAR_8 = FUNC_2(VAR_4);
        if (VAR_8 <= 0) return VAR_8;
    }
    switch (VAR_5) {
        case 1:
            { int VAR_9 = FUNC_4(VAR_4);
                if (VAR_9 < 0) return VAR_9;
            }
            break;
        case 2:
            if (!(FUNC_0(VAR_4, 2, VAR_1))) return 0;
            VAR_4->bra = VAR_4->c;
            { int VAR_10 = FUNC_5(VAR_4, 1, VAR_2);
                if (VAR_10 < 0) return VAR_10;
            }
            break;
        case 3:
            { int VAR_11 = FUNC_5(VAR_4, 3, VAR_3);
                if (VAR_11 < 0) return VAR_11;
            }
            break;
    }
    VAR_4->B[0] = 1;
    return 1;
}
