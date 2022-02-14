
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; int bra; int l; int* p; int ket; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int,int ) ;
 int FUNC_1 (struct SN_env*,int ,int) ;
 int FUNC_2 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct SN_env*) ;

__attribute__((used)) static int FUNC_4(struct SN_env * VAR_3) {
    { int VAR_4 = VAR_3->c;
        if (!(FUNC_0(VAR_3, 4, VAR_1))) goto lab0;
        return 0;
    lab0:
        VAR_3->c = VAR_4;
    }
    { int VAR_5 = VAR_3->c;
        if (!(FUNC_0(VAR_3, 4, VAR_2))) goto lab1;
        return 0;
    lab1:
        VAR_3->c = VAR_5;
    }
    VAR_3->bra = VAR_3->c;
    if (VAR_3->c + 1 >= VAR_3->l || (VAR_3->p[VAR_3->c + 1] != 129 && VAR_3->p[VAR_3->c + 1] != 136)) return 0;
    if (!(FUNC_1(VAR_3, VAR_0, 2))) return 0;
    VAR_3->ket = VAR_3->c;
    if (!(FUNC_2(VAR_3->p) > 3)) return 0;
    { int VAR_6 = FUNC_3(VAR_3);
        if (VAR_6 < 0) return VAR_6;
    }
    return 1;
}
