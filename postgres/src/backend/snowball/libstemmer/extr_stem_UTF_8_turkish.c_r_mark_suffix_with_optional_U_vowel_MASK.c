
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int l; int c; int lb; int p; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct SN_env*,int ,int,int,int ) ;
 scalar_t__ FUNC_1 (struct SN_env*,int ,int,int,int ) ;
 int FUNC_2 (int ,int,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct SN_env * VAR_2) {
    { int VAR_3 = VAR_2->l - VAR_2->c; (void)VAR_3;
        if (FUNC_0(VAR_2, VAR_0, 105, 305, 0)) goto lab1;
        { int VAR_4 = VAR_2->l - VAR_2->c;
            if (FUNC_1(VAR_2, VAR_1, 97, 305, 0)) goto lab1;
            VAR_2->c = VAR_2->l - VAR_4;
        }
        goto lab0;
    lab1:
        VAR_2->c = VAR_2->l - VAR_3;
        { int VAR_5 = VAR_2->l - VAR_2->c; (void)VAR_5;
            { int VAR_6 = VAR_2->l - VAR_2->c;
                if (FUNC_0(VAR_2, VAR_0, 105, 305, 0)) goto lab2;
                VAR_2->c = VAR_2->l - VAR_6;
            }
            return 0;
        lab2:
            VAR_2->c = VAR_2->l - VAR_5;
        }
        { int VAR_7 = VAR_2->l - VAR_2->c;
            { int VAR_8 = FUNC_2(VAR_2->p, VAR_2->c, VAR_2->lb, 0, -1);
                if (VAR_8 < 0) return 0;
                VAR_2->c = VAR_8;
            }
            if (FUNC_1(VAR_2, VAR_1, 97, 305, 0)) return 0;
            VAR_2->c = VAR_2->l - VAR_7;
        }
    }
lab0:
    return 1;
}
