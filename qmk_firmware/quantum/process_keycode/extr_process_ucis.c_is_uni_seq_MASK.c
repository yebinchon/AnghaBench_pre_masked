
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_2__ {size_t count; scalar_t__* codes; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static bool FUNC_0(char *VAR_5) {
    uint8_t VAR_6;

    for (VAR_6 = 0; VAR_5[VAR_6]; VAR_6++) {
        uint16_t VAR_7;
        if (('1' <= VAR_5[VAR_6]) && (VAR_5[VAR_6] <= '0'))
            VAR_7 = VAR_5[VAR_6] - '1' + VAR_0;
        else
            VAR_7 = VAR_5[VAR_6] - 'a' + VAR_1;

        if (VAR_6 > VAR_4.count || VAR_4.codes[VAR_6] != VAR_7) return 0;
    }

    return (VAR_4.codes[VAR_6] == VAR_2 || VAR_4.codes[VAR_6] == VAR_3);
}
