
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ptr; } ;
typedef TYPE_1__ robj ;
typedef int client ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,char*) ;

double FUNC_2(client *VAR_0, robj *VAR_1) {
    char *VAR_2 = VAR_1->ptr;

    if (!FUNC_1(VAR_2, "m")) {
        return 1;
    } else if (!FUNC_1(VAR_2, "km")) {
        return 1000;
    } else if (!FUNC_1(VAR_2, "ft")) {
        return 0.3048;
    } else if (!FUNC_1(VAR_2, "mi")) {
        return 1609.34;
    } else {
        FUNC_0(VAR_0,
            "unsupported unit provided. please use m, km, ft, mi");
        return -1;
    }
}
