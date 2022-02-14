
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int ket; int c; int bra; int l; int lb; int* p; scalar_t__* S; scalar_t__* B; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int FUNC_1 (struct SN_env*,int,int,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (struct SN_env*) ;
 int FUNC_3 (struct SN_env*,int,int ) ;
 void* FUNC_4 (struct SN_env*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct SN_env * VAR_16) {
    int VAR_17;
    VAR_16->ket = VAR_16->c;
    if (!(FUNC_0(VAR_16, VAR_3, 6))) return 0;
    VAR_16->bra = VAR_16->c;
    { int VAR_18 = FUNC_2(VAR_16);
        if (VAR_18 < 0) return VAR_18;
    }
    VAR_16->B[0] = 0;
    { int VAR_19 = VAR_16->l - VAR_16->c; (void)VAR_19;
        VAR_16->ket = VAR_16->c;
        if (VAR_16->c - 3 <= VAR_16->lb || VAR_16->p[VAR_16->c - 1] != 181) goto lab1;
        if (!(FUNC_0(VAR_16, VAR_0, 5))) goto lab1;
        VAR_16->bra = VAR_16->c;
        if (VAR_16->c > VAR_16->lb) goto lab1;
        VAR_16->S[0] = FUNC_4(VAR_16, VAR_16->S[0]);
        if (VAR_16->S[0] == 0) return -1;
        { int VAR_20 = FUNC_3(VAR_16, 6, VAR_4);
            if (VAR_20 < 0) return VAR_20;
        }
        { int VAR_21;
            { int VAR_22 = VAR_16->c;
                VAR_21 = FUNC_1(VAR_16, VAR_16->c, VAR_16->c, VAR_16->S[0]);
                VAR_16->c = VAR_22;
            }
            if (VAR_21 < 0) return VAR_21;
        }
        goto lab0;
    lab1:
        VAR_16->c = VAR_16->l - VAR_19;
        VAR_16->ket = VAR_16->c;
        if (VAR_16->c - 7 <= VAR_16->lb || VAR_16->p[VAR_16->c - 1] != 181) goto lab2;
        if (!(FUNC_0(VAR_16, VAR_1, 2))) goto lab2;
        VAR_16->bra = VAR_16->c;
        if (VAR_16->c > VAR_16->lb) goto lab2;
        VAR_16->S[0] = FUNC_4(VAR_16, VAR_16->S[0]);
        if (VAR_16->S[0] == 0) return -1;
        { int VAR_23 = FUNC_3(VAR_16, 2, VAR_5);
            if (VAR_23 < 0) return VAR_23;
        }
        { int VAR_24;
            { int VAR_25 = VAR_16->c;
                VAR_24 = FUNC_1(VAR_16, VAR_16->c, VAR_16->c, VAR_16->S[0]);
                VAR_16->c = VAR_25;
            }
            if (VAR_24 < 0) return VAR_24;
        }
        goto lab0;
    lab2:
        VAR_16->c = VAR_16->l - VAR_19;
        VAR_16->ket = VAR_16->c;
        if (VAR_16->c - 9 <= VAR_16->lb || (VAR_16->p[VAR_16->c - 1] != 186 && VAR_16->p[VAR_16->c - 1] != 189)) return 0;
        VAR_17 = FUNC_0(VAR_16, VAR_2, 10);
        if (!(VAR_17)) return 0;
        VAR_16->bra = VAR_16->c;
        switch (VAR_17) {
            case 1:
                { int VAR_26 = FUNC_3(VAR_16, 12, VAR_6);
                    if (VAR_26 < 0) return VAR_26;
                }
                break;
            case 2:
                { int VAR_27 = FUNC_3(VAR_16, 8, VAR_7);
                    if (VAR_27 < 0) return VAR_27;
                }
                break;
            case 3:
                { int VAR_28 = FUNC_3(VAR_16, 10, VAR_8);
                    if (VAR_28 < 0) return VAR_28;
                }
                break;
            case 4:
                { int VAR_29 = FUNC_3(VAR_16, 6, VAR_9);
                    if (VAR_29 < 0) return VAR_29;
                }
                break;
            case 5:
                { int VAR_30 = FUNC_3(VAR_16, 12, VAR_10);
                    if (VAR_30 < 0) return VAR_30;
                }
                break;
            case 6:
                { int VAR_31 = FUNC_3(VAR_16, 10, VAR_11);
                    if (VAR_31 < 0) return VAR_31;
                }
                break;
            case 7:
                { int VAR_32 = FUNC_3(VAR_16, 6, VAR_12);
                    if (VAR_32 < 0) return VAR_32;
                }
                break;
            case 8:
                { int VAR_33 = FUNC_3(VAR_16, 16, VAR_13);
                    if (VAR_33 < 0) return VAR_33;
                }
                break;
            case 9:
                { int VAR_34 = FUNC_3(VAR_16, 12, VAR_14);
                    if (VAR_34 < 0) return VAR_34;
                }
                break;
            case 10:
                { int VAR_35 = FUNC_3(VAR_16, 10, VAR_15);
                    if (VAR_35 < 0) return VAR_35;
                }
                break;
        }
    }
lab0:
    return 1;
}
