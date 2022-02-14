
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sds ;
struct TYPE_3__ {scalar_t__ encoding; int ptr; } ;
typedef TYPE_1__ robj ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,long long,int*) ;
 scalar_t__ FUNC_4 (int ,long long*) ;
 int FUNC_5 (char*) ;

int FUNC_6(robj *VAR_4, sds VAR_5) {
    long long VAR_6;
    if (VAR_4->encoding == VAR_2) {
        if (FUNC_0(VAR_4->ptr,VAR_5) == VAR_1) {
            if (FUNC_2(VAR_4->ptr)) FUNC_1(VAR_4->ptr);
            return 1;
        }
    } else if (VAR_4->encoding == VAR_3) {
        if (FUNC_4(VAR_5,&VAR_6) == VAR_0) {
            int VAR_7;
            VAR_4->ptr = FUNC_3(VAR_4->ptr,VAR_6,&VAR_7);
            if (VAR_7) return 1;
        }
    } else {
        FUNC_5("Unknown set encoding");
    }
    return 0;
}
