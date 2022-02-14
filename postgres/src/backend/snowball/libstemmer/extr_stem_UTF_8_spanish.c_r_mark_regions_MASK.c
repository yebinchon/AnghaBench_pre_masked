
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int* I; int l; int c; int p; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int,int,int) ;
 int FUNC_1 (struct SN_env*,int ,int,int,int) ;
 int FUNC_2 (int ,int,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct SN_env * VAR_1) {
    VAR_1->I[0] = VAR_1->l;
    VAR_1->I[1] = VAR_1->l;
    VAR_1->I[2] = VAR_1->l;
    { int VAR_2 = VAR_1->c;
        { int VAR_3 = VAR_1->c;
            if (FUNC_0(VAR_1, VAR_0, 97, 252, 0)) goto lab2;
            { int VAR_4 = VAR_1->c;
                if (FUNC_1(VAR_1, VAR_0, 97, 252, 0)) goto lab4;
                {
                    int VAR_5 = FUNC_1(VAR_1, VAR_0, 97, 252, 1);
                    if (VAR_5 < 0) goto lab4;
                    VAR_1->c += VAR_5;
                }
                goto lab3;
            lab4:
                VAR_1->c = VAR_4;
                if (FUNC_0(VAR_1, VAR_0, 97, 252, 0)) goto lab2;
                {
                    int VAR_6 = FUNC_0(VAR_1, VAR_0, 97, 252, 1);
                    if (VAR_6 < 0) goto lab2;
                    VAR_1->c += VAR_6;
                }
            }
        lab3:
            goto lab1;
        lab2:
            VAR_1->c = VAR_3;
            if (FUNC_1(VAR_1, VAR_0, 97, 252, 0)) goto lab0;
            { int VAR_7 = VAR_1->c;
                if (FUNC_1(VAR_1, VAR_0, 97, 252, 0)) goto lab6;
                {
                    int VAR_8 = FUNC_1(VAR_1, VAR_0, 97, 252, 1);
                    if (VAR_8 < 0) goto lab6;
                    VAR_1->c += VAR_8;
                }
                goto lab5;
            lab6:
                VAR_1->c = VAR_7;
                if (FUNC_0(VAR_1, VAR_0, 97, 252, 0)) goto lab0;
                { int VAR_9 = FUNC_2(VAR_1->p, VAR_1->c, 0, VAR_1->l, 1);
                    if (VAR_9 < 0) goto lab0;
                    VAR_1->c = VAR_9;
                }
            }
        lab5:
            ;
        }
    lab1:
        VAR_1->I[0] = VAR_1->c;
    lab0:
        VAR_1->c = VAR_2;
    }
    { int VAR_10 = VAR_1->c;
        {
            int VAR_11 = FUNC_1(VAR_1, VAR_0, 97, 252, 1);
            if (VAR_11 < 0) goto lab7;
            VAR_1->c += VAR_11;
        }
        {
            int VAR_12 = FUNC_0(VAR_1, VAR_0, 97, 252, 1);
            if (VAR_12 < 0) goto lab7;
            VAR_1->c += VAR_12;
        }
        VAR_1->I[1] = VAR_1->c;
        {
            int VAR_13 = FUNC_1(VAR_1, VAR_0, 97, 252, 1);
            if (VAR_13 < 0) goto lab7;
            VAR_1->c += VAR_13;
        }
        {
            int VAR_14 = FUNC_0(VAR_1, VAR_0, 97, 252, 1);
            if (VAR_14 < 0) goto lab7;
            VAR_1->c += VAR_14;
        }
        VAR_1->I[2] = VAR_1->c;
    lab7:
        VAR_1->c = VAR_10;
    }
    return 1;
}
