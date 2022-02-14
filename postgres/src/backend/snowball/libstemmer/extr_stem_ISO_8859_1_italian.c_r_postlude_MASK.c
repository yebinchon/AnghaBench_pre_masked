
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; int bra; int l; int* p; int ket; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct SN_env * VAR_3) {
    int VAR_4;
    while(1) {
        int VAR_5 = VAR_3->c;
        VAR_3->bra = VAR_3->c;
        if (VAR_3->c >= VAR_3->l || (VAR_3->p[VAR_3->c + 0] != 73 && VAR_3->p[VAR_3->c + 0] != 85)) VAR_4 = 3; else
        VAR_4 = FUNC_0(VAR_3, VAR_0, 3);
        if (!(VAR_4)) goto lab0;
        VAR_3->ket = VAR_3->c;
        switch (VAR_4) {
            case 1:
                { int VAR_6 = FUNC_1(VAR_3, 1, VAR_1);
                    if (VAR_6 < 0) return VAR_6;
                }
                break;
            case 2:
                { int VAR_7 = FUNC_1(VAR_3, 1, VAR_2);
                    if (VAR_7 < 0) return VAR_7;
                }
                break;
            case 3:
                if (VAR_3->c >= VAR_3->l) goto lab0;
                VAR_3->c++;
                break;
        }
        continue;
    lab0:
        VAR_3->c = VAR_5;
        break;
    }
    return 1;
}
