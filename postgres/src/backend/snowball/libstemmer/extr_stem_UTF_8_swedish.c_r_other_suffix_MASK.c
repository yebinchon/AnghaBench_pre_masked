
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; int* I; int lb; int ket; int* p; int bra; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct SN_env*) ;
 int FUNC_2 (struct SN_env*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct SN_env * VAR_3) {
    int VAR_4;

    { int VAR_5;
        if (VAR_3->c < VAR_3->I[0]) return 0;
        VAR_5 = VAR_3->lb; VAR_3->lb = VAR_3->I[0];
        VAR_3->ket = VAR_3->c;
        if (VAR_3->c - 1 <= VAR_3->lb || VAR_3->p[VAR_3->c - 1] >> 5 != 3 || !((1572992 >> (VAR_3->p[VAR_3->c - 1] & 0x1f)) & 1)) { VAR_3->lb = VAR_5; return 0; }
        VAR_4 = FUNC_0(VAR_3, VAR_0, 5);
        if (!(VAR_4)) { VAR_3->lb = VAR_5; return 0; }
        VAR_3->bra = VAR_3->c;
        switch (VAR_4) {
            case 1:
                { int VAR_6 = FUNC_1(VAR_3);
                    if (VAR_6 < 0) return VAR_6;
                }
                break;
            case 2:
                { int VAR_7 = FUNC_2(VAR_3, 4, VAR_1);
                    if (VAR_7 < 0) return VAR_7;
                }
                break;
            case 3:
                { int VAR_8 = FUNC_2(VAR_3, 4, VAR_2);
                    if (VAR_8 < 0) return VAR_8;
                }
                break;
        }
        VAR_3->lb = VAR_5;
    }
    return 1;
}
