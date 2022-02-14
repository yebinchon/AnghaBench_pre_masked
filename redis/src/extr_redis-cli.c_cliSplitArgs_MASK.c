
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sds ;
struct TYPE_2__ {scalar_t__ eval_ldb; } ;


 TYPE_1__ VAR_0 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int * FUNC_2 (char*,int*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char*) ;

__attribute__((used)) static sds *FUNC_5(char *VAR_1, int *VAR_2) {
    if (VAR_0.eval_ldb && (FUNC_4(VAR_1,"eval ") == VAR_1 ||
                            FUNC_4(VAR_1,"e ") == VAR_1))
    {
        sds *VAR_3 = FUNC_0(sizeof(sds)*2);
        *VAR_2 = 2;
        int VAR_4 = FUNC_3(VAR_1);
        int VAR_5 = VAR_1[1] == ' ' ? 2 : 5;
        VAR_3[0] = FUNC_1(VAR_1,VAR_5-1);
        VAR_3[1] = FUNC_1(VAR_1+VAR_5,VAR_4-VAR_5);
        return VAR_3;
    } else {
        return FUNC_2(VAR_1,VAR_2);
    }
}
