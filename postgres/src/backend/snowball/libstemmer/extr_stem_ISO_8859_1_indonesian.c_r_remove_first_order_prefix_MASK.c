
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int bra; int c; int l; int* p; int ket; int* I; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (struct SN_env*,int ,int,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct SN_env*) ;
 int FUNC_3 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct SN_env * VAR_6) {
    int VAR_7;
    VAR_6->bra = VAR_6->c;
    if (VAR_6->c + 1 >= VAR_6->l || (VAR_6->p[VAR_6->c + 1] != 105 && VAR_6->p[VAR_6->c + 1] != 101)) return 0;
    VAR_7 = FUNC_0(VAR_6, VAR_0, 12);
    if (!(VAR_7)) return 0;
    VAR_6->ket = VAR_6->c;
    switch (VAR_7) {
        case 1:
            { int VAR_8 = FUNC_2(VAR_6);
                if (VAR_8 < 0) return VAR_8;
            }
            VAR_6->I[1] = 1;
            VAR_6->I[0] -= 1;
            break;
        case 2:
            { int VAR_9 = FUNC_2(VAR_6);
                if (VAR_9 < 0) return VAR_9;
            }
            VAR_6->I[1] = 3;
            VAR_6->I[0] -= 1;
            break;
        case 3:
            VAR_6->I[1] = 1;
            { int VAR_10 = FUNC_3(VAR_6, 1, VAR_2);
                if (VAR_10 < 0) return VAR_10;
            }
            VAR_6->I[0] -= 1;
            break;
        case 4:
            VAR_6->I[1] = 3;
            { int VAR_11 = FUNC_3(VAR_6, 1, VAR_3);
                if (VAR_11 < 0) return VAR_11;
            }
            VAR_6->I[0] -= 1;
            break;
        case 5:
            VAR_6->I[1] = 1;
            VAR_6->I[0] -= 1;
            { int VAR_12 = VAR_6->c;
                { int VAR_13 = VAR_6->c;
                    if (FUNC_1(VAR_6, VAR_1, 97, 117, 0)) goto lab1;
                    VAR_6->c = VAR_13;
                    { int VAR_14 = FUNC_3(VAR_6, 1, VAR_4);
                        if (VAR_14 < 0) return VAR_14;
                    }
                }
                goto lab0;
            lab1:
                VAR_6->c = VAR_12;
                { int VAR_15 = FUNC_2(VAR_6);
                    if (VAR_15 < 0) return VAR_15;
                }
            }
        lab0:
            break;
        case 6:
            VAR_6->I[1] = 3;
            VAR_6->I[0] -= 1;
            { int VAR_16 = VAR_6->c;
                { int VAR_17 = VAR_6->c;
                    if (FUNC_1(VAR_6, VAR_1, 97, 117, 0)) goto lab3;
                    VAR_6->c = VAR_17;
                    { int VAR_18 = FUNC_3(VAR_6, 1, VAR_5);
                        if (VAR_18 < 0) return VAR_18;
                    }
                }
                goto lab2;
            lab3:
                VAR_6->c = VAR_16;
                { int VAR_19 = FUNC_2(VAR_6);
                    if (VAR_19 < 0) return VAR_19;
                }
            }
        lab2:
            break;
    }
    return 1;
}
