
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int ket; int c; int lb; int* p; int bra; int l; scalar_t__* S; scalar_t__* B; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int FUNC_1 (struct SN_env*,int,int,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct SN_env*) ;
 int FUNC_3 (struct SN_env*,int,int ) ;
 void* FUNC_4 (struct SN_env*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct SN_env * VAR_5) {
    VAR_5->ket = VAR_5->c;
    if (VAR_5->c - 7 <= VAR_5->lb || VAR_5->p[VAR_5->c - 1] >> 5 != 5 || !((-1610481664 >> (VAR_5->p[VAR_5->c - 1] & 0x1f)) & 1)) return 0;
    if (!(FUNC_0(VAR_5, VAR_2, 3))) return 0;
    VAR_5->bra = VAR_5->c;
    { int VAR_6 = FUNC_2(VAR_5);
        if (VAR_6 < 0) return VAR_6;
    }
    VAR_5->B[0] = 0;
    { int VAR_7 = VAR_5->l - VAR_5->c; (void)VAR_7;
        VAR_5->ket = VAR_5->c;
        if (!(FUNC_0(VAR_5, VAR_0, 4))) goto lab1;
        VAR_5->bra = VAR_5->c;
        if (VAR_5->c > VAR_5->lb) goto lab1;
        VAR_5->S[0] = FUNC_4(VAR_5, VAR_5->S[0]);
        if (VAR_5->S[0] == 0) return -1;
        { int VAR_8 = FUNC_3(VAR_5, 4, VAR_3);
            if (VAR_8 < 0) return VAR_8;
        }
        { int VAR_9;
            { int VAR_10 = VAR_5->c;
                VAR_9 = FUNC_1(VAR_5, VAR_5->c, VAR_5->c, VAR_5->S[0]);
                VAR_5->c = VAR_10;
            }
            if (VAR_9 < 0) return VAR_9;
        }
        goto lab0;
    lab1:
        VAR_5->c = VAR_5->l - VAR_7;
        VAR_5->ket = VAR_5->c;
        if (VAR_5->c - 1 <= VAR_5->lb || (VAR_5->p[VAR_5->c - 1] != 181 && VAR_5->p[VAR_5->c - 1] != 189)) return 0;
        if (!(FUNC_0(VAR_5, VAR_1, 2))) return 0;
        VAR_5->bra = VAR_5->c;
        VAR_5->S[0] = FUNC_4(VAR_5, VAR_5->S[0]);
        if (VAR_5->S[0] == 0) return -1;
        { int VAR_11 = FUNC_3(VAR_5, 4, VAR_4);
            if (VAR_11 < 0) return VAR_11;
        }
        { int VAR_12;
            { int VAR_13 = VAR_5->c;
                VAR_12 = FUNC_1(VAR_5, VAR_5->c, VAR_5->c, VAR_5->S[0]);
                VAR_5->c = VAR_13;
            }
            if (VAR_12 < 0) return VAR_12;
        }
    }
lab0:
    return 1;
}
