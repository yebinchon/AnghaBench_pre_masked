
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ contents; int encoding; } ;
typedef TYPE_1__ intset ;
typedef void* int64_t ;
typedef void* int32_t ;
typedef void* int16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (void**) ;
 int FUNC_2 (void**) ;
 int FUNC_3 (void**) ;

__attribute__((used)) static void FUNC_4(intset *VAR_2, int VAR_3, int64_t VAR_4) {
    uint32_t VAR_5 = FUNC_0(VAR_2->encoding);

    if (VAR_5 == VAR_1) {
        ((int64_t*)VAR_2->contents)[VAR_3] = VAR_4;
        FUNC_3(((int64_t*)VAR_2->contents)+VAR_3);
    } else if (VAR_5 == VAR_0) {
        ((int32_t*)VAR_2->contents)[VAR_3] = VAR_4;
        FUNC_2(((int32_t*)VAR_2->contents)+VAR_3);
    } else {
        ((int16_t*)VAR_2->contents)[VAR_3] = VAR_4;
        FUNC_1(((int16_t*)VAR_2->contents)+VAR_3);
    }
}
