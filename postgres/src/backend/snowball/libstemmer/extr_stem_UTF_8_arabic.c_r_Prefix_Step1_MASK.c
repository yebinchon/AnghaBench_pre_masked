
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int bra; int c; int l; int* p; int ket; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int FUNC_1 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct SN_env * VAR_5) {
    int VAR_6;
    VAR_5->bra = VAR_5->c;
    if (VAR_5->c + 3 >= VAR_5->l || VAR_5->p[VAR_5->c + 3] >> 5 != 5 || !((188 >> (VAR_5->p[VAR_5->c + 3] & 0x1f)) & 1)) return 0;
    VAR_6 = FUNC_0(VAR_5, VAR_0, 5);
    if (!(VAR_6)) return 0;
    VAR_5->ket = VAR_5->c;
    switch (VAR_6) {
        case 1:
            if (!(FUNC_1(VAR_5->p) > 3)) return 0;
            { int VAR_7 = FUNC_2(VAR_5, 2, VAR_1);
                if (VAR_7 < 0) return VAR_7;
            }
            break;
        case 2:
            if (!(FUNC_1(VAR_5->p) > 3)) return 0;
            { int VAR_8 = FUNC_2(VAR_5, 2, VAR_2);
                if (VAR_8 < 0) return VAR_8;
            }
            break;
        case 3:
            if (!(FUNC_1(VAR_5->p) > 3)) return 0;
            { int VAR_9 = FUNC_2(VAR_5, 2, VAR_3);
                if (VAR_9 < 0) return VAR_9;
            }
            break;
        case 4:
            if (!(FUNC_1(VAR_5->p) > 3)) return 0;
            { int VAR_10 = FUNC_2(VAR_5, 2, VAR_4);
                if (VAR_10 < 0) return VAR_10;
            }
            break;
    }
    return 1;
}
