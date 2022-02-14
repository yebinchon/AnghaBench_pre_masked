
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
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,TYPE_1__*,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,long long*) ;

int FUNC_5(robj *VAR_4, long long *VAR_5) {
    long long VAR_6;

    if (VAR_4 == ((void*)0)) {
        VAR_6 = 0;
    } else {
        FUNC_2(((void*)0),VAR_4,VAR_4->type == VAR_3);
        if (FUNC_0(VAR_4)) {
            if (FUNC_4(VAR_4->ptr,FUNC_1(VAR_4->ptr),&VAR_6) == 0) return VAR_0;
        } else if (VAR_4->encoding == VAR_2) {
            VAR_6 = (long)VAR_4->ptr;
        } else {
            FUNC_3("Unknown string encoding");
        }
    }
    if (VAR_5) *VAR_5 = VAR_6;
    return VAR_1;
}
