
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int value; } ;
typedef TYPE_1__ token_t ;
typedef int conn ;
struct TYPE_6__ {scalar_t__ verbose; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,unsigned long long) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int *,TYPE_1__*,size_t const) ;
 TYPE_2__ VAR_0 ;
 scalar_t__ FUNC_5 (size_t) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(conn *VAR_2, token_t *VAR_3, const size_t VAR_4) {
    uint32_t VAR_5;
    FUNC_0(VAR_2 != ((void*)0));

    FUNC_4(VAR_2, VAR_3, VAR_4);

    if (!FUNC_3(VAR_3[1].value, &VAR_5)) {
        FUNC_2(VAR_2, "ERROR");
    } else {
        if (VAR_5 < 8) {
            FUNC_2(VAR_2, "MEMLIMIT_TOO_SMALL cannot set maxbytes to less than 8m");
        } else {
            if (VAR_5 > 1000000000) {
                FUNC_2(VAR_2, "MEMLIMIT_ADJUST_FAILED input value is megabytes not bytes");
            } else if (FUNC_5((size_t) VAR_5 * 1024 * 1024)) {
                if (VAR_0.verbose > 0) {
                    FUNC_1(VAR_1, "maxbytes adjusted to %llum\n", (unsigned long long)VAR_5);
                }

                FUNC_2(VAR_2, "OK");
            } else {
                FUNC_2(VAR_2, "MEMLIMIT_ADJUST_FAILED out of bounds or unable to adjust");
            }
        }
    }
}
