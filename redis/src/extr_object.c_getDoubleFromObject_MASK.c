
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; scalar_t__ encoding; scalar_t__ ptr; } ;
typedef TYPE_1__ robj ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 double VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (double) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*) ;
 size_t FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,TYPE_1__ const*,int) ;
 int FUNC_5 (char*) ;
 double FUNC_6 (scalar_t__,char**) ;

int FUNC_7(const robj *VAR_7, double *VAR_8) {
    double VAR_9;
    char *VAR_10;

    if (VAR_7 == ((void*)0)) {
        VAR_9 = 0;
    } else {
        FUNC_4(((void*)0),VAR_7,VAR_7->type == VAR_5);
        if (FUNC_2(VAR_7)) {
            VAR_6 = 0;
            VAR_9 = FUNC_6(VAR_7->ptr, &VAR_10);
            if (FUNC_3(VAR_7->ptr) == 0 ||
                FUNC_1(((const char*)VAR_7->ptr)[0]) ||
                (size_t)(VAR_10-(char*)VAR_7->ptr) != FUNC_3(VAR_7->ptr) ||
                (VAR_6 == VAR_2 &&
                    (VAR_9 == VAR_3 || VAR_9 == -VAR_3 || VAR_9 == 0)) ||
                FUNC_0(VAR_9))
                return VAR_0;
        } else if (VAR_7->encoding == VAR_4) {
            VAR_9 = (long)VAR_7->ptr;
        } else {
            FUNC_5("Unknown string encoding");
        }
    }
    *VAR_8 = VAR_9;
    return VAR_1;
}
