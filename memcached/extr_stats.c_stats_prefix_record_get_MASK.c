
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_hits; int num_gets; } ;
typedef TYPE_1__ PREFIX_STATS ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (char const*,size_t const) ;

void FUNC_3(const char *VAR_0, const size_t VAR_1, const bool VAR_2) {
    PREFIX_STATS *VAR_3;

    FUNC_0();
    VAR_3 = FUNC_2(VAR_0, VAR_1);
    if (((void*)0) != VAR_3) {
        VAR_3->num_gets++;
        if (VAR_2) {
            VAR_3->num_hits++;
        }
    }
    FUNC_1();
}
