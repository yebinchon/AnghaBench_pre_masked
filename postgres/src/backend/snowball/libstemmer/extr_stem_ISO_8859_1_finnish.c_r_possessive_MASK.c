
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {scalar_t__ c; scalar_t__* I; int lb; scalar_t__ ket; scalar_t__ bra; int l; char* p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct SN_env*,int,int ) ;
 int FUNC_1 (struct SN_env*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct SN_env*) ;
 int FUNC_3 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct SN_env * VAR_6) {
    int VAR_7;

    { int VAR_8;
        if (VAR_6->c < VAR_6->I[0]) return 0;
        VAR_8 = VAR_6->lb; VAR_6->lb = VAR_6->I[0];
        VAR_6->ket = VAR_6->c;
        VAR_7 = FUNC_1(VAR_6, VAR_3, 9);
        if (!(VAR_7)) { VAR_6->lb = VAR_8; return 0; }
        VAR_6->bra = VAR_6->c;
        VAR_6->lb = VAR_8;
    }
    switch (VAR_7) {
        case 1:
            { int VAR_9 = VAR_6->l - VAR_6->c; (void)VAR_9;
                if (VAR_6->c <= VAR_6->lb || VAR_6->p[VAR_6->c - 1] != 'k') goto lab0;
                VAR_6->c--;
                return 0;
            lab0:
                VAR_6->c = VAR_6->l - VAR_9;
            }
            { int VAR_10 = FUNC_2(VAR_6);
                if (VAR_10 < 0) return VAR_10;
            }
            break;
        case 2:
            { int VAR_11 = FUNC_2(VAR_6);
                if (VAR_11 < 0) return VAR_11;
            }
            VAR_6->ket = VAR_6->c;
            if (!(FUNC_0(VAR_6, 3, VAR_4))) return 0;
            VAR_6->bra = VAR_6->c;
            { int VAR_12 = FUNC_3(VAR_6, 3, VAR_5);
                if (VAR_12 < 0) return VAR_12;
            }
            break;
        case 3:
            { int VAR_13 = FUNC_2(VAR_6);
                if (VAR_13 < 0) return VAR_13;
            }
            break;
        case 4:
            if (VAR_6->c - 1 <= VAR_6->lb || VAR_6->p[VAR_6->c - 1] != 97) return 0;
            if (!(FUNC_1(VAR_6, VAR_0, 6))) return 0;
            { int VAR_14 = FUNC_2(VAR_6);
                if (VAR_14 < 0) return VAR_14;
            }
            break;
        case 5:
            if (VAR_6->c - 1 <= VAR_6->lb || VAR_6->p[VAR_6->c - 1] != 228) return 0;
            if (!(FUNC_1(VAR_6, VAR_1, 6))) return 0;
            { int VAR_15 = FUNC_2(VAR_6);
                if (VAR_15 < 0) return VAR_15;
            }
            break;
        case 6:
            if (VAR_6->c - 2 <= VAR_6->lb || VAR_6->p[VAR_6->c - 1] != 101) return 0;
            if (!(FUNC_1(VAR_6, VAR_2, 2))) return 0;
            { int VAR_16 = FUNC_2(VAR_6);
                if (VAR_16 < 0) return VAR_16;
            }
            break;
    }
    return 1;
}
