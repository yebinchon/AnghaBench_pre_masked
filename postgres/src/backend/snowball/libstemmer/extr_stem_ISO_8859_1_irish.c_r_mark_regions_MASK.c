
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int* I; int l; int c; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int,int,int) ;
 int FUNC_1 (struct SN_env*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct SN_env * VAR_1) {
    VAR_1->I[0] = VAR_1->l;
    VAR_1->I[1] = VAR_1->l;
    VAR_1->I[2] = VAR_1->l;
    { int VAR_2 = VAR_1->c;
        {
            int VAR_3 = FUNC_1(VAR_1, VAR_0, 97, 250, 1);
            if (VAR_3 < 0) goto lab0;
            VAR_1->c += VAR_3;
        }
        VAR_1->I[0] = VAR_1->c;
    lab0:
        VAR_1->c = VAR_2;
    }
    { int VAR_4 = VAR_1->c;
        {
            int VAR_5 = FUNC_1(VAR_1, VAR_0, 97, 250, 1);
            if (VAR_5 < 0) goto lab1;
            VAR_1->c += VAR_5;
        }
        {
            int VAR_6 = FUNC_0(VAR_1, VAR_0, 97, 250, 1);
            if (VAR_6 < 0) goto lab1;
            VAR_1->c += VAR_6;
        }
        VAR_1->I[1] = VAR_1->c;
        {
            int VAR_7 = FUNC_1(VAR_1, VAR_0, 97, 250, 1);
            if (VAR_7 < 0) goto lab1;
            VAR_1->c += VAR_7;
        }
        {
            int VAR_8 = FUNC_0(VAR_1, VAR_0, 97, 250, 1);
            if (VAR_8 < 0) goto lab1;
            VAR_1->c += VAR_8;
        }
        VAR_1->I[2] = VAR_1->c;
    lab1:
        VAR_1->c = VAR_4;
    }
    return 1;
}
