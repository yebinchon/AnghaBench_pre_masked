
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ hash; int value; int * collected9; scalar_t__ name; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

void FUNC_3() {
    int VAR_1;
    for(VAR_1 = 0; VAR_0[VAR_1].name; VAR_1++) {
        uint32_t VAR_2 = FUNC_0(VAR_0[VAR_1].name);

        int VAR_3;
        for(VAR_3 = 0; VAR_0[VAR_3].name; VAR_3++) {
            if(VAR_2 == VAR_0[VAR_3].hash && !FUNC_2(VAR_0[VAR_1].name, VAR_0[VAR_3].name)) {
                *VAR_0[VAR_3].collected9 = FUNC_1(VAR_0[VAR_1].value);
                break;
            }
        }
    }
}
