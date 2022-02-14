
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int ket; int c; int lb; int* p; int bra; int l; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int,int ) ;
 int FUNC_1 (struct SN_env*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct SN_env*) ;

__attribute__((used)) static int FUNC_3(struct SN_env * VAR_6) {
    int VAR_7;
    VAR_6->ket = VAR_6->c;
    if (VAR_6->c - 2 <= VAR_6->lb || VAR_6->p[VAR_6->c - 1] >> 5 != 4 || !((262 >> (VAR_6->p[VAR_6->c - 1] & 0x1f)) & 1)) return 0;
    VAR_7 = FUNC_1(VAR_6, VAR_0, 3);
    if (!(VAR_7)) return 0;
    VAR_6->bra = VAR_6->c;
    switch (VAR_7) {
        case 1:
            { int VAR_8 = VAR_6->l - VAR_6->c; (void)VAR_8;
                if (!(FUNC_0(VAR_6, 6, VAR_1))) goto lab1;
                goto lab0;
            lab1:
                VAR_6->c = VAR_6->l - VAR_8;
                if (!(FUNC_0(VAR_6, 6, VAR_2))) goto lab2;
                goto lab0;
            lab2:
                VAR_6->c = VAR_6->l - VAR_8;
                if (!(FUNC_0(VAR_6, 6, VAR_3))) goto lab3;
                goto lab0;
            lab3:
                VAR_6->c = VAR_6->l - VAR_8;
                if (!(FUNC_0(VAR_6, 6, VAR_4))) return 0;
            }
        lab0:
            { int VAR_9 = FUNC_2(VAR_6);
                if (VAR_9 < 0) return VAR_9;
            }
            break;
        case 2:
            if (!(FUNC_0(VAR_6, 9, VAR_5))) return 0;
            { int VAR_10 = FUNC_2(VAR_6);
                if (VAR_10 < 0) return VAR_10;
            }
            break;
    }
    return 1;
}
