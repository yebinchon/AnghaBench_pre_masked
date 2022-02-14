
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int ket; int c; int bra; int l; int lb; scalar_t__* S; scalar_t__* B; } ;


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
    if (!(FUNC_1(VAR_7, VAR_2, 8))) return 0;
    VAR_7->bra = VAR_7->c;
    { int VAR_8 = FUNC_3(VAR_7);
        if (VAR_8 < 0) return VAR_8;
    }
    VAR_7->B[0] = 0;
    { int VAR_9 = VAR_7->l - VAR_7->c; (void)VAR_9;
        VAR_7->ket = VAR_7->c;
        if (!(FUNC_1(VAR_7, VAR_0, 33))) goto lab1;
        VAR_7->bra = VAR_7->c;
        if (VAR_7->c > VAR_7->lb) goto lab1;
        VAR_7->S[0] = FUNC_5(VAR_7, VAR_7->S[0]);
        if (VAR_7->S[0] == 0) return -1;
        { int VAR_10 = FUNC_4(VAR_7, 4, VAR_3);
            if (VAR_10 < 0) return VAR_10;
        }
        { int VAR_11;
            { int VAR_12 = VAR_7->c;
                VAR_11 = FUNC_2(VAR_7, VAR_7->c, VAR_7->c, VAR_7->S[0]);
                VAR_7->c = VAR_12;
            }
            if (VAR_11 < 0) return VAR_11;
        }
        goto lab0;
    lab1:
        VAR_7->c = VAR_7->l - VAR_9;
        VAR_7->ket = VAR_7->c;
        if (!(FUNC_1(VAR_7, VAR_1, 15))) goto lab2;
        VAR_7->bra = VAR_7->c;
        if (VAR_7->c > VAR_7->lb) goto lab2;
        VAR_7->S[0] = FUNC_5(VAR_7, VAR_7->S[0]);
        if (VAR_7->S[0] == 0) return -1;
        { int VAR_13 = FUNC_4(VAR_7, 6, VAR_4);
            if (VAR_13 < 0) return VAR_13;
        }
        { int VAR_14;
            { int VAR_15 = VAR_7->c;
                VAR_14 = FUNC_2(VAR_7, VAR_7->c, VAR_7->c, VAR_7->S[0]);
                VAR_7->c = VAR_15;
            }
            if (VAR_14 < 0) return VAR_14;
        }
        goto lab0;
    lab2:
        VAR_7->c = VAR_7->l - VAR_9;
        VAR_7->ket = VAR_7->c;
        if (!(FUNC_0(VAR_7, 6, VAR_5))) return 0;
        VAR_7->bra = VAR_7->c;
        VAR_7->S[0] = FUNC_5(VAR_7, VAR_7->S[0]);
        if (VAR_7->S[0] == 0) return -1;
        { int VAR_16 = FUNC_4(VAR_7, 6, VAR_6);
            if (VAR_16 < 0) return VAR_16;
        }
        { int VAR_17;
            { int VAR_18 = VAR_7->c;
                VAR_17 = FUNC_2(VAR_7, VAR_7->c, VAR_7->c, VAR_7->S[0]);
                VAR_7->c = VAR_18;
            }
            if (VAR_17 < 0) return VAR_17;
        }
    }
lab0:
    return 1;
}
