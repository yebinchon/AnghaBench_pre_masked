
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sds ;
struct TYPE_4__ {char* ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_5__ {int minstring; int maxstring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 TYPE_3__ VAR_2 ;

int FUNC_2(robj *VAR_3, sds *VAR_4, int *VAR_5) {
    char *VAR_6 = VAR_3->ptr;

    switch(VAR_6[0]) {
    case '+':
        if (VAR_6[1] != '\0') return VAR_0;
        *VAR_5 = 1;
        *VAR_4 = VAR_2.maxstring;
        return VAR_1;
    case '-':
        if (VAR_6[1] != '\0') return VAR_0;
        *VAR_5 = 1;
        *VAR_4 = VAR_2.minstring;
        return VAR_1;
    case '(':
        *VAR_5 = 1;
        *VAR_4 = FUNC_1(VAR_6+1,FUNC_0(VAR_6)-1);
        return VAR_1;
    case '[':
        *VAR_5 = 0;
        *VAR_4 = FUNC_1(VAR_6+1,FUNC_0(VAR_6)-1);
        return VAR_1;
    default:
        return VAR_0;
    }
}
