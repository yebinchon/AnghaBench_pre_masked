
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
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct RARFilter *VAR_1, RARVirtualMachine *VAR_2)
{
    uint32_t VAR_3 = VAR_1->initialregisters[0];
    uint32_t VAR_4 = VAR_1->initialregisters[1];
    uint32_t VAR_5 = VAR_1->initialregisters[4];
    uint8_t *VAR_6, *VAR_7;
    uint32_t VAR_8, VAR_9;

    if (VAR_5 > VAR_0 / 2 || VAR_3 > VAR_5)
        return 0;

    VAR_6 = &VAR_2->memory[0];
    VAR_7 = &VAR_2->memory[VAR_5];
    for (VAR_8 = 0; VAR_8 < 3; VAR_8++) {
        uint8_t VAR_10 = 0;
        uint8_t *VAR_11 = VAR_7 + VAR_8 - VAR_3;
        for (VAR_9 = VAR_8; VAR_9 < VAR_5; VAR_9 += 3) {
            if (VAR_11 >= VAR_7) {
                uint32_t VAR_12 = FUNC_0(VAR_11[3] - VAR_11[0]);
                uint32_t VAR_13 = FUNC_0(VAR_10 - VAR_11[0]);
                uint32_t VAR_14 = FUNC_0(VAR_11[3] - VAR_11[0] + VAR_10 - VAR_11[0]);
                if (VAR_12 > VAR_13 || VAR_12 > VAR_14)
                    VAR_10 = VAR_13 <= VAR_14 ? VAR_11[3] : VAR_11[0];
            }
            VAR_10 -= *VAR_6++;
            VAR_7[VAR_9] = VAR_10;
            VAR_11 += 3;
        }
    }
    for (VAR_8 = VAR_4; VAR_8 < VAR_5 - 2; VAR_8 += 3) {
        VAR_7[VAR_8] += VAR_7[VAR_8 + 1];
        VAR_7[VAR_8 + 2] += VAR_7[VAR_8 + 1];
    }

    VAR_1->filteredblockaddress = VAR_5;
    VAR_1->filteredblocklength = VAR_5;

    return 1;
}
