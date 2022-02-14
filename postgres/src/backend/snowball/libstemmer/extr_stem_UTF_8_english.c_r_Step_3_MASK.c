
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int ket; int c; int lb; int* p; int bra; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int FUNC_1 (struct SN_env*) ;
 int FUNC_2 (struct SN_env*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct SN_env*) ;
 int FUNC_4 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct SN_env * VAR_5) {
    int VAR_6;
    VAR_5->ket = VAR_5->c;
    if (VAR_5->c - 2 <= VAR_5->lb || VAR_5->p[VAR_5->c - 1] >> 5 != 3 || !((528928 >> (VAR_5->p[VAR_5->c - 1] & 0x1f)) & 1)) return 0;
    VAR_6 = FUNC_0(VAR_5, VAR_0, 9);
    if (!(VAR_6)) return 0;
    VAR_5->bra = VAR_5->c;
    { int VAR_7 = FUNC_1(VAR_5);
        if (VAR_7 <= 0) return VAR_7;
    }
    switch (VAR_6) {
        case 1:
            { int VAR_8 = FUNC_4(VAR_5, 4, VAR_1);
                if (VAR_8 < 0) return VAR_8;
            }
            break;
        case 2:
            { int VAR_9 = FUNC_4(VAR_5, 3, VAR_2);
                if (VAR_9 < 0) return VAR_9;
            }
            break;
        case 3:
            { int VAR_10 = FUNC_4(VAR_5, 2, VAR_3);
                if (VAR_10 < 0) return VAR_10;
            }
            break;
        case 4:
            { int VAR_11 = FUNC_4(VAR_5, 2, VAR_4);
                if (VAR_11 < 0) return VAR_11;
            }
            break;
        case 5:
            { int VAR_12 = FUNC_3(VAR_5);
                if (VAR_12 < 0) return VAR_12;
            }
            break;
        case 6:
            { int VAR_13 = FUNC_2(VAR_5);
                if (VAR_13 <= 0) return VAR_13;
            }
            { int VAR_14 = FUNC_3(VAR_5);
                if (VAR_14 < 0) return VAR_14;
            }
            break;
    }
    return 1;
}
