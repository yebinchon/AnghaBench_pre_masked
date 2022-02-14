
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN_env*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct SN_env * VAR_1) {
    { int VAR_2 = VAR_1->c;
        { int VAR_3 = 2;
            while(1) {
                int VAR_4 = VAR_1->c;
                {
                    int VAR_5 = FUNC_0(VAR_1, VAR_0, 97, 305, 1);
                    if (VAR_5 < 0) goto lab0;
                    VAR_1->c += VAR_5;
                }
                VAR_3--;
                continue;
            lab0:
                VAR_1->c = VAR_4;
                break;
            }
            if (VAR_3 > 0) return 0;
        }
        VAR_1->c = VAR_2;
    }
    return 1;
}
