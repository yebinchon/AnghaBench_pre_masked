
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ contents; int encoding; int length; } ;
typedef TYPE_1__ intset ;
typedef int int64_t ;
typedef int int32_t ;
typedef int int16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (void*,void*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(intset *VAR_2, uint32_t VAR_3, uint32_t VAR_4) {
    void *VAR_5, *VAR_6;
    uint32_t VAR_7 = FUNC_0(VAR_2->length)-VAR_3;
    uint32_t VAR_8 = FUNC_0(VAR_2->encoding);

    if (VAR_8 == VAR_1) {
        VAR_5 = (int64_t*)VAR_2->contents+VAR_3;
        VAR_6 = (int64_t*)VAR_2->contents+VAR_4;
        VAR_7 *= sizeof(int64_t);
    } else if (VAR_8 == VAR_0) {
        VAR_5 = (int32_t*)VAR_2->contents+VAR_3;
        VAR_6 = (int32_t*)VAR_2->contents+VAR_4;
        VAR_7 *= sizeof(int32_t);
    } else {
        VAR_5 = (int16_t*)VAR_2->contents+VAR_3;
        VAR_6 = (int16_t*)VAR_2->contents+VAR_4;
        VAR_7 *= sizeof(int16_t);
    }
    FUNC_1(VAR_6,VAR_5,VAR_7);
}
