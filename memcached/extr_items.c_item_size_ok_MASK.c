
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_2__ {scalar_t__ use_cas; } ;


 size_t FUNC_0 (size_t const,int const,int const,char*,int *) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_1 (size_t) ;

bool FUNC_2(const size_t VAR_1, const int VAR_2, const int VAR_3) {
    char VAR_4[40];
    uint8_t VAR_5;
    if (VAR_3 < 2)
        return 0;

    size_t VAR_6 = FUNC_0(VAR_1 + 1, VAR_2, VAR_3,
                                     VAR_4, &VAR_5);
    if (VAR_0.use_cas) {
        VAR_6 += sizeof(uint64_t);
    }

    return FUNC_1(VAR_6) != 0;
}
