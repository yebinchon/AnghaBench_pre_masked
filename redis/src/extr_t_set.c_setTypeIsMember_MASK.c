
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sds ;
struct TYPE_3__ {scalar_t__ encoding; scalar_t__ ptr; } ;
typedef TYPE_1__ robj ;
typedef int intset ;
typedef int dict ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,long long) ;
 scalar_t__ FUNC_2 (int ,long long*) ;
 int FUNC_3 (char*) ;

int FUNC_4(robj *VAR_3, sds VAR_4) {
    long long VAR_5;
    if (VAR_3->encoding == VAR_1) {
        return FUNC_0((dict*)VAR_3->ptr,VAR_4) != ((void*)0);
    } else if (VAR_3->encoding == VAR_2) {
        if (FUNC_2(VAR_4,&VAR_5) == VAR_0) {
            return FUNC_1((intset*)VAR_3->ptr,VAR_5);
        }
    } else {
        FUNC_3("Unknown set encoding");
    }
    return 0;
}
