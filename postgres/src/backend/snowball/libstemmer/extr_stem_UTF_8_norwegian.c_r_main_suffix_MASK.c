
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; int* I; int lb; int ket; int* p; int bra; int l; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct SN_env*,int ,int,int,int ) ;
 int FUNC_2 (struct SN_env*,int ,int,int,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct SN_env*) ;
 int FUNC_4 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct SN_env * VAR_4) {
    int VAR_5;

    { int VAR_6;
        if (VAR_4->c < VAR_4->I[0]) return 0;
        VAR_6 = VAR_4->lb; VAR_4->lb = VAR_4->I[0];
        VAR_4->ket = VAR_4->c;
        if (VAR_4->c <= VAR_4->lb || VAR_4->p[VAR_4->c - 1] >> 5 != 3 || !((1851426 >> (VAR_4->p[VAR_4->c - 1] & 0x1f)) & 1)) { VAR_4->lb = VAR_6; return 0; }
        VAR_5 = FUNC_0(VAR_4, VAR_0, 29);
        if (!(VAR_5)) { VAR_4->lb = VAR_6; return 0; }
        VAR_4->bra = VAR_4->c;
        VAR_4->lb = VAR_6;
    }
    switch (VAR_5) {
        case 1:
            { int VAR_7 = FUNC_3(VAR_4);
                if (VAR_7 < 0) return VAR_7;
            }
            break;
        case 2:
            { int VAR_8 = VAR_4->l - VAR_4->c; (void)VAR_8;
                if (FUNC_1(VAR_4, VAR_1, 98, 122, 0)) goto lab1;
                goto lab0;
            lab1:
                VAR_4->c = VAR_4->l - VAR_8;
                if (VAR_4->c <= VAR_4->lb || VAR_4->p[VAR_4->c - 1] != 'k') return 0;
                VAR_4->c--;
                if (FUNC_2(VAR_4, VAR_2, 97, 248, 0)) return 0;
            }
        lab0:
            { int VAR_9 = FUNC_3(VAR_4);
                if (VAR_9 < 0) return VAR_9;
            }
            break;
        case 3:
            { int VAR_10 = FUNC_4(VAR_4, 2, VAR_3);
                if (VAR_10 < 0) return VAR_10;
            }
            break;
    }
    return 1;
}
