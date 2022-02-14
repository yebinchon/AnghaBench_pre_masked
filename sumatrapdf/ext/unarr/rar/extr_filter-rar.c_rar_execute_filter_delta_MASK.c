
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct RARFilter {int* initialregisters; int filteredblockaddress; int filteredblocklength; } ;
struct TYPE_3__ {scalar_t__* memory; } ;
typedef TYPE_1__ RARVirtualMachine ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct RARFilter *VAR_1, RARVirtualMachine *VAR_2)
{
    uint32_t VAR_3 = VAR_1->initialregisters[4];
    uint32_t VAR_4 = VAR_1->initialregisters[0];
    uint8_t *VAR_5, *VAR_6;
    uint32_t VAR_7, VAR_8;

    if (VAR_3 > VAR_0 / 2)
        return 0;

    VAR_5 = &VAR_2->memory[0];
    VAR_6 = &VAR_2->memory[VAR_3];
    for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
        uint8_t VAR_9 = 0;
        for (VAR_8 = VAR_7; VAR_8 < VAR_3; VAR_8 += VAR_4)
            VAR_9 = VAR_6[VAR_8] = VAR_9 - *VAR_5++;
    }

    VAR_1->filteredblockaddress = VAR_3;
    VAR_1->filteredblocklength = VAR_3;

    return 1;
}
