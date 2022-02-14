
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int* I; int l; int c; char* p; int lb; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int,int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct SN_env*,int ,int,int,int) ;
 int FUNC_3 (struct SN_env*) ;
 int FUNC_4 (struct SN_env*) ;
 int FUNC_5 (struct SN_env*) ;
 int FUNC_6 (struct SN_env*) ;
 int FUNC_7 (struct SN_env*) ;
 int FUNC_8 (char*,int,int ,int,int) ;

extern int FUNC_9(struct SN_env * VAR_1) {
    VAR_1->I[0] = VAR_1->l;
    { int VAR_2 = VAR_1->c;
        { int VAR_3 = VAR_1->c;
            { int VAR_4 = VAR_1->c;
                if (VAR_1->c == VAR_1->l || VAR_1->p[VAR_1->c] != 'a') { VAR_1->c = VAR_3; goto lab1; }
                VAR_1->c++;
                VAR_1->c = VAR_4;
            }
            if (!(FUNC_1(VAR_1->p) > 6)) { VAR_1->c = VAR_3; goto lab1; }
            { int VAR_5 = FUNC_8(VAR_1->p, VAR_1->c, 0, VAR_1->l, + 1);
                if (VAR_5 < 0) { VAR_1->c = VAR_3; goto lab1; }
                VAR_1->c = VAR_5;
            }
        lab1:
            ;
        }
        {
            int VAR_6 = FUNC_2(VAR_1, VAR_0, 97, 371, 1);
            if (VAR_6 < 0) goto lab0;
            VAR_1->c += VAR_6;
        }
        {
            int VAR_7 = FUNC_0(VAR_1, VAR_0, 97, 371, 1);
            if (VAR_7 < 0) goto lab0;
            VAR_1->c += VAR_7;
        }
        VAR_1->I[0] = VAR_1->c;
    lab0:
        VAR_1->c = VAR_2;
    }
    VAR_1->lb = VAR_1->c; VAR_1->c = VAR_1->l;

    { int VAR_8 = VAR_1->l - VAR_1->c; (void)VAR_8;
        { int VAR_9 = FUNC_4(VAR_1);
            if (VAR_9 == 0) goto lab2;
            if (VAR_9 < 0) return VAR_9;
        }
    lab2:
        VAR_1->c = VAR_1->l - VAR_8;
    }
    { int VAR_10 = VAR_1->l - VAR_1->c; (void)VAR_10;
        { int VAR_11 = FUNC_6(VAR_1);
            if (VAR_11 == 0) goto lab3;
            if (VAR_11 < 0) return VAR_11;
        }
    lab3:
        VAR_1->c = VAR_1->l - VAR_10;
    }
    { int VAR_12 = VAR_1->l - VAR_1->c; (void)VAR_12;
        { int VAR_13 = FUNC_3(VAR_1);
            if (VAR_13 == 0) goto lab4;
            if (VAR_13 < 0) return VAR_13;
        }
    lab4:
        VAR_1->c = VAR_1->l - VAR_12;
    }
    { int VAR_14 = VAR_1->l - VAR_1->c; (void)VAR_14;
        { int VAR_15 = FUNC_7(VAR_1);
            if (VAR_15 == 0) goto lab5;
            if (VAR_15 < 0) return VAR_15;
        }
    lab5:
        VAR_1->c = VAR_1->l - VAR_14;
    }
    { int VAR_16 = VAR_1->l - VAR_1->c; (void)VAR_16;
        { int VAR_17 = FUNC_3(VAR_1);
            if (VAR_17 == 0) goto lab6;
            if (VAR_17 < 0) return VAR_17;
        }
    lab6:
        VAR_1->c = VAR_1->l - VAR_16;
    }
    { int VAR_18 = VAR_1->l - VAR_1->c; (void)VAR_18;
        { int VAR_19 = FUNC_5(VAR_1);
            if (VAR_19 == 0) goto lab7;
            if (VAR_19 < 0) return VAR_19;
        }
    lab7:
        VAR_1->c = VAR_1->l - VAR_18;
    }
    VAR_1->c = VAR_1->lb;
    return 1;
}
