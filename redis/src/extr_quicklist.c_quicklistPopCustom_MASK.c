
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zl; } ;
typedef TYPE_1__ quicklistNode ;
struct TYPE_7__ {scalar_t__ count; TYPE_1__* tail; TYPE_1__* head; } ;
typedef TYPE_2__ quicklist ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*,unsigned char**) ;
 scalar_t__ FUNC_1 (unsigned char*,unsigned char**,unsigned int*,long long*) ;
 unsigned char* FUNC_2 (int ,int) ;

int FUNC_3(quicklist *VAR_2, int VAR_3, unsigned char **VAR_4,
                       unsigned int *VAR_5, long long *VAR_6,
                       void *(*VAR_7)(unsigned char *VAR_8, unsigned int VAR_9)) {
    unsigned char *VAR_10;
    unsigned char *VAR_11;
    unsigned int VAR_12;
    long long VAR_13;
    int VAR_14 = (VAR_3 == VAR_0) ? 0 : -1;

    if (VAR_2->count == 0)
        return 0;

    if (VAR_4)
        *VAR_4 = ((void*)0);
    if (VAR_5)
        *VAR_5 = 0;
    if (VAR_6)
        *VAR_6 = -123456789;

    quicklistNode *VAR_15;
    if (VAR_3 == VAR_0 && VAR_2->head) {
        VAR_15 = VAR_2->head;
    } else if (VAR_3 == VAR_1 && VAR_2->tail) {
        VAR_15 = VAR_2->tail;
    } else {
        return 0;
    }

    VAR_10 = FUNC_2(VAR_15->zl, VAR_14);
    if (FUNC_1(VAR_10, &VAR_11, &VAR_12, &VAR_13)) {
        if (VAR_11) {
            if (VAR_4)
                *VAR_4 = VAR_7(VAR_11, VAR_12);
            if (VAR_5)
                *VAR_5 = VAR_12;
        } else {
            if (VAR_4)
                *VAR_4 = ((void*)0);
            if (VAR_6)
                *VAR_6 = VAR_13;
        }
        FUNC_0(VAR_2, VAR_15, &VAR_10);
        return 1;
    }
    return 0;
}
