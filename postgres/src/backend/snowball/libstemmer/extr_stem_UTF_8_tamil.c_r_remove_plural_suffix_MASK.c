
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int* B; int lb; int c; int l; int ket; int bra; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int,int ) ;
 int FUNC_1 (struct SN_env*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct SN_env*) ;
 int FUNC_3 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct SN_env * VAR_8) {
    VAR_8->B[0] = 0;
    VAR_8->lb = VAR_8->c; VAR_8->c = VAR_8->l;

    { int VAR_9 = VAR_8->l - VAR_8->c; (void)VAR_9;
        VAR_8->ket = VAR_8->c;
        if (!(FUNC_0(VAR_8, 18, VAR_1))) goto lab1;
        { int VAR_10 = VAR_8->l - VAR_8->c;
            { int VAR_11 = VAR_8->l - VAR_8->c; (void)VAR_11;
                if (!(FUNC_1(VAR_8, VAR_0, 6))) goto lab2;
                goto lab1;
            lab2:
                VAR_8->c = VAR_8->l - VAR_11;
            }
            VAR_8->c = VAR_8->l - VAR_10;
        }
        VAR_8->bra = VAR_8->c;
        { int VAR_12 = FUNC_3(VAR_8, 3, VAR_2);
            if (VAR_12 < 0) return VAR_12;
        }
        goto lab0;
    lab1:
        VAR_8->c = VAR_8->l - VAR_9;
        VAR_8->ket = VAR_8->c;
        if (!(FUNC_0(VAR_8, 15, VAR_3))) goto lab3;
        VAR_8->bra = VAR_8->c;
        { int VAR_13 = FUNC_3(VAR_8, 6, VAR_4);
            if (VAR_13 < 0) return VAR_13;
        }
        goto lab0;
    lab3:
        VAR_8->c = VAR_8->l - VAR_9;
        VAR_8->ket = VAR_8->c;
        if (!(FUNC_0(VAR_8, 15, VAR_5))) goto lab4;
        VAR_8->bra = VAR_8->c;
        { int VAR_14 = FUNC_3(VAR_8, 6, VAR_6);
            if (VAR_14 < 0) return VAR_14;
        }
        goto lab0;
    lab4:
        VAR_8->c = VAR_8->l - VAR_9;
        VAR_8->ket = VAR_8->c;
        if (!(FUNC_0(VAR_8, 9, VAR_7))) return 0;
        VAR_8->bra = VAR_8->c;
        { int VAR_15 = FUNC_2(VAR_8);
            if (VAR_15 < 0) return VAR_15;
        }
    }
lab0:
    VAR_8->B[0] = 1;
    VAR_8->c = VAR_8->lb;
    return 1;
}
