
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {int* registers; } ;
typedef TYPE_1__ RARVirtualMachine ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static uint32_t FUNC_5(RARVirtualMachine *VAR_1, uint8_t VAR_2, uint32_t VAR_3, bool VAR_4)
{
    if (FUNC_1(0) <= VAR_2 && VAR_2 <= FUNC_1(7)) {
        uint32_t VAR_5 = VAR_1->registers[VAR_2 % 8];
        if (VAR_4)
            VAR_5 = VAR_5 & 0xFF;
        return VAR_5;
    }
    if (FUNC_2(0) <= VAR_2 && VAR_2 <= FUNC_2(7)) {
        if (VAR_4)
            return FUNC_4(VAR_1, VAR_1->registers[VAR_2 % 8]);
        return FUNC_3(VAR_1, VAR_1->registers[VAR_2 % 8]);
    }
    if (FUNC_0(0) <= VAR_2 && VAR_2 <= FUNC_0(7)) {
        if (VAR_4)
            return FUNC_4(VAR_1, VAR_3 + VAR_1->registers[VAR_2 % 8]);
        return FUNC_3(VAR_1, VAR_3 + VAR_1->registers[VAR_2 % 8]);
    }
    if (VAR_2 == VAR_0) {
        if (VAR_4)
            return FUNC_4(VAR_1, VAR_3);
        return FUNC_3(VAR_1, VAR_3);
    }

    return VAR_3;
}
