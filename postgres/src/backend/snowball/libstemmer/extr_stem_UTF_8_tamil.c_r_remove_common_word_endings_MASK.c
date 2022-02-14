
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int* B; int lb; int c; int l; int ket; int bra; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct SN_env*,int,int ) ;
 int FUNC_1 (struct SN_env*,int ,int) ;
 int FUNC_2 (struct SN_env*) ;
 int FUNC_3 (struct SN_env*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (struct SN_env*) ;
 int FUNC_5 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_6(struct SN_env * VAR_17) {
    VAR_17->B[0] = 0;
    { int VAR_18 = FUNC_3(VAR_17);
        if (VAR_18 <= 0) return VAR_18;
    }
    VAR_17->lb = VAR_17->c; VAR_17->c = VAR_17->l;

    { int VAR_19 = VAR_17->l - VAR_17->c; (void)VAR_19;
        { int VAR_20 = VAR_17->l - VAR_17->c;
            VAR_17->ket = VAR_17->c;
            { int VAR_21 = VAR_17->l - VAR_17->c; (void)VAR_21;
                if (!(FUNC_0(VAR_17, 12, VAR_2))) goto lab3;
                goto lab2;
            lab3:
                VAR_17->c = VAR_17->l - VAR_21;
                if (!(FUNC_0(VAR_17, 15, VAR_3))) goto lab4;
                goto lab2;
            lab4:
                VAR_17->c = VAR_17->l - VAR_21;
                if (!(FUNC_0(VAR_17, 12, VAR_4))) goto lab5;
                goto lab2;
            lab5:
                VAR_17->c = VAR_17->l - VAR_21;
                if (!(FUNC_0(VAR_17, 15, VAR_5))) goto lab6;
                goto lab2;
            lab6:
                VAR_17->c = VAR_17->l - VAR_21;
                if (!(FUNC_0(VAR_17, 9, VAR_6))) goto lab7;
                goto lab2;
            lab7:
                VAR_17->c = VAR_17->l - VAR_21;
                if (!(FUNC_0(VAR_17, 12, VAR_7))) goto lab8;
                goto lab2;
            lab8:
                VAR_17->c = VAR_17->l - VAR_21;
                if (!(FUNC_0(VAR_17, 15, VAR_8))) goto lab9;
                goto lab2;
            lab9:
                VAR_17->c = VAR_17->l - VAR_21;
                if (!(FUNC_0(VAR_17, 12, VAR_9))) goto lab10;
                goto lab2;
            lab10:
                VAR_17->c = VAR_17->l - VAR_21;
                if (!(FUNC_0(VAR_17, 12, VAR_10))) goto lab11;
                goto lab2;
            lab11:
                VAR_17->c = VAR_17->l - VAR_21;
                if (!(FUNC_0(VAR_17, 9, VAR_11))) goto lab12;
                goto lab2;
            lab12:
                VAR_17->c = VAR_17->l - VAR_21;
                if (!(FUNC_0(VAR_17, 15, VAR_12))) goto lab13;
                goto lab2;
            lab13:
                VAR_17->c = VAR_17->l - VAR_21;
                if (!(FUNC_0(VAR_17, 9, VAR_13))) goto lab14;
                { int VAR_22 = VAR_17->l - VAR_17->c;
                    { int VAR_23 = VAR_17->l - VAR_17->c; (void)VAR_23;
                        if (!(FUNC_1(VAR_17, VAR_0, 8))) goto lab15;
                        goto lab14;
                    lab15:
                        VAR_17->c = VAR_17->l - VAR_23;
                    }
                    VAR_17->c = VAR_17->l - VAR_22;
                }
                goto lab2;
            lab14:
                VAR_17->c = VAR_17->l - VAR_21;
                if (!(FUNC_0(VAR_17, 6, VAR_14))) goto lab16;
                goto lab2;
            lab16:
                VAR_17->c = VAR_17->l - VAR_21;
                if (!(FUNC_0(VAR_17, 9, VAR_15))) goto lab1;
            }
        lab2:
            VAR_17->bra = VAR_17->c;
            { int VAR_24 = FUNC_5(VAR_17, 3, VAR_16);
                if (VAR_24 < 0) return VAR_24;
            }
            VAR_17->B[0] = 1;
            VAR_17->c = VAR_17->l - VAR_20;
        }
        goto lab0;
    lab1:
        VAR_17->c = VAR_17->l - VAR_19;
        { int VAR_25 = VAR_17->l - VAR_17->c;
            VAR_17->ket = VAR_17->c;
            if (!(FUNC_1(VAR_17, VAR_1, 13))) return 0;
            VAR_17->bra = VAR_17->c;
            { int VAR_26 = FUNC_4(VAR_17);
                if (VAR_26 < 0) return VAR_26;
            }
            VAR_17->B[0] = 1;
            VAR_17->c = VAR_17->l - VAR_25;
        }
    }
lab0:
    VAR_17->c = VAR_17->lb;

    { int VAR_27 = FUNC_2(VAR_17);
        if (VAR_27 == 0) goto lab17;
        if (VAR_27 < 0) return VAR_27;
    }
lab17:
    return 1;
}
