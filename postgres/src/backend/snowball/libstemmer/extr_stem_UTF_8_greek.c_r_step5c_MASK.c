
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int l; int c; int ket; int lb; int* p; size_t bra; scalar_t__* S; scalar_t__* B; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct SN_env*,int,int ) ;
 int FUNC_1 (struct SN_env*,int ,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct SN_env*,int ,int,int,int ) ;
 int FUNC_3 (struct SN_env*,int,int,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct SN_env*) ;
 int FUNC_5 (struct SN_env*,int,int ) ;
 void* FUNC_6 (struct SN_env*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct SN_env * VAR_8) {
    { int VAR_9 = VAR_8->l - VAR_8->c; (void)VAR_9;
        VAR_8->ket = VAR_8->c;
        if (VAR_8->c - 9 <= VAR_8->lb || VAR_8->p[VAR_8->c - 1] != 181) goto lab0;
        if (!(FUNC_1(VAR_8, VAR_0, 1))) goto lab0;
        VAR_8->bra = VAR_8->c;
        { int VAR_10 = FUNC_4(VAR_8);
            if (VAR_10 < 0) return VAR_10;
        }
        VAR_8->B[0] = 0;
    lab0:
        VAR_8->c = VAR_8->l - VAR_9;
    }
    VAR_8->ket = VAR_8->c;
    if (!(FUNC_0(VAR_8, 6, VAR_4))) return 0;
    VAR_8->bra = VAR_8->c;
    { int VAR_11 = FUNC_4(VAR_8);
        if (VAR_11 < 0) return VAR_11;
    }
    VAR_8->B[0] = 0;
    { int VAR_12 = VAR_8->l - VAR_8->c; (void)VAR_12;
        VAR_8->ket = VAR_8->c;
        if (FUNC_2(VAR_8, VAR_3, 945, 969, 0)) goto lab2;
        VAR_8->bra = VAR_8->c;
        VAR_8->S[0] = FUNC_6(VAR_8, VAR_8->S[0]);
        if (VAR_8->S[0] == 0) return -1;
        { int VAR_13 = FUNC_5(VAR_8, 4, VAR_5);
            if (VAR_13 < 0) return VAR_13;
        }
        { int VAR_14;
            { int VAR_15 = VAR_8->c;
                VAR_14 = FUNC_3(VAR_8, VAR_8->c, VAR_8->c, VAR_8->S[0]);
                VAR_8->c = VAR_15;
            }
            if (VAR_14 < 0) return VAR_14;
        }
        goto lab1;
    lab2:
        VAR_8->c = VAR_8->l - VAR_12;
        VAR_8->ket = VAR_8->c;
        if (!(FUNC_1(VAR_8, VAR_1, 31))) goto lab3;
        VAR_8->bra = VAR_8->c;
        VAR_8->S[0] = FUNC_6(VAR_8, VAR_8->S[0]);
        if (VAR_8->S[0] == 0) return -1;
        { int VAR_16 = FUNC_5(VAR_8, 4, VAR_6);
            if (VAR_16 < 0) return VAR_16;
        }
        { int VAR_17;
            { int VAR_18 = VAR_8->c;
                VAR_17 = FUNC_3(VAR_8, VAR_8->c, VAR_8->c, VAR_8->S[0]);
                VAR_8->c = VAR_18;
            }
            if (VAR_17 < 0) return VAR_17;
        }
        goto lab1;
    lab3:
        VAR_8->c = VAR_8->l - VAR_12;
        VAR_8->ket = VAR_8->c;
    }
lab1:
    if (!(FUNC_1(VAR_8, VAR_2, 25))) return 0;
    VAR_8->bra = VAR_8->c;
    if (VAR_8->c > VAR_8->lb) return 0;
    VAR_8->S[0] = FUNC_6(VAR_8, VAR_8->S[0]);
    if (VAR_8->S[0] == 0) return -1;
    { int VAR_19 = FUNC_5(VAR_8, 4, VAR_7);
        if (VAR_19 < 0) return VAR_19;
    }
    { int VAR_20;
        { int VAR_21 = VAR_8->c;
            VAR_20 = FUNC_3(VAR_8, VAR_8->c, VAR_8->c, VAR_8->S[0]);
            VAR_8->c = VAR_21;
        }
        if (VAR_20 < 0) return VAR_20;
    }
    return 1;
}
