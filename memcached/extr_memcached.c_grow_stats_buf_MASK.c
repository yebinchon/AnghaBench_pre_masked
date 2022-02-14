
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t size; size_t offset; char* buffer; } ;
struct TYPE_6__ {TYPE_1__ stats; } ;
typedef TYPE_2__ conn ;
struct TYPE_7__ {int malloc_fails; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 char* FUNC_3 (char*,size_t) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static bool FUNC_4(conn *VAR_1, size_t VAR_2) {
    size_t VAR_3 = VAR_1->stats.size;
    size_t VAR_4 = VAR_3 - VAR_1->stats.offset;
    bool VAR_5 = 1;


    if (VAR_1->stats.buffer == ((void*)0)) {
        VAR_3 = 1024;
        VAR_4 = VAR_1->stats.size = VAR_1->stats.offset = 0;
    }

    while (VAR_2 > VAR_4) {
        FUNC_2(VAR_3 > 0);
        VAR_3 = VAR_3 << 1;
        VAR_4 = VAR_3 - VAR_1->stats.offset;
    }

    if (VAR_3 != VAR_1->stats.size) {
        char *VAR_6 = FUNC_3(VAR_1->stats.buffer, VAR_3);
        if (VAR_6) {
            VAR_1->stats.buffer = VAR_6;
            VAR_1->stats.size = VAR_3;
        } else {
            FUNC_0();
            VAR_0.malloc_fails++;
            FUNC_1();
            VAR_5 = 0;
        }
    }

    return VAR_5;
}
