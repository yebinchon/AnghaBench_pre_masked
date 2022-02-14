
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int* I; int l; int c; int* p; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (struct SN_env*,int ,int,int,int) ;
 int FUNC_2 (struct SN_env*,int ,int,int,int) ;
 int FUNC_3 (int*,int,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct SN_env * VAR_2) {
    VAR_2->I[0] = VAR_2->l;
    VAR_2->I[1] = VAR_2->l;
    VAR_2->I[2] = VAR_2->l;
    { int VAR_3 = VAR_2->c;
        { int VAR_4 = VAR_2->c;
            if (FUNC_1(VAR_2, VAR_1, 97, 251, 0)) goto lab2;
            if (FUNC_1(VAR_2, VAR_1, 97, 251, 0)) goto lab2;
            { int VAR_5 = FUNC_3(VAR_2->p, VAR_2->c, 0, VAR_2->l, 1);
                if (VAR_5 < 0) goto lab2;
                VAR_2->c = VAR_5;
            }
            goto lab1;
        lab2:
            VAR_2->c = VAR_4;
            if (VAR_2->c + 2 >= VAR_2->l || VAR_2->p[VAR_2->c + 2] >> 5 != 3 || !((331776 >> (VAR_2->p[VAR_2->c + 2] & 0x1f)) & 1)) goto lab3;
            if (!(FUNC_0(VAR_2, VAR_0, 3))) goto lab3;
            goto lab1;
        lab3:
            VAR_2->c = VAR_4;
            { int VAR_6 = FUNC_3(VAR_2->p, VAR_2->c, 0, VAR_2->l, 1);
                if (VAR_6 < 0) goto lab0;
                VAR_2->c = VAR_6;
            }
            {
                int VAR_7 = FUNC_2(VAR_2, VAR_1, 97, 251, 1);
                if (VAR_7 < 0) goto lab0;
                VAR_2->c += VAR_7;
            }
        }
    lab1:
        VAR_2->I[0] = VAR_2->c;
    lab0:
        VAR_2->c = VAR_3;
    }
    { int VAR_8 = VAR_2->c;
        {
            int VAR_9 = FUNC_2(VAR_2, VAR_1, 97, 251, 1);
            if (VAR_9 < 0) goto lab4;
            VAR_2->c += VAR_9;
        }
        {
            int VAR_10 = FUNC_1(VAR_2, VAR_1, 97, 251, 1);
            if (VAR_10 < 0) goto lab4;
            VAR_2->c += VAR_10;
        }
        VAR_2->I[1] = VAR_2->c;
        {
            int VAR_11 = FUNC_2(VAR_2, VAR_1, 97, 251, 1);
            if (VAR_11 < 0) goto lab4;
            VAR_2->c += VAR_11;
        }
        {
            int VAR_12 = FUNC_1(VAR_2, VAR_1, 97, 251, 1);
            if (VAR_12 < 0) goto lab4;
            VAR_2->c += VAR_12;
        }
        VAR_2->I[2] = VAR_2->c;
    lab4:
        VAR_2->c = VAR_8;
    }
    return 1;
}
