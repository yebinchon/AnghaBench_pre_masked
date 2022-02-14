
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int l; int c; int ket; int bra; int lb; char* p; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct SN_env*,int ,int,int,int ) ;
 int FUNC_1 (struct SN_env*) ;
 int FUNC_2 (struct SN_env*) ;

__attribute__((used)) static int FUNC_3(struct SN_env * VAR_2) {
    { int VAR_3 = VAR_2->l - VAR_2->c; (void)VAR_3;
        VAR_2->ket = VAR_2->c;
        if (FUNC_0(VAR_2, VAR_0, 97, 242, 0)) { VAR_2->c = VAR_2->l - VAR_3; goto lab0; }
        VAR_2->bra = VAR_2->c;
        { int VAR_4 = FUNC_1(VAR_2);
            if (VAR_4 == 0) { VAR_2->c = VAR_2->l - VAR_3; goto lab0; }
            if (VAR_4 < 0) return VAR_4;
        }
        { int VAR_5 = FUNC_2(VAR_2);
            if (VAR_5 < 0) return VAR_5;
        }
        VAR_2->ket = VAR_2->c;
        if (VAR_2->c <= VAR_2->lb || VAR_2->p[VAR_2->c - 1] != 'i') { VAR_2->c = VAR_2->l - VAR_3; goto lab0; }
        VAR_2->c--;
        VAR_2->bra = VAR_2->c;
        { int VAR_6 = FUNC_1(VAR_2);
            if (VAR_6 == 0) { VAR_2->c = VAR_2->l - VAR_3; goto lab0; }
            if (VAR_6 < 0) return VAR_6;
        }
        { int VAR_7 = FUNC_2(VAR_2);
            if (VAR_7 < 0) return VAR_7;
        }
    lab0:
        ;
    }
    { int VAR_8 = VAR_2->l - VAR_2->c; (void)VAR_8;
        VAR_2->ket = VAR_2->c;
        if (VAR_2->c <= VAR_2->lb || VAR_2->p[VAR_2->c - 1] != 'h') { VAR_2->c = VAR_2->l - VAR_8; goto lab1; }
        VAR_2->c--;
        VAR_2->bra = VAR_2->c;
        if (FUNC_0(VAR_2, VAR_1, 99, 103, 0)) { VAR_2->c = VAR_2->l - VAR_8; goto lab1; }
        { int VAR_9 = FUNC_1(VAR_2);
            if (VAR_9 == 0) { VAR_2->c = VAR_2->l - VAR_8; goto lab1; }
            if (VAR_9 < 0) return VAR_9;
        }
        { int VAR_10 = FUNC_2(VAR_2);
            if (VAR_10 < 0) return VAR_10;
        }
    lab1:
        ;
    }
    return 1;
}
