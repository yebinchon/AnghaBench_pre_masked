
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int* B; int c; int bra; int l; char* p; size_t ket; int* I; int lb; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int,int,int) ;
 int FUNC_1 (struct SN_env*,int ,int,int,int) ;
 int FUNC_2 (struct SN_env*) ;
 int FUNC_3 (struct SN_env*) ;
 int FUNC_4 (struct SN_env*) ;
 int FUNC_5 (struct SN_env*) ;
 int FUNC_6 (struct SN_env*) ;
 int FUNC_7 (struct SN_env*) ;
 int FUNC_8 (struct SN_env*) ;
 int FUNC_9 (struct SN_env*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (char*,int,int ,int,int) ;
 int FUNC_11 (struct SN_env*,int,int ) ;

extern int FUNC_12(struct SN_env * VAR_4) {
    VAR_4->B[0] = 0;
    { int VAR_5 = VAR_4->c;
        VAR_4->bra = VAR_4->c;
        if (VAR_4->c == VAR_4->l || VAR_4->p[VAR_4->c] != 'y') goto lab0;
        VAR_4->c++;
        VAR_4->ket = VAR_4->c;
        { int VAR_6 = FUNC_11(VAR_4, 1, VAR_1);
            if (VAR_6 < 0) return VAR_6;
        }
        VAR_4->B[0] = 1;
    lab0:
        VAR_4->c = VAR_5;
    }
    { int VAR_7 = VAR_4->c;
        while(1) {
            int VAR_8 = VAR_4->c;
            while(1) {
                int VAR_9 = VAR_4->c;
                if (FUNC_0(VAR_4, VAR_0, 97, 121, 0)) goto lab3;
                VAR_4->bra = VAR_4->c;
                if (VAR_4->c == VAR_4->l || VAR_4->p[VAR_4->c] != 'y') goto lab3;
                VAR_4->c++;
                VAR_4->ket = VAR_4->c;
                VAR_4->c = VAR_9;
                break;
            lab3:
                VAR_4->c = VAR_9;
                { int VAR_10 = FUNC_10(VAR_4->p, VAR_4->c, 0, VAR_4->l, 1);
                    if (VAR_10 < 0) goto lab2;
                    VAR_4->c = VAR_10;
                }
            }
            { int VAR_11 = FUNC_11(VAR_4, 1, VAR_2);
                if (VAR_11 < 0) return VAR_11;
            }
            VAR_4->B[0] = 1;
            continue;
        lab2:
            VAR_4->c = VAR_8;
            break;
        }
        VAR_4->c = VAR_7;
    }
    VAR_4->I[0] = VAR_4->l;
    VAR_4->I[1] = VAR_4->l;
    { int VAR_12 = VAR_4->c;
        {
            int VAR_13 = FUNC_1(VAR_4, VAR_0, 97, 121, 1);
            if (VAR_13 < 0) goto lab4;
            VAR_4->c += VAR_13;
        }
        {
            int VAR_14 = FUNC_0(VAR_4, VAR_0, 97, 121, 1);
            if (VAR_14 < 0) goto lab4;
            VAR_4->c += VAR_14;
        }
        VAR_4->I[0] = VAR_4->c;
        {
            int VAR_15 = FUNC_1(VAR_4, VAR_0, 97, 121, 1);
            if (VAR_15 < 0) goto lab4;
            VAR_4->c += VAR_15;
        }
        {
            int VAR_16 = FUNC_0(VAR_4, VAR_0, 97, 121, 1);
            if (VAR_16 < 0) goto lab4;
            VAR_4->c += VAR_16;
        }
        VAR_4->I[1] = VAR_4->c;
    lab4:
        VAR_4->c = VAR_12;
    }
    VAR_4->lb = VAR_4->c; VAR_4->c = VAR_4->l;

    { int VAR_17 = VAR_4->l - VAR_4->c; (void)VAR_17;
        { int VAR_18 = FUNC_2(VAR_4);
            if (VAR_18 == 0) goto lab5;
            if (VAR_18 < 0) return VAR_18;
        }
    lab5:
        VAR_4->c = VAR_4->l - VAR_17;
    }
    { int VAR_19 = VAR_4->l - VAR_4->c; (void)VAR_19;
        { int VAR_20 = FUNC_3(VAR_4);
            if (VAR_20 == 0) goto lab6;
            if (VAR_20 < 0) return VAR_20;
        }
    lab6:
        VAR_4->c = VAR_4->l - VAR_19;
    }
    { int VAR_21 = VAR_4->l - VAR_4->c; (void)VAR_21;
        { int VAR_22 = FUNC_4(VAR_4);
            if (VAR_22 == 0) goto lab7;
            if (VAR_22 < 0) return VAR_22;
        }
    lab7:
        VAR_4->c = VAR_4->l - VAR_21;
    }
    { int VAR_23 = VAR_4->l - VAR_4->c; (void)VAR_23;
        { int VAR_24 = FUNC_5(VAR_4);
            if (VAR_24 == 0) goto lab8;
            if (VAR_24 < 0) return VAR_24;
        }
    lab8:
        VAR_4->c = VAR_4->l - VAR_23;
    }
    { int VAR_25 = VAR_4->l - VAR_4->c; (void)VAR_25;
        { int VAR_26 = FUNC_6(VAR_4);
            if (VAR_26 == 0) goto lab9;
            if (VAR_26 < 0) return VAR_26;
        }
    lab9:
        VAR_4->c = VAR_4->l - VAR_25;
    }
    { int VAR_27 = VAR_4->l - VAR_4->c; (void)VAR_27;
        { int VAR_28 = FUNC_7(VAR_4);
            if (VAR_28 == 0) goto lab10;
            if (VAR_28 < 0) return VAR_28;
        }
    lab10:
        VAR_4->c = VAR_4->l - VAR_27;
    }
    { int VAR_29 = VAR_4->l - VAR_4->c; (void)VAR_29;
        { int VAR_30 = FUNC_8(VAR_4);
            if (VAR_30 == 0) goto lab11;
            if (VAR_30 < 0) return VAR_30;
        }
    lab11:
        VAR_4->c = VAR_4->l - VAR_29;
    }
    { int VAR_31 = VAR_4->l - VAR_4->c; (void)VAR_31;
        { int VAR_32 = FUNC_9(VAR_4);
            if (VAR_32 == 0) goto lab12;
            if (VAR_32 < 0) return VAR_32;
        }
    lab12:
        VAR_4->c = VAR_4->l - VAR_31;
    }
    VAR_4->c = VAR_4->lb;
    { int VAR_33 = VAR_4->c;
        if (!(VAR_4->B[0])) goto lab13;
        while(1) {
            int VAR_34 = VAR_4->c;
            while(1) {
                int VAR_35 = VAR_4->c;
                VAR_4->bra = VAR_4->c;
                if (VAR_4->c == VAR_4->l || VAR_4->p[VAR_4->c] != 'Y') goto lab15;
                VAR_4->c++;
                VAR_4->ket = VAR_4->c;
                VAR_4->c = VAR_35;
                break;
            lab15:
                VAR_4->c = VAR_35;
                { int VAR_36 = FUNC_10(VAR_4->p, VAR_4->c, 0, VAR_4->l, 1);
                    if (VAR_36 < 0) goto lab14;
                    VAR_4->c = VAR_36;
                }
            }
            { int VAR_37 = FUNC_11(VAR_4, 1, VAR_3);
                if (VAR_37 < 0) return VAR_37;
            }
            continue;
        lab14:
            VAR_4->c = VAR_34;
            break;
        }
    lab13:
        VAR_4->c = VAR_33;
    }
    return 1;
}
