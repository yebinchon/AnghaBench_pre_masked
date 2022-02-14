
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; int bra; int ket; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int FUNC_1 (struct SN_env*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct SN_env*) ;
 int FUNC_3 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct SN_env * VAR_6) {
    int VAR_7;
    VAR_6->ket = VAR_6->c;
    VAR_7 = FUNC_0(VAR_6, VAR_0, 25);
    if (!(VAR_7)) return 0;
    VAR_6->bra = VAR_6->c;
    switch (VAR_7) {
        case 1:
            { int VAR_8 = FUNC_1(VAR_6);
                if (VAR_8 <= 0) return VAR_8;
            }
            { int VAR_9 = FUNC_2(VAR_6);
                if (VAR_9 < 0) return VAR_9;
            }
            break;
        case 2:
            { int VAR_10 = FUNC_3(VAR_6, 3, VAR_5);
                if (VAR_10 < 0) return VAR_10;
            }
            break;
        case 3:
            { int VAR_11 = FUNC_3(VAR_6, 3, VAR_1);
                if (VAR_11 < 0) return VAR_11;
            }
            break;
        case 4:
            { int VAR_12 = FUNC_3(VAR_6, 4, VAR_2);
                if (VAR_12 < 0) return VAR_12;
            }
            break;
        case 5:
            { int VAR_13 = FUNC_3(VAR_6, 5, VAR_3);
                if (VAR_13 < 0) return VAR_13;
            }
            break;
        case 6:
            { int VAR_14 = FUNC_3(VAR_6, 4, VAR_4);
                if (VAR_14 < 0) return VAR_14;
            }
            break;
    }
    return 1;
}
