
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct RARFilter {int* initialregisters; int filteredblocklength; scalar_t__ filteredblockaddress; } ;
typedef scalar_t__ int32_t ;
struct TYPE_5__ {int* memory; } ;
typedef TYPE_1__ RARVirtualMachine ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int,int) ;

__attribute__((used)) static bool FUNC_2(struct RARFilter *VAR_1, RARVirtualMachine *VAR_2, size_t VAR_3, bool VAR_4)
{
    uint32_t VAR_5 = VAR_1->initialregisters[4];
    uint32_t VAR_6 = 0x1000000;
    uint32_t VAR_7;

    if (VAR_5 > VAR_0 || VAR_5 < 4)
        return 0;

    for (VAR_7 = 0; VAR_7 <= VAR_5 - 5; VAR_7++) {
        if (VAR_2->memory[VAR_7] == 0xE8 || (VAR_4 && VAR_2->memory[VAR_7] == 0xE9)) {
            uint32_t VAR_8 = (uint32_t)VAR_3 + VAR_7 + 1;
            int32_t VAR_9 = (int32_t)FUNC_0(VAR_2, VAR_7 + 1);
            if (VAR_9 < 0 && VAR_8 >= (uint32_t)-VAR_9)
                FUNC_1(VAR_2, VAR_7 + 1, VAR_9 + VAR_6);
            else if (VAR_9 >= 0 && (uint32_t)VAR_9 < VAR_6)
                FUNC_1(VAR_2, VAR_7 + 1, VAR_9 - VAR_8);
            VAR_7 += 4;
        }
    }

    VAR_1->filteredblockaddress = 0;
    VAR_1->filteredblocklength = VAR_5;

    return 1;
}
