
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; int bra; int l; int* p; int ket; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int,int ) ;
 int FUNC_1 (struct SN_env*,int ,int) ;
 int FUNC_2 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct SN_env*) ;
 int FUNC_4 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct SN_env * VAR_4) {
    int VAR_5;
    { int VAR_6 = VAR_4->c;
        if (!(FUNC_0(VAR_4, 4, VAR_1))) goto lab0;
        return 0;
    lab0:
        VAR_4->c = VAR_6;
    }
    VAR_4->bra = VAR_4->c;
    if (VAR_4->c + 1 >= VAR_4->l || (VAR_4->p[VAR_4->c + 1] != 168 && VAR_4->p[VAR_4->c + 1] != 131)) return 0;
    VAR_5 = FUNC_1(VAR_4, VAR_0, 3);
    if (!(VAR_5)) return 0;
    VAR_4->ket = VAR_4->c;
    switch (VAR_5) {
        case 1:
            if (!(FUNC_2(VAR_4->p) > 3)) return 0;
            { int VAR_7 = FUNC_3(VAR_4);
                if (VAR_7 < 0) return VAR_7;
            }
            break;
        case 2:
            if (!(FUNC_2(VAR_4->p) > 3)) return 0;
            { int VAR_8 = FUNC_4(VAR_4, 2, VAR_2);
                if (VAR_8 < 0) return VAR_8;
            }
            break;
        case 3:
            if (!(FUNC_2(VAR_4->p) > 3)) return 0;
            { int VAR_9 = FUNC_4(VAR_4, 2, VAR_3);
                if (VAR_9 < 0) return VAR_9;
            }
            break;
    }
    return 1;
}
