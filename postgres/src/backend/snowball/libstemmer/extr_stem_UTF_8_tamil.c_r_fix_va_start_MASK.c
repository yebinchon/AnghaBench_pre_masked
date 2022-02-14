
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; int bra; int ket; } ;


 int FUNC_0 (struct SN_env*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct SN_env * VAR_12) {
    { int VAR_13 = VAR_12->c;
        { int VAR_14 = VAR_12->c;
            { int VAR_15 = VAR_12->c;
                if (!(FUNC_0(VAR_12, 6, VAR_0))) { VAR_12->c = VAR_15; goto lab2; }
            lab2:
                ;
            }
            VAR_12->c = VAR_14;
            VAR_12->bra = VAR_12->c;
        }
        if (!(FUNC_0(VAR_12, 6, VAR_1))) goto lab1;
        VAR_12->ket = VAR_12->c;
        { int VAR_16 = FUNC_1(VAR_12, 3, VAR_4);
            if (VAR_16 < 0) return VAR_16;
        }
        goto lab0;
    lab1:
        VAR_12->c = VAR_13;
        { int VAR_17 = VAR_12->c;
            { int VAR_18 = VAR_12->c;
                if (!(FUNC_0(VAR_12, 6, VAR_5))) { VAR_12->c = VAR_18; goto lab4; }
            lab4:
                ;
            }
            VAR_12->c = VAR_17;
            VAR_12->bra = VAR_12->c;
        }
        if (!(FUNC_0(VAR_12, 6, VAR_6))) goto lab3;
        VAR_12->ket = VAR_12->c;
        { int VAR_19 = FUNC_1(VAR_12, 3, VAR_7);
            if (VAR_19 < 0) return VAR_19;
        }
        goto lab0;
    lab3:
        VAR_12->c = VAR_13;
        { int VAR_20 = VAR_12->c;
            { int VAR_21 = VAR_12->c;
                if (!(FUNC_0(VAR_12, 6, VAR_8))) { VAR_12->c = VAR_21; goto lab6; }
            lab6:
                ;
            }
            VAR_12->c = VAR_20;
            VAR_12->bra = VAR_12->c;
        }
        if (!(FUNC_0(VAR_12, 6, VAR_9))) goto lab5;
        VAR_12->ket = VAR_12->c;
        { int VAR_22 = FUNC_1(VAR_12, 3, VAR_10);
            if (VAR_22 < 0) return VAR_22;
        }
        goto lab0;
    lab5:
        VAR_12->c = VAR_13;
        { int VAR_23 = VAR_12->c;
            { int VAR_24 = VAR_12->c;
                if (!(FUNC_0(VAR_12, 6, VAR_11))) { VAR_12->c = VAR_24; goto lab7; }
            lab7:
                ;
            }
            VAR_12->c = VAR_23;
            VAR_12->bra = VAR_12->c;
        }
        if (!(FUNC_0(VAR_12, 6, VAR_2))) return 0;
        VAR_12->ket = VAR_12->c;
        { int VAR_25 = FUNC_1(VAR_12, 3, VAR_3);
            if (VAR_25 < 0) return VAR_25;
        }
    }
lab0:
    return 1;
}
