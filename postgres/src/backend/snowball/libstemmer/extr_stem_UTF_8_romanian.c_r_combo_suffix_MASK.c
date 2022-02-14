
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int l; int c; int ket; int bra; int* B; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int FUNC_1 (struct SN_env*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct SN_env * VAR_7) {
    int VAR_8;
    { int VAR_9 = VAR_7->l - VAR_7->c;
        VAR_7->ket = VAR_7->c;
        VAR_8 = FUNC_0(VAR_7, VAR_0, 46);
        if (!(VAR_8)) return 0;
        VAR_7->bra = VAR_7->c;
        { int VAR_10 = FUNC_1(VAR_7);
            if (VAR_10 <= 0) return VAR_10;
        }
        switch (VAR_8) {
            case 1:
                { int VAR_11 = FUNC_2(VAR_7, 4, VAR_1);
                    if (VAR_11 < 0) return VAR_11;
                }
                break;
            case 2:
                { int VAR_12 = FUNC_2(VAR_7, 4, VAR_2);
                    if (VAR_12 < 0) return VAR_12;
                }
                break;
            case 3:
                { int VAR_13 = FUNC_2(VAR_7, 2, VAR_3);
                    if (VAR_13 < 0) return VAR_13;
                }
                break;
            case 4:
                { int VAR_14 = FUNC_2(VAR_7, 2, VAR_4);
                    if (VAR_14 < 0) return VAR_14;
                }
                break;
            case 5:
                { int VAR_15 = FUNC_2(VAR_7, 2, VAR_5);
                    if (VAR_15 < 0) return VAR_15;
                }
                break;
            case 6:
                { int VAR_16 = FUNC_2(VAR_7, 2, VAR_6);
                    if (VAR_16 < 0) return VAR_16;
                }
                break;
        }
        VAR_7->B[0] = 1;
        VAR_7->c = VAR_7->l - VAR_9;
    }
    return 1;
}
