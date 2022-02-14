
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {scalar_t__ c; scalar_t__* I; int lb; scalar_t__ ket; scalar_t__ bra; char* p; int l; int* B; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int,int ) ;
 int FUNC_1 (struct SN_env*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct SN_env*,int ,int,int,int ) ;
 int FUNC_3 (struct SN_env*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*,int,scalar_t__,int ,int) ;
 int FUNC_5 (struct SN_env*) ;

__attribute__((used)) static int FUNC_6(struct SN_env * VAR_6) {
    int VAR_7;

    { int VAR_8;
        if (VAR_6->c < VAR_6->I[0]) return 0;
        VAR_8 = VAR_6->lb; VAR_6->lb = VAR_6->I[0];
        VAR_6->ket = VAR_6->c;
        VAR_7 = FUNC_1(VAR_6, VAR_0, 30);
        if (!(VAR_7)) { VAR_6->lb = VAR_8; return 0; }
        VAR_6->bra = VAR_6->c;
        VAR_6->lb = VAR_8;
    }
    switch (VAR_7) {
        case 1:
            if (VAR_6->c <= VAR_6->lb || VAR_6->p[VAR_6->c - 1] != 'a') return 0;
            VAR_6->c--;
            break;
        case 2:
            if (VAR_6->c <= VAR_6->lb || VAR_6->p[VAR_6->c - 1] != 'e') return 0;
            VAR_6->c--;
            break;
        case 3:
            if (VAR_6->c <= VAR_6->lb || VAR_6->p[VAR_6->c - 1] != 'i') return 0;
            VAR_6->c--;
            break;
        case 4:
            if (VAR_6->c <= VAR_6->lb || VAR_6->p[VAR_6->c - 1] != 'o') return 0;
            VAR_6->c--;
            break;
        case 5:
            if (!(FUNC_0(VAR_6, 2, VAR_3))) return 0;
            break;
        case 6:
            if (!(FUNC_0(VAR_6, 2, VAR_4))) return 0;
            break;
        case 7:
            { int VAR_9 = VAR_6->l - VAR_6->c; (void)VAR_9;
                { int VAR_10 = VAR_6->l - VAR_6->c; (void)VAR_10;
                    { int VAR_11 = VAR_6->l - VAR_6->c; (void)VAR_11;
                        { int VAR_12 = FUNC_3(VAR_6);
                            if (VAR_12 == 0) goto lab2;
                            if (VAR_12 < 0) return VAR_12;
                        }
                        goto lab1;
                    lab2:
                        VAR_6->c = VAR_6->l - VAR_11;
                        if (!(FUNC_0(VAR_6, 2, VAR_5))) { VAR_6->c = VAR_6->l - VAR_9; goto lab0; }
                    }
                lab1:
                    VAR_6->c = VAR_6->l - VAR_10;
                    { int VAR_13 = FUNC_4(VAR_6->p, VAR_6->c, VAR_6->lb, 0, -1);
                        if (VAR_13 < 0) { VAR_6->c = VAR_6->l - VAR_9; goto lab0; }
                        VAR_6->c = VAR_13;
                    }
                }
                VAR_6->bra = VAR_6->c;
            lab0:
                ;
            }
            break;
        case 8:
            if (FUNC_2(VAR_6, VAR_2, 97, 246, 0)) return 0;
            if (FUNC_2(VAR_6, VAR_1, 98, 122, 0)) return 0;
            break;
    }
    { int VAR_14 = FUNC_5(VAR_6);
        if (VAR_14 < 0) return VAR_14;
    }
    VAR_6->B[0] = 1;
    return 1;
}
