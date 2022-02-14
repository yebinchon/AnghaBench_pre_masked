
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_8__ {int encoding; int length; } ;
typedef TYPE_1__ intset ;
typedef int int64_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,int*) ;

intset *FUNC_5(intset *VAR_0, int64_t VAR_1, int *VAR_2) {
    uint8_t VAR_3 = FUNC_0(VAR_1);
    uint32_t VAR_4;
    if (VAR_2) *VAR_2 = 0;

    if (VAR_3 <= FUNC_1(VAR_0->encoding) && FUNC_4(VAR_0,VAR_1,&VAR_4)) {
        uint32_t VAR_5 = FUNC_1(VAR_0->length);


        if (VAR_2) *VAR_2 = 1;


        if (VAR_4 < (VAR_5-1)) FUNC_2(VAR_0,VAR_4+1,VAR_4);
        VAR_0 = FUNC_3(VAR_0,VAR_5-1);
        VAR_0->length = FUNC_1(VAR_5-1);
    }
    return VAR_0;
}
