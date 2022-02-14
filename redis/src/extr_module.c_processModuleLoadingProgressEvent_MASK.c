
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int loading_total_bytes; int hz; } ;
struct TYPE_4__ {int member_1; int member_2; int member_0; } ;
typedef TYPE_1__ RedisModuleFlushInfoV1 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,TYPE_1__*) ;
 TYPE_2__ VAR_4 ;
 long long FUNC_1 () ;

void FUNC_2(int VAR_5) {
    long long VAR_6 = FUNC_1();
    static long long VAR_7 = 0;
    if (VAR_6 >= VAR_7) {

        int VAR_8 = -1;
        if (VAR_4.loading_total_bytes)
            VAR_8 = (VAR_4.loading_total_bytes<<10) / VAR_4.loading_total_bytes;
        RedisModuleFlushInfoV1 VAR_9 = {VAR_1,
                                     VAR_4.hz,
                                     VAR_8};
        FUNC_0(VAR_0,
                              VAR_5?
                                VAR_2:
                                VAR_3,
                              &VAR_9);

        VAR_7 = VAR_6 + 1000000 / VAR_4.hz;
    }
}
