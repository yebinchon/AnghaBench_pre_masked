
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {struct TYPE_3__* h_next; } ;
typedef TYPE_1__ item ;


 int FUNC_0 (char const*,size_t const) ;
 TYPE_1__** FUNC_1 (char const*,size_t const,int const) ;
 int FUNC_2 (int) ;

void FUNC_3(const char *VAR_0, const size_t VAR_1, const uint32_t VAR_2) {
    item **VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);

    if (*VAR_3) {
        item *VAR_4;



        FUNC_0(VAR_0, VAR_1);
        VAR_4 = (*VAR_3)->h_next;
        (*VAR_3)->h_next = 0;
        *VAR_3 = VAR_4;
        return;
    }


    FUNC_2(*VAR_3 != 0);
}
