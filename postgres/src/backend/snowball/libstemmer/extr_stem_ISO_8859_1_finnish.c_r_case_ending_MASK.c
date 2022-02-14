
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
 int FUNC_4 (struct SN_env*) ;

__attribute__((used)) static int FUNC_5(struct SN_env * VAR_4) {
    int VAR_5;

    { int VAR_6;
        if (VAR_4->c < VAR_4->I[0]) return 0;
        VAR_6 = VAR_4->lb; VAR_4->lb = VAR_4->I[0];
        VAR_4->ket = VAR_4->c;
        VAR_5 = FUNC_1(VAR_4, VAR_0, 30);
        if (!(VAR_5)) { VAR_4->lb = VAR_6; return 0; }
        VAR_4->bra = VAR_4->c;
        VAR_4->lb = VAR_6;
    }
    switch (VAR_5) {
        case 1:
            if (VAR_4->c <= VAR_4->lb || VAR_4->p[VAR_4->c - 1] != 'a') return 0;
            VAR_4->c--;
            break;
        case 2:
            if (VAR_4->c <= VAR_4->lb || VAR_4->p[VAR_4->c - 1] != 'e') return 0;
            VAR_4->c--;
            break;
        case 3:
            if (VAR_4->c <= VAR_4->lb || VAR_4->p[VAR_4->c - 1] != 'i') return 0;
            VAR_4->c--;
            break;
        case 4:
            if (VAR_4->c <= VAR_4->lb || VAR_4->p[VAR_4->c - 1] != 'o') return 0;
            VAR_4->c--;
            break;
        case 5:
            if (VAR_4->c <= VAR_4->lb || VAR_4->p[VAR_4->c - 1] != 0xE4) return 0;
            VAR_4->c--;
            break;
        case 6:
            if (VAR_4->c <= VAR_4->lb || VAR_4->p[VAR_4->c - 1] != 0xF6) return 0;
            VAR_4->c--;
            break;
        case 7:
            { int VAR_7 = VAR_4->l - VAR_4->c; (void)VAR_7;
                { int VAR_8 = VAR_4->l - VAR_4->c; (void)VAR_8;
                    { int VAR_9 = VAR_4->l - VAR_4->c; (void)VAR_9;
                        { int VAR_10 = FUNC_3(VAR_4);
                            if (VAR_10 == 0) goto lab2;
                            if (VAR_10 < 0) return VAR_10;
                        }
                        goto lab1;
                    lab2:
                        VAR_4->c = VAR_4->l - VAR_9;
                        if (!(FUNC_0(VAR_4, 2, VAR_3))) { VAR_4->c = VAR_4->l - VAR_7; goto lab0; }
                    }
                lab1:
                    VAR_4->c = VAR_4->l - VAR_8;
                    if (VAR_4->c <= VAR_4->lb) { VAR_4->c = VAR_4->l - VAR_7; goto lab0; }
                    VAR_4->c--;
                }
                VAR_4->bra = VAR_4->c;
            lab0:
                ;
            }
            break;
        case 8:
            if (FUNC_2(VAR_4, VAR_2, 97, 246, 0)) return 0;
            if (FUNC_2(VAR_4, VAR_1, 98, 122, 0)) return 0;
            break;
    }
    { int VAR_11 = FUNC_4(VAR_4);
        if (VAR_11 < 0) return VAR_11;
    }
    VAR_4->B[0] = 1;
    return 1;
}
