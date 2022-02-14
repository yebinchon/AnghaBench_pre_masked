
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; int* I; int lb; int ket; char* p; int bra; int l; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int,int ) ;
 int FUNC_1 (struct SN_env*,int ,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct SN_env*,int ,int,int,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct SN_env*) ;

__attribute__((used)) static int FUNC_4(struct SN_env * VAR_3) {
    int VAR_4;

    { int VAR_5;
        if (VAR_3->c < VAR_3->I[0]) return 0;
        VAR_5 = VAR_3->lb; VAR_3->lb = VAR_3->I[0];
        VAR_3->ket = VAR_3->c;
        if (VAR_3->c <= VAR_3->lb || VAR_3->p[VAR_3->c - 1] != 't') { VAR_3->lb = VAR_5; return 0; }
        VAR_3->c--;
        VAR_3->bra = VAR_3->c;
        { int VAR_6 = VAR_3->l - VAR_3->c;
            if (FUNC_2(VAR_3, VAR_1, 97, 246, 0)) { VAR_3->lb = VAR_5; return 0; }
            VAR_3->c = VAR_3->l - VAR_6;
        }
        { int VAR_7 = FUNC_3(VAR_3);
            if (VAR_7 < 0) return VAR_7;
        }
        VAR_3->lb = VAR_5;
    }

    { int VAR_8;
        if (VAR_3->c < VAR_3->I[1]) return 0;
        VAR_8 = VAR_3->lb; VAR_3->lb = VAR_3->I[1];
        VAR_3->ket = VAR_3->c;
        if (VAR_3->c - 2 <= VAR_3->lb || VAR_3->p[VAR_3->c - 1] != 97) { VAR_3->lb = VAR_8; return 0; }
        VAR_4 = FUNC_1(VAR_3, VAR_0, 2);
        if (!(VAR_4)) { VAR_3->lb = VAR_8; return 0; }
        VAR_3->bra = VAR_3->c;
        VAR_3->lb = VAR_8;
    }
    switch (VAR_4) {
        case 1:
            { int VAR_9 = VAR_3->l - VAR_3->c; (void)VAR_9;
                if (!(FUNC_0(VAR_3, 2, VAR_2))) goto lab0;
                return 0;
            lab0:
                VAR_3->c = VAR_3->l - VAR_9;
            }
            break;
    }
    { int VAR_10 = FUNC_3(VAR_3);
        if (VAR_10 < 0) return VAR_10;
    }
    return 1;
}
