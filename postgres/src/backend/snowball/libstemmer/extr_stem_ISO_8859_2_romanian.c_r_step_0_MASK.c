
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int ket; int c; int lb; int* p; int bra; int l; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int,int ) ;
 int FUNC_1 (struct SN_env*,int ,int) ;
 int FUNC_2 (struct SN_env*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct SN_env*) ;
 int FUNC_4 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct SN_env * VAR_8) {
    int VAR_9;
    VAR_8->ket = VAR_8->c;
    if (VAR_8->c - 1 <= VAR_8->lb || VAR_8->p[VAR_8->c - 1] >> 5 != 3 || !((266786 >> (VAR_8->p[VAR_8->c - 1] & 0x1f)) & 1)) return 0;
    VAR_9 = FUNC_1(VAR_8, VAR_0, 16);
    if (!(VAR_9)) return 0;
    VAR_8->bra = VAR_8->c;
    { int VAR_10 = FUNC_2(VAR_8);
        if (VAR_10 <= 0) return VAR_10;
    }
    switch (VAR_9) {
        case 1:
            { int VAR_11 = FUNC_3(VAR_8);
                if (VAR_11 < 0) return VAR_11;
            }
            break;
        case 2:
            { int VAR_12 = FUNC_4(VAR_8, 1, VAR_2);
                if (VAR_12 < 0) return VAR_12;
            }
            break;
        case 3:
            { int VAR_13 = FUNC_4(VAR_8, 1, VAR_3);
                if (VAR_13 < 0) return VAR_13;
            }
            break;
        case 4:
            { int VAR_14 = FUNC_4(VAR_8, 1, VAR_4);
                if (VAR_14 < 0) return VAR_14;
            }
            break;
        case 5:
            { int VAR_15 = VAR_8->l - VAR_8->c; (void)VAR_15;
                if (!(FUNC_0(VAR_8, 2, VAR_5))) goto lab0;
                return 0;
            lab0:
                VAR_8->c = VAR_8->l - VAR_15;
            }
            { int VAR_16 = FUNC_4(VAR_8, 1, VAR_6);
                if (VAR_16 < 0) return VAR_16;
            }
            break;
        case 6:
            { int VAR_17 = FUNC_4(VAR_8, 2, VAR_7);
                if (VAR_17 < 0) return VAR_17;
            }
            break;
        case 7:
            { int VAR_18 = FUNC_4(VAR_8, 3, VAR_1);
                if (VAR_18 < 0) return VAR_18;
            }
            break;
    }
    return 1;
}
