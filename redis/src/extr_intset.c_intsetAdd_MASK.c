
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_11__ {scalar_t__ encoding; scalar_t__ length; } ;
typedef TYPE_1__ intset ;
typedef int int64_t ;


 int FUNC_0 (TYPE_1__*,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,scalar_t__) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ,scalar_t__*) ;
 TYPE_1__* FUNC_6 (TYPE_1__*,int ) ;

intset *FUNC_7(intset *VAR_0, int64_t VAR_1, uint8_t *VAR_2) {
    uint8_t VAR_3 = FUNC_1(VAR_1);
    uint32_t VAR_4;
    if (VAR_2) *VAR_2 = 1;




    if (VAR_3 > FUNC_2(VAR_0->encoding)) {

        return FUNC_6(VAR_0,VAR_1);
    } else {



        if (FUNC_5(VAR_0,VAR_1,&VAR_4)) {
            if (VAR_2) *VAR_2 = 0;
            return VAR_0;
        }

        VAR_0 = FUNC_4(VAR_0,FUNC_2(VAR_0->length)+1);
        if (VAR_4 < FUNC_2(VAR_0->length)) FUNC_3(VAR_0,VAR_4,VAR_4+1);
    }

    FUNC_0(VAR_0,VAR_4,VAR_1);
    VAR_0->length = FUNC_2(FUNC_2(VAR_0->length)+1);
    return VAR_0;
}
