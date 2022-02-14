
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ encoding; int ii; TYPE_1__* subject; int di; } ;
typedef TYPE_2__ setTypeIterator ;
typedef int * sds ;
typedef int int64_t ;
typedef int dictEntry ;
struct TYPE_4__ {int ptr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (char*) ;

int FUNC_4(setTypeIterator *VAR_2, sds *VAR_3, int64_t *VAR_4) {
    if (VAR_2->encoding == VAR_0) {
        dictEntry *VAR_5 = FUNC_1(VAR_2->di);
        if (VAR_5 == ((void*)0)) return -1;
        *VAR_3 = FUNC_0(VAR_5);
        *VAR_4 = -123456789;
    } else if (VAR_2->encoding == VAR_1) {
        if (!FUNC_2(VAR_2->subject->ptr,VAR_2->ii++,VAR_4))
            return -1;
        *VAR_3 = ((void*)0);
    } else {
        FUNC_3("Wrong set encoding in setTypeNext");
    }
    return VAR_2->encoding;
}
