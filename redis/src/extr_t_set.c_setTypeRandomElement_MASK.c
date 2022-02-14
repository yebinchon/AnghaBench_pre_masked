
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * sds ;
struct TYPE_3__ {scalar_t__ encoding; int ptr; } ;
typedef TYPE_1__ robj ;
typedef int int64_t ;
typedef int dictEntry ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

int FUNC_4(robj *VAR_2, sds *VAR_3, int64_t *VAR_4) {
    if (VAR_2->encoding == VAR_0) {
        dictEntry *VAR_5 = FUNC_0(VAR_2->ptr);
        *VAR_3 = FUNC_1(VAR_5);
        *VAR_4 = -123456789;
    } else if (VAR_2->encoding == VAR_1) {
        *VAR_4 = FUNC_2(VAR_2->ptr);
        *VAR_3 = ((void*)0);
    } else {
        FUNC_3("Unknown set encoding");
    }
    return VAR_2->encoding;
}
