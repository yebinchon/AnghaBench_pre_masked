
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int l; int c; } ;


 int FUNC_0 (struct SN_env*,int,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct SN_env*,int ,int,int,int ) ;
 int FUNC_2 (struct SN_env*) ;
 int FUNC_3 (struct SN_env*) ;
 int VAR_1 ;
 int FUNC_4 (struct SN_env*) ;

__attribute__((used)) static int FUNC_5(struct SN_env * VAR_2) {
    { int VAR_3 = FUNC_2(VAR_2);
        if (VAR_3 <= 0) return VAR_3;
    }
    { int VAR_4 = VAR_2->l - VAR_2->c; (void)VAR_4;
        if (FUNC_1(VAR_2, VAR_0, 97, 232, 0)) return 0;
        VAR_2->c = VAR_2->l - VAR_4;
        { int VAR_5 = VAR_2->l - VAR_2->c; (void)VAR_5;
            if (!(FUNC_0(VAR_2, 3, VAR_1))) goto lab0;
            return 0;
        lab0:
            VAR_2->c = VAR_2->l - VAR_5;
        }
    }
    { int VAR_6 = FUNC_4(VAR_2);
        if (VAR_6 < 0) return VAR_6;
    }
    { int VAR_7 = FUNC_3(VAR_2);
        if (VAR_7 <= 0) return VAR_7;
    }
    return 1;
}
