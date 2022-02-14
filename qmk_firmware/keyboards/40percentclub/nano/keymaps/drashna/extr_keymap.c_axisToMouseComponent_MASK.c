
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef float int8_t ;
typedef int int16_t ;
struct TYPE_2__ {int mods; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 float FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 TYPE_1__* VAR_1 ;
 float VAR_2 ;
 float VAR_3 ;
 float VAR_4 ;

int8_t FUNC_3(uint8_t VAR_5, int16_t VAR_6, uint8_t VAR_7, int8_t VAR_8) {
    int VAR_9 = FUNC_2(VAR_5, VAR_6);
    if (VAR_9 == 0) {
        return 0;
    } else {
        float VAR_10 = (float)VAR_9 / 100;
        if (VAR_1->mods & FUNC_0(VAR_0)) {
            return VAR_10 * VAR_3 * VAR_8 * (FUNC_1(VAR_9) / VAR_4);
        } else {
            return VAR_10 * VAR_2 * VAR_8 * (FUNC_1(VAR_9) / VAR_4);
        }
    }
}
