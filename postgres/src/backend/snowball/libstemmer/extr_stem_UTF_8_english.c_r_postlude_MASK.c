
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; int bra; int l; char* p; size_t ket; int * B; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ,int,int) ;
 int FUNC_1 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct SN_env * VAR_1) {
    if (!(VAR_1->B[0])) return 0;
    while(1) {
        int VAR_2 = VAR_1->c;
        while(1) {
            int VAR_3 = VAR_1->c;
            VAR_1->bra = VAR_1->c;
            if (VAR_1->c == VAR_1->l || VAR_1->p[VAR_1->c] != 'Y') goto lab1;
            VAR_1->c++;
            VAR_1->ket = VAR_1->c;
            VAR_1->c = VAR_3;
            break;
        lab1:
            VAR_1->c = VAR_3;
            { int VAR_4 = FUNC_0(VAR_1->p, VAR_1->c, 0, VAR_1->l, 1);
                if (VAR_4 < 0) goto lab0;
                VAR_1->c = VAR_4;
            }
        }
        { int VAR_5 = FUNC_1(VAR_1, 1, VAR_0);
            if (VAR_5 < 0) return VAR_5;
        }
        continue;
    lab0:
        VAR_1->c = VAR_2;
        break;
    }
    return 1;
}
