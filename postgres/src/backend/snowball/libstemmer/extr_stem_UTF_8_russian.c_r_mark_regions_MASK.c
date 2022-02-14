
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int* I; int l; int c; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int,int,int) ;
 int FUNC_1 (struct SN_env*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct SN_env * VAR_1) {
    VAR_1->I[0] = VAR_1->l;
    VAR_1->I[1] = VAR_1->l;
    { int VAR_2 = VAR_1->c;
        {
            int VAR_3 = FUNC_1(VAR_1, VAR_0, 1072, 1103, 1);
            if (VAR_3 < 0) goto lab0;
            VAR_1->c += VAR_3;
        }
        VAR_1->I[0] = VAR_1->c;
        {
            int VAR_4 = FUNC_0(VAR_1, VAR_0, 1072, 1103, 1);
            if (VAR_4 < 0) goto lab0;
            VAR_1->c += VAR_4;
        }
        {
            int VAR_5 = FUNC_1(VAR_1, VAR_0, 1072, 1103, 1);
            if (VAR_5 < 0) goto lab0;
            VAR_1->c += VAR_5;
        }
        {
            int VAR_6 = FUNC_0(VAR_1, VAR_0, 1072, 1103, 1);
            if (VAR_6 < 0) goto lab0;
            VAR_1->c += VAR_6;
        }
        VAR_1->I[1] = VAR_1->c;
    lab0:
        VAR_1->c = VAR_2;
    }
    return 1;
}
