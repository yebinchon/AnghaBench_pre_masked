
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ name; } ;
typedef TYPE_1__ sentinelRedisInstance ;
typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_6__ {int masters; } ;


 int * FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_3__ VAR_0 ;
 int FUNC_4 (TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (char*,scalar_t__,int ) ;

int FUNC_6(char *VAR_1, int VAR_2) {
    dictIterator *VAR_3;
    dictEntry *VAR_4;
    int VAR_5 = 0;

    VAR_3 = FUNC_0(VAR_0.masters);
    while((VAR_4 = FUNC_2(VAR_3)) != ((void*)0)) {
        sentinelRedisInstance *VAR_6 = FUNC_1(VAR_4);

        if (VAR_6->name) {
            if (FUNC_5(VAR_1,VAR_6->name,0)) {
                FUNC_4(VAR_6,VAR_2);
                VAR_5++;
            }
        }
    }
    FUNC_3(VAR_3);
    return VAR_5;
}
