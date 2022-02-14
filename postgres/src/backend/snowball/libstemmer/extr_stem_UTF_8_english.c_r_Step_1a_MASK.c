
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int l; int c; int ket; int lb; int* p; size_t bra; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int VAR_2 ;
 int FUNC_1 (struct SN_env*,int ,int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int*,size_t,size_t,int,int) ;
 int FUNC_3 (struct SN_env*) ;
 int FUNC_4 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct SN_env * VAR_6) {
    int VAR_7;
    { int VAR_8 = VAR_6->l - VAR_6->c; (void)VAR_8;
        VAR_6->ket = VAR_6->c;
        if (VAR_6->c <= VAR_6->lb || (VAR_6->p[VAR_6->c - 1] != 39 && VAR_6->p[VAR_6->c - 1] != 115)) { VAR_6->c = VAR_6->l - VAR_8; goto lab0; }
        if (!(FUNC_0(VAR_6, VAR_0, 3))) { VAR_6->c = VAR_6->l - VAR_8; goto lab0; }
        VAR_6->bra = VAR_6->c;
        { int VAR_9 = FUNC_3(VAR_6);
            if (VAR_9 < 0) return VAR_9;
        }
    lab0:
        ;
    }
    VAR_6->ket = VAR_6->c;
    if (VAR_6->c <= VAR_6->lb || (VAR_6->p[VAR_6->c - 1] != 100 && VAR_6->p[VAR_6->c - 1] != 115)) return 0;
    VAR_7 = FUNC_0(VAR_6, VAR_1, 6);
    if (!(VAR_7)) return 0;
    VAR_6->bra = VAR_6->c;
    switch (VAR_7) {
        case 1:
            { int VAR_10 = FUNC_4(VAR_6, 2, VAR_3);
                if (VAR_10 < 0) return VAR_10;
            }
            break;
        case 2:
            { int VAR_11 = VAR_6->l - VAR_6->c; (void)VAR_11;
                { int VAR_12 = FUNC_2(VAR_6->p, VAR_6->c, VAR_6->lb, VAR_6->l, - 2);
                    if (VAR_12 < 0) goto lab2;
                    VAR_6->c = VAR_12;
                }
                { int VAR_13 = FUNC_4(VAR_6, 1, VAR_4);
                    if (VAR_13 < 0) return VAR_13;
                }
                goto lab1;
            lab2:
                VAR_6->c = VAR_6->l - VAR_11;
                { int VAR_14 = FUNC_4(VAR_6, 2, VAR_5);
                    if (VAR_14 < 0) return VAR_14;
                }
            }
        lab1:
            break;
        case 3:
            { int VAR_15 = FUNC_2(VAR_6->p, VAR_6->c, VAR_6->lb, 0, -1);
                if (VAR_15 < 0) return 0;
                VAR_6->c = VAR_15;
            }
            {
                int VAR_16 = FUNC_1(VAR_6, VAR_2, 97, 121, 1);
                if (VAR_16 < 0) return 0;
                VAR_6->c -= VAR_16;
            }
            { int VAR_17 = FUNC_3(VAR_6);
                if (VAR_17 < 0) return VAR_17;
            }
            break;
    }
    return 1;
}
