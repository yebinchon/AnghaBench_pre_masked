
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int l; int c; int lb; int ket; int* p; size_t bra; scalar_t__* S; scalar_t__* B; } ;


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
 scalar_t__ FUNC_5 (struct SN_env*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct SN_env * VAR_6) {
    { int VAR_7 = VAR_6->l - VAR_6->c; (void)VAR_7;
        if (!(FUNC_0(VAR_6, 10, VAR_2))) goto lab0;
        if (VAR_6->c > VAR_6->lb) goto lab0;
        { int VAR_8 = FUNC_4(VAR_6, 8, VAR_3);
            if (VAR_8 < 0) return VAR_8;
        }
    lab0:
        VAR_6->c = VAR_6->l - VAR_7;
    }
    { int VAR_9 = VAR_6->l - VAR_6->c; (void)VAR_9;
        VAR_6->ket = VAR_6->c;
        if (VAR_6->c - 9 <= VAR_6->lb || VAR_6->p[VAR_6->c - 1] != 181) goto lab1;
        if (!(FUNC_1(VAR_6, VAR_0, 5))) goto lab1;
        VAR_6->bra = VAR_6->c;
        { int VAR_10 = FUNC_3(VAR_6);
            if (VAR_10 < 0) return VAR_10;
        }
        VAR_6->B[0] = 0;
    lab1:
        VAR_6->c = VAR_6->l - VAR_9;
    }
    VAR_6->ket = VAR_6->c;
    if (!(FUNC_0(VAR_6, 6, VAR_4))) return 0;
    VAR_6->bra = VAR_6->c;
    { int VAR_11 = FUNC_3(VAR_6);
        if (VAR_11 < 0) return VAR_11;
    }
    VAR_6->B[0] = 0;
    VAR_6->ket = VAR_6->c;
    if (!(FUNC_1(VAR_6, VAR_1, 12))) return 0;
    VAR_6->bra = VAR_6->c;
    if (VAR_6->c > VAR_6->lb) return 0;
    VAR_6->S[0] = FUNC_5(VAR_6, VAR_6->S[0]);
    if (VAR_6->S[0] == 0) return -1;
    { int VAR_12 = FUNC_4(VAR_6, 4, VAR_5);
        if (VAR_12 < 0) return VAR_12;
    }
    { int VAR_13;
        { int VAR_14 = VAR_6->c;
            VAR_13 = FUNC_2(VAR_6, VAR_6->c, VAR_6->c, VAR_6->S[0]);
            VAR_6->c = VAR_14;
        }
        if (VAR_13 < 0) return VAR_13;
    }
    return 1;
}
