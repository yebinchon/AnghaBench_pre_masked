
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {scalar_t__ c; scalar_t__* I; int lb; scalar_t__ ket; scalar_t__ bra; scalar_t__* S; } ;


 int FUNC_0 (struct SN_env*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct SN_env*,int ,int,int,int ) ;
 int FUNC_2 (struct SN_env*) ;
 scalar_t__ FUNC_3 (struct SN_env*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct SN_env * VAR_1) {

    { int VAR_2;
        if (VAR_1->c < VAR_1->I[0]) return 0;
        VAR_2 = VAR_1->lb; VAR_1->lb = VAR_1->I[0];
        VAR_1->ket = VAR_1->c;
        if (FUNC_1(VAR_1, VAR_0, 98, 122, 0)) { VAR_1->lb = VAR_2; return 0; }
        VAR_1->bra = VAR_1->c;
        VAR_1->S[0] = FUNC_3(VAR_1, VAR_1->S[0]);
        if (VAR_1->S[0] == 0) return -1;
        VAR_1->lb = VAR_2;
    }
    if (!(FUNC_0(VAR_1, VAR_1->S[0]))) return 0;
    { int VAR_3 = FUNC_2(VAR_1);
        if (VAR_3 < 0) return VAR_3;
    }
    return 1;
}
