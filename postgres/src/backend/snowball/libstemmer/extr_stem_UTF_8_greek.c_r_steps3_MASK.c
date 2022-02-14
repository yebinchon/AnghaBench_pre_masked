
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int ket; int c; int bra; int l; int lb; int* p; scalar_t__* S; scalar_t__* B; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct SN_env*,int,int ) ;
 int FUNC_1 (struct SN_env*,int ,int) ;
 int FUNC_2 (struct SN_env*,int,int,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct SN_env*) ;
 int FUNC_4 (struct SN_env*,int,int ) ;
 void* FUNC_5 (struct SN_env*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct SN_env * VAR_7) {
    VAR_7->ket = VAR_7->c;
    if (!(FUNC_1(VAR_7, VAR_2, 7))) return 0;
    VAR_7->bra = VAR_7->c;
    { int VAR_8 = FUNC_3(VAR_7);
        if (VAR_8 < 0) return VAR_8;
    }
    VAR_7->B[0] = 0;
    { int VAR_9 = VAR_7->l - VAR_7->c; (void)VAR_9;
        if (!(FUNC_0(VAR_7, 6, VAR_3))) goto lab1;
        if (VAR_7->c > VAR_7->lb) goto lab1;
        { int VAR_10 = FUNC_4(VAR_7, 4, VAR_4);
            if (VAR_10 < 0) return VAR_10;
        }
        goto lab0;
    lab1:
        VAR_7->c = VAR_7->l - VAR_9;
        VAR_7->ket = VAR_7->c;
        if (VAR_7->c - 3 <= VAR_7->lb || VAR_7->p[VAR_7->c - 1] >> 5 != 5 || !((-2145255424 >> (VAR_7->p[VAR_7->c - 1] & 0x1f)) & 1)) goto lab2;
        if (!(FUNC_1(VAR_7, VAR_0, 19))) goto lab2;
        VAR_7->bra = VAR_7->c;
        if (VAR_7->c > VAR_7->lb) goto lab2;
        VAR_7->S[0] = FUNC_5(VAR_7, VAR_7->S[0]);
        if (VAR_7->S[0] == 0) return -1;
        { int VAR_11 = FUNC_4(VAR_7, 2, VAR_5);
            if (VAR_11 < 0) return VAR_11;
        }
        { int VAR_12;
            { int VAR_13 = VAR_7->c;
                VAR_12 = FUNC_2(VAR_7, VAR_7->c, VAR_7->c, VAR_7->S[0]);
                VAR_7->c = VAR_13;
            }
            if (VAR_12 < 0) return VAR_12;
        }
        goto lab0;
    lab2:
        VAR_7->c = VAR_7->l - VAR_9;
        VAR_7->ket = VAR_7->c;
        if (!(FUNC_1(VAR_7, VAR_1, 13))) return 0;
        VAR_7->bra = VAR_7->c;
        if (VAR_7->c > VAR_7->lb) return 0;
        VAR_7->S[0] = FUNC_5(VAR_7, VAR_7->S[0]);
        if (VAR_7->S[0] == 0) return -1;
        { int VAR_14 = FUNC_4(VAR_7, 4, VAR_6);
            if (VAR_14 < 0) return VAR_14;
        }
        { int VAR_15;
            { int VAR_16 = VAR_7->c;
                VAR_15 = FUNC_2(VAR_7, VAR_7->c, VAR_7->c, VAR_7->S[0]);
                VAR_7->c = VAR_16;
            }
            if (VAR_15 < 0) return VAR_15;
        }
    }
lab0:
    return 1;
}
