
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; int bra; int ket; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int,int ) ;
 int FUNC_1 (struct SN_env*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct SN_env*) ;

__attribute__((used)) static int FUNC_3(struct SN_env * VAR_4) {
    int VAR_5;
    VAR_4->ket = VAR_4->c;
    VAR_5 = FUNC_1(VAR_4, VAR_0, 4);
    if (!(VAR_5)) return 0;
    VAR_4->bra = VAR_4->c;
    switch (VAR_5) {
        case 1:
            { int VAR_6 = FUNC_2(VAR_4);
                if (VAR_6 < 0) return VAR_6;
            }
            VAR_4->ket = VAR_4->c;
            if (!(FUNC_0(VAR_4, 2, VAR_1))) return 0;
            VAR_4->bra = VAR_4->c;
            if (!(FUNC_0(VAR_4, 2, VAR_2))) return 0;
            { int VAR_7 = FUNC_2(VAR_4);
                if (VAR_7 < 0) return VAR_7;
            }
            break;
        case 2:
            if (!(FUNC_0(VAR_4, 2, VAR_3))) return 0;
            { int VAR_8 = FUNC_2(VAR_4);
                if (VAR_8 < 0) return VAR_8;
            }
            break;
        case 3:
            { int VAR_9 = FUNC_2(VAR_4);
                if (VAR_9 < 0) return VAR_9;
            }
            break;
    }
    return 1;
}
