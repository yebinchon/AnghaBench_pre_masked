
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int ket; int c; int bra; int lb; scalar_t__* S; scalar_t__* B; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int FUNC_1 (struct SN_env*,int,int,scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (struct SN_env*) ;
 int FUNC_3 (struct SN_env*,int,int ) ;
 scalar_t__ FUNC_4 (struct SN_env*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct SN_env * VAR_3) {
    VAR_3->ket = VAR_3->c;
    if (!(FUNC_0(VAR_3, VAR_1, 7))) return 0;
    VAR_3->bra = VAR_3->c;
    { int VAR_4 = FUNC_2(VAR_3);
        if (VAR_4 < 0) return VAR_4;
    }
    VAR_3->B[0] = 0;
    VAR_3->ket = VAR_3->c;
    if (!(FUNC_0(VAR_3, VAR_0, 8))) return 0;
    VAR_3->bra = VAR_3->c;
    if (VAR_3->c > VAR_3->lb) return 0;
    VAR_3->S[0] = FUNC_4(VAR_3, VAR_3->S[0]);
    if (VAR_3->S[0] == 0) return -1;
    { int VAR_5 = FUNC_3(VAR_3, 4, VAR_2);
        if (VAR_5 < 0) return VAR_5;
    }
    { int VAR_6;
        { int VAR_7 = VAR_3->c;
            VAR_6 = FUNC_1(VAR_3, VAR_3->c, VAR_3->c, VAR_3->S[0]);
            VAR_3->c = VAR_7;
        }
        if (VAR_6 < 0) return VAR_6;
    }
    return 1;
}
