
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int count; int* codes; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((weak)) void FUNC_3(void) {
    for (uint8_t VAR_2 = 0; VAR_2 < VAR_1.count - 1; VAR_2++) {
        uint8_t VAR_3 = VAR_1.codes[VAR_2];
        FUNC_0(VAR_3);
        FUNC_1(VAR_3);
        FUNC_2(VAR_0);
    }
}
