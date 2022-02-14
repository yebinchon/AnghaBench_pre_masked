
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; int bra; int ket; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct SN_env * VAR_5) {
    int VAR_6;
    VAR_5->ket = VAR_5->c;
    VAR_6 = FUNC_0(VAR_5, VAR_0, 4);
    if (!(VAR_6)) return 0;
    VAR_5->bra = VAR_5->c;
    switch (VAR_6) {
        case 1:
            { int VAR_7 = FUNC_1(VAR_5, 1, VAR_1);
                if (VAR_7 < 0) return VAR_7;
            }
            break;
        case 2:
            { int VAR_8 = FUNC_1(VAR_5, 2, VAR_2);
                if (VAR_8 < 0) return VAR_8;
            }
            break;
        case 3:
            { int VAR_9 = FUNC_1(VAR_5, 1, VAR_3);
                if (VAR_9 < 0) return VAR_9;
            }
            break;
        case 4:
            { int VAR_10 = FUNC_1(VAR_5, 1, VAR_4);
                if (VAR_10 < 0) return VAR_10;
            }
            break;
    }
    return 1;
}
