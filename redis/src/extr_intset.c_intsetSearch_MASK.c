
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int length; } ;
typedef TYPE_1__ intset ;
typedef scalar_t__ int64_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static uint8_t FUNC_2(intset *VAR_0, int64_t VAR_1, uint32_t *VAR_2) {
    int VAR_3 = 0, VAR_4 = FUNC_1(VAR_0->length)-1, VAR_5 = -1;
    int64_t VAR_6 = -1;


    if (FUNC_1(VAR_0->length) == 0) {
        if (VAR_2) *VAR_2 = 0;
        return 0;
    } else {


        if (VAR_1 > FUNC_0(VAR_0,VAR_4)) {
            if (VAR_2) *VAR_2 = FUNC_1(VAR_0->length);
            return 0;
        } else if (VAR_1 < FUNC_0(VAR_0,0)) {
            if (VAR_2) *VAR_2 = 0;
            return 0;
        }
    }

    while(VAR_4 >= VAR_3) {
        VAR_5 = ((unsigned int)VAR_3 + (unsigned int)VAR_4) >> 1;
        VAR_6 = FUNC_0(VAR_0,VAR_5);
        if (VAR_1 > VAR_6) {
            VAR_3 = VAR_5+1;
        } else if (VAR_1 < VAR_6) {
            VAR_4 = VAR_5-1;
        } else {
            break;
        }
    }

    if (VAR_1 == VAR_6) {
        if (VAR_2) *VAR_2 = VAR_5;
        return 1;
    } else {
        if (VAR_2) *VAR_2 = VAR_3;
        return 0;
    }
}
