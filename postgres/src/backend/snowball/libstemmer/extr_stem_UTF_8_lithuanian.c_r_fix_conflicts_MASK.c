
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int ket; int c; int lb; int* p; int bra; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct SN_env * VAR_9) {
    int VAR_10;
    VAR_9->ket = VAR_9->c;
    if (VAR_9->c - 3 <= VAR_9->lb || VAR_9->p[VAR_9->c - 1] >> 5 != 3 || !((2621472 >> (VAR_9->p[VAR_9->c - 1] & 0x1f)) & 1)) return 0;
    VAR_10 = FUNC_0(VAR_9, VAR_0, 11);
    if (!(VAR_10)) return 0;
    VAR_9->bra = VAR_9->c;
    switch (VAR_10) {
        case 1:
            { int VAR_11 = FUNC_1(VAR_9, 5, VAR_1);
                if (VAR_11 < 0) return VAR_11;
            }
            break;
        case 2:
            { int VAR_12 = FUNC_1(VAR_9, 5, VAR_2);
                if (VAR_12 < 0) return VAR_12;
            }
            break;
        case 3:
            { int VAR_13 = FUNC_1(VAR_9, 7, VAR_3);
                if (VAR_13 < 0) return VAR_13;
            }
            break;
        case 4:
            { int VAR_14 = FUNC_1(VAR_9, 4, VAR_4);
                if (VAR_14 < 0) return VAR_14;
            }
            break;
        case 5:
            { int VAR_15 = FUNC_1(VAR_9, 4, VAR_5);
                if (VAR_15 < 0) return VAR_15;
            }
            break;
        case 6:
            { int VAR_16 = FUNC_1(VAR_9, 6, VAR_6);
                if (VAR_16 < 0) return VAR_16;
            }
            break;
        case 7:
            { int VAR_17 = FUNC_1(VAR_9, 6, VAR_7);
                if (VAR_17 < 0) return VAR_17;
            }
            break;
        case 8:
            { int VAR_18 = FUNC_1(VAR_9, 6, VAR_8);
                if (VAR_18 < 0) return VAR_18;
            }
            break;
    }
    return 1;
}
