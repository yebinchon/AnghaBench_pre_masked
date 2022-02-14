
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int ket; int c; int lb; int* p; int bra; int l; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int FUNC_1 (struct SN_env*,int,int,int,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct SN_env*) ;

__attribute__((used)) static int FUNC_3(struct SN_env * VAR_3) {
    VAR_3->ket = VAR_3->c;
    if (VAR_3->c - 7 <= VAR_3->lb || (VAR_3->p[VAR_3->c - 1] != 131 && VAR_3->p[VAR_3->c - 1] != 189)) return 0;
    if (!(FUNC_0(VAR_3, VAR_0, 2))) return 0;
    VAR_3->bra = VAR_3->c;
    { int VAR_4 = FUNC_2(VAR_3);
        if (VAR_4 < 0) return VAR_4;
    }
    { int VAR_5 = VAR_3->l - VAR_3->c; (void)VAR_5;
        VAR_3->ket = VAR_3->c;
        if (!(FUNC_0(VAR_3, VAR_1, 10))) goto lab0;
        VAR_3->bra = VAR_3->c;
        return 0;
    lab0:
        VAR_3->c = VAR_3->l - VAR_5;
    }
    { int VAR_6;
        { int VAR_7 = VAR_3->c;
            VAR_6 = FUNC_1(VAR_3, VAR_3->c, VAR_3->c, 4, VAR_2);
            VAR_3->c = VAR_7;
        }
        if (VAR_6 < 0) return VAR_6;
    }
    return 1;
}
