
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; int lb; int l; int ket; int* p; int bra; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int FUNC_1 (struct SN_env*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int*,int,int ,int,int) ;
 int FUNC_3 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct SN_env * VAR_6) {
    int VAR_7;
    { int VAR_8 = VAR_6->c;
        VAR_6->lb = VAR_6->c; VAR_6->c = VAR_6->l;

        VAR_6->ket = VAR_6->c;
        if (VAR_6->c - 1 <= VAR_6->lb || VAR_6->p[VAR_6->c - 1] >> 5 != 5 || !((124 >> (VAR_6->p[VAR_6->c - 1] & 0x1f)) & 1)) goto lab0;
        if (!(FUNC_1(VAR_6, VAR_0, 5))) goto lab0;
        VAR_6->bra = VAR_6->c;
        { int VAR_9 = FUNC_3(VAR_6, 2, VAR_2);
            if (VAR_9 < 0) return VAR_9;
        }
        VAR_6->c = VAR_6->lb;
    lab0:
        VAR_6->c = VAR_8;
    }
    { int VAR_10 = VAR_6->c;
        while(1) {
            int VAR_11 = VAR_6->c;
            { int VAR_12 = VAR_6->c;
                VAR_6->bra = VAR_6->c;
                if (VAR_6->c + 1 >= VAR_6->l || VAR_6->p[VAR_6->c + 1] >> 5 != 5 || !((124 >> (VAR_6->p[VAR_6->c + 1] & 0x1f)) & 1)) goto lab4;
                VAR_7 = FUNC_0(VAR_6, VAR_1, 5);
                if (!(VAR_7)) goto lab4;
                VAR_6->ket = VAR_6->c;
                switch (VAR_7) {
                    case 1:
                        { int VAR_13 = FUNC_3(VAR_6, 2, VAR_3);
                            if (VAR_13 < 0) return VAR_13;
                        }
                        break;
                    case 2:
                        { int VAR_14 = FUNC_3(VAR_6, 2, VAR_4);
                            if (VAR_14 < 0) return VAR_14;
                        }
                        break;
                    case 3:
                        { int VAR_15 = FUNC_3(VAR_6, 2, VAR_5);
                            if (VAR_15 < 0) return VAR_15;
                        }
                        break;
                }
                goto lab3;
            lab4:
                VAR_6->c = VAR_12;
                { int VAR_16 = FUNC_2(VAR_6->p, VAR_6->c, 0, VAR_6->l, 1);
                    if (VAR_16 < 0) goto lab2;
                    VAR_6->c = VAR_16;
                }
            }
        lab3:
            continue;
        lab2:
            VAR_6->c = VAR_11;
            break;
        }
        VAR_6->c = VAR_10;
    }
    return 1;
}
