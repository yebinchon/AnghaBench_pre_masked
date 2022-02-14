
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int l; int c; int lb; char* p; } ;


 int FUNC_0 (struct SN_env*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct SN_env*,int,int,int,int ) ;
 scalar_t__ FUNC_2 (struct SN_env*,int ,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_3(struct SN_env * VAR_8) {
    { int VAR_9 = VAR_8->l - VAR_8->c;
        { int VAR_10 = VAR_8->l - VAR_8->c; (void)VAR_10;
            if (VAR_8->c <= VAR_8->lb || VAR_8->p[VAR_8->c - 1] != 'd') goto lab1;
            VAR_8->c--;
            goto lab0;
        lab1:
            VAR_8->c = VAR_8->l - VAR_10;
            if (VAR_8->c <= VAR_8->lb || VAR_8->p[VAR_8->c - 1] != 'g') return 0;
            VAR_8->c--;
        }
    lab0:
        VAR_8->c = VAR_8->l - VAR_9;
    }
    { int VAR_11 = VAR_8->l - VAR_8->c; (void)VAR_11;
        { int VAR_12 = VAR_8->l - VAR_8->c;
            if (FUNC_2(VAR_8, VAR_0, 97, 305, 1) < 0) goto lab3;
            { int VAR_13 = VAR_8->l - VAR_8->c; (void)VAR_13;
                if (VAR_8->c <= VAR_8->lb || VAR_8->p[VAR_8->c - 1] != 'a') goto lab5;
                VAR_8->c--;
                goto lab4;
            lab5:
                VAR_8->c = VAR_8->l - VAR_13;
                if (!(FUNC_0(VAR_8, 2, VAR_7))) goto lab3;
            }
        lab4:
            VAR_8->c = VAR_8->l - VAR_12;
        }
        { int VAR_14;
            { int VAR_15 = VAR_8->c;
                VAR_14 = FUNC_1(VAR_8, VAR_8->c, VAR_8->c, 2, VAR_1);
                VAR_8->c = VAR_15;
            }
            if (VAR_14 < 0) return VAR_14;
        }
        goto lab2;
    lab3:
        VAR_8->c = VAR_8->l - VAR_11;
        { int VAR_16 = VAR_8->l - VAR_8->c;
            if (FUNC_2(VAR_8, VAR_0, 97, 305, 1) < 0) goto lab6;
            { int VAR_17 = VAR_8->l - VAR_8->c; (void)VAR_17;
                if (VAR_8->c <= VAR_8->lb || VAR_8->p[VAR_8->c - 1] != 'e') goto lab8;
                VAR_8->c--;
                goto lab7;
            lab8:
                VAR_8->c = VAR_8->l - VAR_17;
                if (VAR_8->c <= VAR_8->lb || VAR_8->p[VAR_8->c - 1] != 'i') goto lab6;
                VAR_8->c--;
            }
        lab7:
            VAR_8->c = VAR_8->l - VAR_16;
        }
        { int VAR_18;
            { int VAR_19 = VAR_8->c;
                VAR_18 = FUNC_1(VAR_8, VAR_8->c, VAR_8->c, 1, VAR_2);
                VAR_8->c = VAR_19;
            }
            if (VAR_18 < 0) return VAR_18;
        }
        goto lab2;
    lab6:
        VAR_8->c = VAR_8->l - VAR_11;
        { int VAR_20 = VAR_8->l - VAR_8->c;
            if (FUNC_2(VAR_8, VAR_0, 97, 305, 1) < 0) goto lab9;
            { int VAR_21 = VAR_8->l - VAR_8->c; (void)VAR_21;
                if (VAR_8->c <= VAR_8->lb || VAR_8->p[VAR_8->c - 1] != 'o') goto lab11;
                VAR_8->c--;
                goto lab10;
            lab11:
                VAR_8->c = VAR_8->l - VAR_21;
                if (VAR_8->c <= VAR_8->lb || VAR_8->p[VAR_8->c - 1] != 'u') goto lab9;
                VAR_8->c--;
            }
        lab10:
            VAR_8->c = VAR_8->l - VAR_20;
        }
        { int VAR_22;
            { int VAR_23 = VAR_8->c;
                VAR_22 = FUNC_1(VAR_8, VAR_8->c, VAR_8->c, 1, VAR_3);
                VAR_8->c = VAR_23;
            }
            if (VAR_22 < 0) return VAR_22;
        }
        goto lab2;
    lab9:
        VAR_8->c = VAR_8->l - VAR_11;
        { int VAR_24 = VAR_8->l - VAR_8->c;
            if (FUNC_2(VAR_8, VAR_0, 97, 305, 1) < 0) return 0;
            { int VAR_25 = VAR_8->l - VAR_8->c; (void)VAR_25;
                if (!(FUNC_0(VAR_8, 2, VAR_4))) goto lab13;
                goto lab12;
            lab13:
                VAR_8->c = VAR_8->l - VAR_25;
                if (!(FUNC_0(VAR_8, 2, VAR_5))) return 0;
            }
        lab12:
            VAR_8->c = VAR_8->l - VAR_24;
        }
        { int VAR_26;
            { int VAR_27 = VAR_8->c;
                VAR_26 = FUNC_1(VAR_8, VAR_8->c, VAR_8->c, 2, VAR_6);
                VAR_8->c = VAR_27;
            }
            if (VAR_26 < 0) return VAR_26;
        }
    }
lab2:
    return 1;
}
