
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int ket; int c; int l; int lb; char* p; size_t bra; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int,int,int) ;
 int VAR_1 ;
 int FUNC_1 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct SN_env * VAR_2) {
    VAR_2->ket = VAR_2->c;
    { int VAR_3 = VAR_2->l - VAR_2->c; (void)VAR_3;
        if (VAR_2->c <= VAR_2->lb || VAR_2->p[VAR_2->c - 1] != 'y') goto lab1;
        VAR_2->c--;
        goto lab0;
    lab1:
        VAR_2->c = VAR_2->l - VAR_3;
        if (VAR_2->c <= VAR_2->lb || VAR_2->p[VAR_2->c - 1] != 'Y') return 0;
        VAR_2->c--;
    }
lab0:
    VAR_2->bra = VAR_2->c;
    {
        int VAR_4 = FUNC_0(VAR_2, VAR_0, 97, 121, 1);
        if (VAR_4 < 0) return 0;
        VAR_2->c -= VAR_4;
    }
    { int VAR_5 = FUNC_1(VAR_2, 1, VAR_1);
        if (VAR_5 < 0) return VAR_5;
    }
    return 1;
}
