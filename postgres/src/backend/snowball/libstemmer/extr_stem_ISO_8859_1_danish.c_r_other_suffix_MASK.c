
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int l; int c; int ket; int bra; int* I; int lb; int* p; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int,int ) ;
 int FUNC_1 (struct SN_env*,int ,int) ;
 int FUNC_2 (struct SN_env*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct SN_env*) ;
 int FUNC_4 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct SN_env * VAR_4) {
    int VAR_5;
    { int VAR_6 = VAR_4->l - VAR_4->c; (void)VAR_6;
        VAR_4->ket = VAR_4->c;
        if (!(FUNC_0(VAR_4, 2, VAR_1))) goto lab0;
        VAR_4->bra = VAR_4->c;
        if (!(FUNC_0(VAR_4, 2, VAR_2))) goto lab0;
        { int VAR_7 = FUNC_3(VAR_4);
            if (VAR_7 < 0) return VAR_7;
        }
    lab0:
        VAR_4->c = VAR_4->l - VAR_6;
    }

    { int VAR_8;
        if (VAR_4->c < VAR_4->I[0]) return 0;
        VAR_8 = VAR_4->lb; VAR_4->lb = VAR_4->I[0];
        VAR_4->ket = VAR_4->c;
        if (VAR_4->c - 1 <= VAR_4->lb || VAR_4->p[VAR_4->c - 1] >> 5 != 3 || !((1572992 >> (VAR_4->p[VAR_4->c - 1] & 0x1f)) & 1)) { VAR_4->lb = VAR_8; return 0; }
        VAR_5 = FUNC_1(VAR_4, VAR_0, 5);
        if (!(VAR_5)) { VAR_4->lb = VAR_8; return 0; }
        VAR_4->bra = VAR_4->c;
        VAR_4->lb = VAR_8;
    }
    switch (VAR_5) {
        case 1:
            { int VAR_9 = FUNC_3(VAR_4);
                if (VAR_9 < 0) return VAR_9;
            }
            { int VAR_10 = VAR_4->l - VAR_4->c; (void)VAR_10;
                { int VAR_11 = FUNC_2(VAR_4);
                    if (VAR_11 == 0) goto lab1;
                    if (VAR_11 < 0) return VAR_11;
                }
            lab1:
                VAR_4->c = VAR_4->l - VAR_10;
            }
            break;
        case 2:
            { int VAR_12 = FUNC_4(VAR_4, 3, VAR_3);
                if (VAR_12 < 0) return VAR_12;
            }
            break;
    }
    return 1;
}
