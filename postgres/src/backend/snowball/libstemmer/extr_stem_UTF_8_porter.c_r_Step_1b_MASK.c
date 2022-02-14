
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int ket; int c; int lb; int* p; int bra; int* I; int l; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int VAR_2 ;
 int FUNC_1 (struct SN_env*,int,int,int,int ) ;
 int FUNC_2 (struct SN_env*,int ,int,int,int) ;
 int FUNC_3 (struct SN_env*) ;
 int FUNC_4 (struct SN_env*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int*,int,int,int ,int) ;
 int FUNC_6 (struct SN_env*) ;
 int FUNC_7 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_8(struct SN_env * VAR_6) {
    int VAR_7;
    VAR_6->ket = VAR_6->c;
    if (VAR_6->c - 1 <= VAR_6->lb || (VAR_6->p[VAR_6->c - 1] != 100 && VAR_6->p[VAR_6->c - 1] != 103)) return 0;
    VAR_7 = FUNC_0(VAR_6, VAR_1, 3);
    if (!(VAR_7)) return 0;
    VAR_6->bra = VAR_6->c;
    switch (VAR_7) {
        case 1:
            { int VAR_8 = FUNC_3(VAR_6);
                if (VAR_8 <= 0) return VAR_8;
            }
            { int VAR_9 = FUNC_7(VAR_6, 2, VAR_3);
                if (VAR_9 < 0) return VAR_9;
            }
            break;
        case 2:
            { int VAR_10 = VAR_6->l - VAR_6->c;
                {
                    int VAR_11 = FUNC_2(VAR_6, VAR_2, 97, 121, 1);
                    if (VAR_11 < 0) return 0;
                    VAR_6->c -= VAR_11;
                }
                VAR_6->c = VAR_6->l - VAR_10;
            }
            { int VAR_12 = FUNC_6(VAR_6);
                if (VAR_12 < 0) return VAR_12;
            }
            { int VAR_13 = VAR_6->l - VAR_6->c;
                if (VAR_6->c - 1 <= VAR_6->lb || VAR_6->p[VAR_6->c - 1] >> 5 != 3 || !((68514004 >> (VAR_6->p[VAR_6->c - 1] & 0x1f)) & 1)) VAR_7 = 3; else
                VAR_7 = FUNC_0(VAR_6, VAR_0, 13);
                if (!(VAR_7)) return 0;
                VAR_6->c = VAR_6->l - VAR_13;
            }
            switch (VAR_7) {
                case 1:
                    { int VAR_14;
                        { int VAR_15 = VAR_6->c;
                            VAR_14 = FUNC_1(VAR_6, VAR_6->c, VAR_6->c, 1, VAR_4);
                            VAR_6->c = VAR_15;
                        }
                        if (VAR_14 < 0) return VAR_14;
                    }
                    break;
                case 2:
                    VAR_6->ket = VAR_6->c;
                    { int VAR_16 = FUNC_5(VAR_6->p, VAR_6->c, VAR_6->lb, 0, -1);
                        if (VAR_16 < 0) return 0;
                        VAR_6->c = VAR_16;
                    }
                    VAR_6->bra = VAR_6->c;
                    { int VAR_17 = FUNC_6(VAR_6);
                        if (VAR_17 < 0) return VAR_17;
                    }
                    break;
                case 3:
                    if (VAR_6->c != VAR_6->I[0]) return 0;
                    { int VAR_18 = VAR_6->l - VAR_6->c;
                        { int VAR_19 = FUNC_4(VAR_6);
                            if (VAR_19 <= 0) return VAR_19;
                        }
                        VAR_6->c = VAR_6->l - VAR_18;
                    }
                    { int VAR_20;
                        { int VAR_21 = VAR_6->c;
                            VAR_20 = FUNC_1(VAR_6, VAR_6->c, VAR_6->c, 1, VAR_5);
                            VAR_6->c = VAR_21;
                        }
                        if (VAR_20 < 0) return VAR_20;
                    }
                    break;
            }
            break;
    }
    return 1;
}
