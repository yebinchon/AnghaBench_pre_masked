
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int l; int c; int lb; char* p; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct SN_env*,int ,int,int,int ) ;
 int FUNC_1 (char*,int,int,int ,int) ;

__attribute__((used)) static int FUNC_2(struct SN_env * VAR_1) {
    { int VAR_2 = VAR_1->l - VAR_1->c; (void)VAR_2;
        if (VAR_1->c <= VAR_1->lb || VAR_1->p[VAR_1->c - 1] != 's') goto lab1;
        VAR_1->c--;
        { int VAR_3 = VAR_1->l - VAR_1->c;
            if (FUNC_0(VAR_1, VAR_0, 97, 305, 0)) goto lab1;
            VAR_1->c = VAR_1->l - VAR_3;
        }
        goto lab0;
    lab1:
        VAR_1->c = VAR_1->l - VAR_2;
        { int VAR_4 = VAR_1->l - VAR_1->c; (void)VAR_4;
            { int VAR_5 = VAR_1->l - VAR_1->c;
                if (VAR_1->c <= VAR_1->lb || VAR_1->p[VAR_1->c - 1] != 's') goto lab2;
                VAR_1->c--;
                VAR_1->c = VAR_1->l - VAR_5;
            }
            return 0;
        lab2:
            VAR_1->c = VAR_1->l - VAR_4;
        }
        { int VAR_6 = VAR_1->l - VAR_1->c;
            { int VAR_7 = FUNC_1(VAR_1->p, VAR_1->c, VAR_1->lb, 0, -1);
                if (VAR_7 < 0) return 0;
                VAR_1->c = VAR_7;
            }
            if (FUNC_0(VAR_1, VAR_0, 97, 305, 0)) return 0;
            VAR_1->c = VAR_1->l - VAR_6;
        }
    }
lab0:
    return 1;
}
