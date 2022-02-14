
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
 int FUNC_10 (struct SN_env*,int,int ) ;

extern int FUNC_11(struct SN_env * VAR_4) {
    VAR_4->B[0] = 0;
    { int VAR_5 = VAR_4->c;
        VAR_4->bra = VAR_4->c;
        if (VAR_4->c == VAR_4->l || VAR_4->p[VAR_4->c] != 'y') goto lab0;
        VAR_4->c++;
        VAR_4->ket = VAR_4->c;
        { int VAR_6 = FUNC_10(VAR_4, 1, VAR_1);
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
                if (VAR_4->c >= VAR_4->l) goto lab2;
                VAR_4->c++;
            }
            { int VAR_10 = FUNC_10(VAR_4, 1, VAR_2);
                if (VAR_10 < 0) return VAR_10;
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
    { int VAR_11 = VAR_4->c;
        {
            int VAR_12 = FUNC_1(VAR_4, VAR_0, 97, 121, 1);
            if (VAR_12 < 0) goto lab4;
            VAR_4->c += VAR_12;
        }
        {
            int VAR_13 = FUNC_0(VAR_4, VAR_0, 97, 121, 1);
            if (VAR_13 < 0) goto lab4;
            VAR_4->c += VAR_13;
        }
        VAR_4->I[0] = VAR_4->c;
        {
            int VAR_14 = FUNC_1(VAR_4, VAR_0, 97, 121, 1);
            if (VAR_14 < 0) goto lab4;
            VAR_4->c += VAR_14;
        }
        {
            int VAR_15 = FUNC_0(VAR_4, VAR_0, 97, 121, 1);
            if (VAR_15 < 0) goto lab4;
            VAR_4->c += VAR_15;
        }
        VAR_4->I[1] = VAR_4->c;
    lab4:
        VAR_4->c = VAR_11;
    }
    VAR_4->lb = VAR_4->c; VAR_4->c = VAR_4->l;

    { int VAR_16 = VAR_4->l - VAR_4->c; (void)VAR_16;
        { int VAR_17 = FUNC_2(VAR_4);
            if (VAR_17 == 0) goto lab5;
            if (VAR_17 < 0) return VAR_17;
        }
    lab5:
        VAR_4->c = VAR_4->l - VAR_16;
    }
    { int VAR_18 = VAR_4->l - VAR_4->c; (void)VAR_18;
        { int VAR_19 = FUNC_3(VAR_4);
            if (VAR_19 == 0) goto lab6;
            if (VAR_19 < 0) return VAR_19;
        }
    lab6:
        VAR_4->c = VAR_4->l - VAR_18;
    }
    { int VAR_20 = VAR_4->l - VAR_4->c; (void)VAR_20;
        { int VAR_21 = FUNC_4(VAR_4);
            if (VAR_21 == 0) goto lab7;
            if (VAR_21 < 0) return VAR_21;
        }
    lab7:
        VAR_4->c = VAR_4->l - VAR_20;
    }
    { int VAR_22 = VAR_4->l - VAR_4->c; (void)VAR_22;
        { int VAR_23 = FUNC_5(VAR_4);
            if (VAR_23 == 0) goto lab8;
            if (VAR_23 < 0) return VAR_23;
        }
    lab8:
        VAR_4->c = VAR_4->l - VAR_22;
    }
    { int VAR_24 = VAR_4->l - VAR_4->c; (void)VAR_24;
        { int VAR_25 = FUNC_6(VAR_4);
            if (VAR_25 == 0) goto lab9;
            if (VAR_25 < 0) return VAR_25;
        }
    lab9:
        VAR_4->c = VAR_4->l - VAR_24;
    }
    { int VAR_26 = VAR_4->l - VAR_4->c; (void)VAR_26;
        { int VAR_27 = FUNC_7(VAR_4);
            if (VAR_27 == 0) goto lab10;
            if (VAR_27 < 0) return VAR_27;
        }
    lab10:
        VAR_4->c = VAR_4->l - VAR_26;
    }
    { int VAR_28 = VAR_4->l - VAR_4->c; (void)VAR_28;
        { int VAR_29 = FUNC_8(VAR_4);
            if (VAR_29 == 0) goto lab11;
            if (VAR_29 < 0) return VAR_29;
        }
    lab11:
        VAR_4->c = VAR_4->l - VAR_28;
    }
    { int VAR_30 = VAR_4->l - VAR_4->c; (void)VAR_30;
        { int VAR_31 = FUNC_9(VAR_4);
            if (VAR_31 == 0) goto lab12;
            if (VAR_31 < 0) return VAR_31;
        }
    lab12:
        VAR_4->c = VAR_4->l - VAR_30;
    }
    VAR_4->c = VAR_4->lb;
    { int VAR_32 = VAR_4->c;
        if (!(VAR_4->B[0])) goto lab13;
        while(1) {
            int VAR_33 = VAR_4->c;
            while(1) {
                int VAR_34 = VAR_4->c;
                VAR_4->bra = VAR_4->c;
                if (VAR_4->c == VAR_4->l || VAR_4->p[VAR_4->c] != 'Y') goto lab15;
                VAR_4->c++;
                VAR_4->ket = VAR_4->c;
                VAR_4->c = VAR_34;
                break;
            lab15:
                VAR_4->c = VAR_34;
                if (VAR_4->c >= VAR_4->l) goto lab14;
                VAR_4->c++;
            }
            { int VAR_35 = FUNC_10(VAR_4, 1, VAR_3);
                if (VAR_35 < 0) return VAR_35;
            }
            continue;
        lab14:
            VAR_4->c = VAR_33;
            break;
        }
    lab13:
        VAR_4->c = VAR_32;
    }
    return 1;
}
