
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int* I; int l; int c; int* p; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct SN_env*,int ,int,int,int) ;
 int FUNC_2 (struct SN_env*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct SN_env * VAR_2) {
    VAR_2->I[0] = VAR_2->l;
    { int VAR_3 = VAR_2->c;
        if (FUNC_1(VAR_2, VAR_1, 97, 252, 0)) goto lab1;
        if (FUNC_1(VAR_2, VAR_1, 97, 252, 1) < 0) goto lab1;
        { int VAR_4 = VAR_2->c;
            if (VAR_2->c + 1 >= VAR_2->l || VAR_2->p[VAR_2->c + 1] >> 5 != 3 || !((101187584 >> (VAR_2->p[VAR_2->c + 1] & 0x1f)) & 1)) goto lab3;
            if (!(FUNC_0(VAR_2, VAR_0, 8))) goto lab3;
            goto lab2;
        lab3:
            VAR_2->c = VAR_4;
            if (VAR_2->c >= VAR_2->l) goto lab1;
            VAR_2->c++;
        }
    lab2:
        VAR_2->I[0] = VAR_2->c;
        goto lab0;
    lab1:
        VAR_2->c = VAR_3;
        if (FUNC_2(VAR_2, VAR_1, 97, 252, 0)) return 0;
        {
            int VAR_5 = FUNC_2(VAR_2, VAR_1, 97, 252, 1);
            if (VAR_5 < 0) return 0;
            VAR_2->c += VAR_5;
        }
        VAR_2->I[0] = VAR_2->c;
    }
lab0:
    return 1;
}
