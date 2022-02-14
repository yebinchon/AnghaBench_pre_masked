
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int l; int c; int ket; int bra; int lb; int* p; scalar_t__* S; scalar_t__* B; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct SN_env*,int,int ) ;
 int FUNC_1 (struct SN_env*,int ,int) ;
 int FUNC_2 (struct SN_env*,int,int,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct SN_env*) ;
 int FUNC_4 (struct SN_env*,int,int ) ;
 void* FUNC_5 (struct SN_env*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct SN_env * VAR_6) {
    { int VAR_7 = VAR_6->l - VAR_6->c; (void)VAR_7;
        VAR_6->ket = VAR_6->c;
        if (!(FUNC_0(VAR_6, 10, VAR_2))) goto lab0;
        VAR_6->bra = VAR_6->c;
        { int VAR_8 = FUNC_3(VAR_6);
            if (VAR_8 < 0) return VAR_8;
        }
        VAR_6->B[0] = 0;
        VAR_6->ket = VAR_6->c;
        if (VAR_6->c - 1 <= VAR_6->lb || (VAR_6->p[VAR_6->c - 1] != 128 && VAR_6->p[VAR_6->c - 1] != 134)) goto lab0;
        if (!(FUNC_1(VAR_6, VAR_0, 6))) goto lab0;
        VAR_6->bra = VAR_6->c;
        if (VAR_6->c > VAR_6->lb) goto lab0;
        VAR_6->S[0] = FUNC_5(VAR_6, VAR_6->S[0]);
        if (VAR_6->S[0] == 0) return -1;
        { int VAR_9 = FUNC_4(VAR_6, 8, VAR_3);
            if (VAR_9 < 0) return VAR_9;
        }
        { int VAR_10;
            { int VAR_11 = VAR_6->c;
                VAR_10 = FUNC_2(VAR_6, VAR_6->c, VAR_6->c, VAR_6->S[0]);
                VAR_6->c = VAR_11;
            }
            if (VAR_10 < 0) return VAR_10;
        }
    lab0:
        VAR_6->c = VAR_6->l - VAR_7;
    }
    VAR_6->ket = VAR_6->c;
    if (!(FUNC_0(VAR_6, 8, VAR_4))) return 0;
    VAR_6->bra = VAR_6->c;
    { int VAR_12 = FUNC_3(VAR_6);
        if (VAR_12 < 0) return VAR_12;
    }
    VAR_6->B[0] = 0;
    VAR_6->ket = VAR_6->c;
    if (!(FUNC_1(VAR_6, VAR_1, 9))) return 0;
    VAR_6->bra = VAR_6->c;
    if (VAR_6->c > VAR_6->lb) return 0;
    VAR_6->S[0] = FUNC_5(VAR_6, VAR_6->S[0]);
    if (VAR_6->S[0] == 0) return -1;
    { int VAR_13 = FUNC_4(VAR_6, 8, VAR_5);
        if (VAR_13 < 0) return VAR_13;
    }
    { int VAR_14;
        { int VAR_15 = VAR_6->c;
            VAR_14 = FUNC_2(VAR_6, VAR_6->c, VAR_6->c, VAR_6->S[0]);
            VAR_6->c = VAR_15;
        }
        if (VAR_14 < 0) return VAR_14;
    }
    return 1;
}
